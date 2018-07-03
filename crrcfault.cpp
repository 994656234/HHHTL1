#include "crrcfault.h"
#include "crrcmvb.h"
#include <QFile>
#include <QStringList>
#include <QDateTime>
#include <stdlib.h>
#include "qdebug.h"
#include "QMutexLocker"

#define _CRRC_FAULT_VERSION 2.0
#define _CRRC_MAX_HISTORY_FAULT_RECORD 5000
#define _CRRC_PORT_SIZE 32
#define _CRRC_QUERY_FAULT_LEVEL 2


CrrcFault* CrrcFault::crrcFault = NULL;

CrrcFault* CrrcFault::getCrrcFault()
{
    return crrcFault;
}

bool CrrcFault::initCrrcFault(QString faultListPath, QString historyFilePath)
{

    if(crrcFault == NULL)
    {
        crrcFault = new CrrcFault(faultListPath, historyFilePath);
    }

    if(crrcFault == NULL)
    {
        return false;
    }else
    {
        return true;
    }
}

CrrcFault::CrrcFault(QString databaseFaultTypeName, QString databaseHistoryFaultName)
    : databaseFaultTypeName(databaseFaultTypeName), databaseHistoryFaultName(databaseHistoryFaultName)
{
    crrcFaultMapper = new CrrcFaultMapper(databaseFaultTypeName,databaseHistoryFaultName);

    if(crrcFaultMapper->openDatabase())
    {
        this->readFaultTypeListFile();
        this->readHistoryFaultFile();
    }else
    {
        qDebug()<<"DB open fail";
    }

}
void CrrcFault::closeDB()
{
    //close thread
    this->terminate();
    this->crrcFaultMapper->closeDatabase();
}

void CrrcFault::getLocalDateTime(QDateTime datetime)
{
    this->m_Localdatetime = datetime;
}


void CrrcFault::run()
{
    while(1)
    {
        // fault scanning 200ms per period.

        if (NULL == CrrcMvb::getCrrcMvb())
        {
            qDebug() << "there is no crrcMvb class, please check it";

            return;
        }
        bool tmp_NewFaultOccur = false;
        int t_circlefaultcnt;
        {
            QMutexLocker locker(&m_lock);
            t_circlefaultcnt = this->crrcFaultMapper->GetNextHistoryFaultID();// record max History_ID since step into circleqde
        }

        QTime timeStart(QTime::currentTime());


        foreach (quint32 key, this->FaultTypeHash.keys())
        {

            if(!CrrcMvb::getCrrcMvb()->getportexist(FaultTypeHash[key].PortAddress))
            {
                //not defined ports ;
            }else
            {
                if (FaultTypeHash[key].FaultValid == CrrcMvb::getCrrcMvb()->getBool(FaultTypeHash[key].PortAddress, FaultTypeHash[key].ByteoffAddress, FaultTypeHash[key].BitoffAddress))
                {
                   if (this->CurrentFaultHash.contains(key) == false)
                   {
                       FaultBean t_faultBean;
                       t_faultBean.HistoryID = t_circlefaultcnt;
                       t_faultBean.StartTime = m_Localdatetime.toString("yyyy-MM-dd hh:mm:ss");
                       t_faultBean.ID = key;
                       t_faultBean.IsConfirm = false;
                       //create insert faultbean hash
                       this->InsertHistoryFaultHash.insert(t_circlefaultcnt,t_faultBean);
                       t_circlefaultcnt++;
                       //qDebug()<<key <<t_circlefaultcnt;

                       tmp_NewFaultOccur = true;
                       this->NewFaultOccur  =true;
                   }

                }
                else if (this->CurrentFaultHash.contains(key) == true)
                {
                    FaultBean t_faultBean;
                    t_faultBean.EndTime = m_Localdatetime.toString("yyyy-MM-dd hh:mm:ss");

                    //insert update historyfault bean hash
                    this->UpdateHistoryFaultHash.insert(this->CurrentFaultHash.value(key).HistoryID,t_faultBean);

                    tmp_NewFaultOccur = true;

                }
            }
        }


        if(tmp_NewFaultOccur)
        {
            //when new fault occurs, refresh history and current fault list,then load them from DB and RAM
            this->currentFaultList.clear();
            this->historyFaultList.clear();
            this->unconfirmFaultList.clear();
            this->CurrentFaultHash.clear();

            {
                QMutexLocker locker(&m_lock);
                if(this->crrcFaultMapper->InsertHistoryFault(InsertHistoryFaultHash)&&
                this->crrcFaultMapper->UpdateHistoryFault(UpdateHistoryFaultHash))
                {
                    this->crrcFaultMapper->GetHistoryFault(this->historyFaultList);
                    this->crrcFaultMapper->GetCurrentFault(this->currentFaultList,this->CurrentFaultHash);
                    this->crrcFaultMapper->GetUnconfirmFault(this->unconfirmFaultList);

                    // uncomfirm fault query, remove level >_CRRC_QUERY_FAULT_LEVEL fault
                    for(int i = 0; i < unconfirmFaultList.size();i++)
                    {
                        if(FaultTypeHash[unconfirmFaultList.at(i).ID].FaultLevel > _CRRC_QUERY_FAULT_LEVEL)
                        {
                            unconfirmFaultList.removeAt(i);
                        }
                    }

                }
                this->InsertHistoryFaultHash.clear();
                this->UpdateHistoryFaultHash.clear();
            }
            tmp_NewFaultOccur = false;

        }
        //qDebug() << "scanning fault : " << timeStart.msecsTo(QTime::currentTime());
        msleep(200);

    }

}

void CrrcFault::deleteConfirmFault()
{
    QMutexLocker locker(&m_lock);

    if(this->unconfirmFaultList.size()>0)
    {
        // update the max index element of unconfirm list,then reload unconfirm fault list
        this->crrcFaultMapper->UpdateUnconfirmFault(this->unconfirmFaultList.at(this->unconfirmFaultList.size()-1).HistoryID);
        unconfirmFaultList.clear();
        this->crrcFaultMapper->GetUnconfirmFault(this->unconfirmFaultList);
    }
}
void CrrcFault::deleteAllconfirmFault()
{
    QMutexLocker locker(&m_lock);

    for(int i = unconfirmFaultList.size()-1; i >-1 ;i--)
    {
        this->crrcFaultMapper->UpdateUnconfirmFault(this->unconfirmFaultList.at(i).HistoryID);
    }
    unconfirmFaultList.clear();
    this->crrcFaultMapper->GetUnconfirmFault(this->unconfirmFaultList);
}
QString CrrcFault::getCurrentFaultDate(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the current fault list"<<this->currentFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->currentFaultList.at(index).StartTime, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("yyyy-MM-dd");
    }
}

QString CrrcFault::getCurrentFaultTime(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the current fault list"<<this->currentFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->currentFaultList.at(index).StartTime, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("hh:mm:ss");
    }
}

QString CrrcFault::getCurrentFaultCode(unsigned short index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the current fault list"<<this->currentFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->currentFaultList.at(index).ID].FaultCode.trimmed();
    }
}

QString CrrcFault::getCurrentFaultName(unsigned short index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the current fault list"<<this->currentFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->currentFaultList.at(index).ID].FaultName.trimmed();
    }
}

QString CrrcFault::getCurrentFaultDevice(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the current fault list"<<this->currentFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->currentFaultList.at(index).ID].FaultDevice.trimmed();
    }
}

QString CrrcFault::getCurrentFaultPosition(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the current fault list"<<this->currentFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->currentFaultList.at(index).ID].FaultPosition.trimmed();
    }
}

QString CrrcFault::getCurrentFaultDescription(unsigned short index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the current fault list"<<this->currentFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->currentFaultList.at(index).ID].FaultDescription.trimmed();
    }
}
QString CrrcFault::getCurrentFaultLevel(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->currentFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->currentFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return QString::number(this->FaultTypeHash[this->currentFaultList.at(index).ID].FaultLevel);
    }
}
QString CrrcFault::getHistoryFaultLevel(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return QString::number(this->FaultTypeHash[this->historyFaultList.at(index).ID].FaultLevel);
    }
}

QString CrrcFault::getHistoryFaultStartDate(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->historyFaultList.at(index).StartTime, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("yyyy-MM-dd");
    }
}

QString CrrcFault::getHistoryFaultStartTime(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->historyFaultList.at(index).StartTime, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("hh:mm:ss");
    }
}

QString CrrcFault::getHistoryFaultEndDate(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->historyFaultList.at(index).EndTime, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("yyyy-MM-dd");
    }
}

QString CrrcFault::getHistoryFaultEndTime(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->historyFaultList.at(index).EndTime, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("hh:mm:ss");
    }
}

QString CrrcFault::getHistoryFaultCode(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->historyFaultList.at(index).ID].FaultCode.trimmed();
    }
}

QString CrrcFault::getHistoryFaultName(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->historyFaultList.at(index).ID].FaultName.trimmed();
    }
}

QString CrrcFault::getHistoryFaultDevice(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->historyFaultList.at(index).ID].FaultDevice.trimmed();
    }
}

QString CrrcFault::getHistoryFaultPosition(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->historyFaultList.at(index).ID].FaultPosition.trimmed();
    }
}


QString CrrcFault::getHistoryFaultDescription(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->historyFaultList.size())
    {
        qDebug() << "the index: "<<index<<" is larger than the history fault list"<<this->historyFaultList.size()<<", please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->historyFaultList.at(index).ID].FaultDescription.trimmed();
    }
}

void CrrcFault::readFaultTypeListFile()
{
    this->crrcFaultMapper->GetFaultTypeHash(this->FaultTypeHash);
}

void CrrcFault::readHistoryFaultFile()
{
    this->crrcFaultMapper->GetHistoryFault(historyFaultList);

    qDebug() << "there are" << this->historyFaultList.size() << "record in the history fault list file" << __FILE__ << __LINE__;

    this->crrcFaultMapper->GetCurrentFault(this->currentFaultList,this->CurrentFaultHash);
    this->crrcFaultMapper->GetUnconfirmFault(this->unconfirmFaultList);

    if(this->unconfirmFaultList.size()>0)
    {
        this->NewFaultOccur  = true;
    }
}




unsigned short int CrrcFault::getCurrentFaultListSize()
{
    QMutexLocker locker(&m_lock);
    return this->currentFaultList.size();
    //return 0;
}

unsigned short int CrrcFault::getHistoryFaultListSize()
{
    QMutexLocker locker(&m_lock);
    return this->historyFaultList.size();
    //return 0;
}


QString CrrcFault::getConfirmFaultDate(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->unconfirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->unconfirmFaultList.at(index).StartTime, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("yyyy-MM-dd");
    }
}

QString CrrcFault::getConfirmFaultTime(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->unconfirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        QDateTime dateTime = QDateTime::fromString(this->unconfirmFaultList.at(index).StartTime, QString("yyyy-MM-dd hh:mm:ss"));

        return dateTime.toString("hh:mm:ss");
    }
}

QString CrrcFault::getConfirmFaultCode(unsigned short index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->unconfirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->unconfirmFaultList.at(index).ID].FaultCode.trimmed();
    }
}

QString CrrcFault::getConfirmFaultName(unsigned short index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->unconfirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->unconfirmFaultList.at(index).ID].FaultName.trimmed();
    }
}

QString CrrcFault::getConfirmFaultDevice(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->unconfirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->unconfirmFaultList.at(index).ID].FaultDevice.trimmed();
    }
}

QString CrrcFault::getConfirmFaultPosition(unsigned short int index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->unconfirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->unconfirmFaultList.at(index).ID].FaultPosition.trimmed();
    }
}

QString CrrcFault::getConfirmFaultDescription(unsigned short index)
{
    QMutexLocker locker(&m_lock);

    if (index >= this->unconfirmFaultList.size())
    {
        qDebug() << "the index is larger than the Confirm fault list, please check it" << __FILE__ << __LINE__;

        return QString("");
    }
    else
    {
        return this->FaultTypeHash[this->unconfirmFaultList.at(index).ID].FaultDescription.trimmed();
    }
}
unsigned short int CrrcFault::getConfirmFaultListSize()
{
    QMutexLocker locker(&m_lock);

    return this->unconfirmFaultList.size();

}
unsigned int CrrcFault::getFaultCntOfEachVehicle(QString str)
{
    QMutexLocker locker(&m_lock);
    int res = 0;
    int t_size = this->historyFaultList.size();
    for(int i = 0;i<t_size;i++)
    {
        if(FaultTypeHash[this->historyFaultList[i].ID].FaultPosition.trimmed() == str)
            res++;
    }
    return res;

}
unsigned int CrrcFault::getFaultCntOfEachSystem(QString str)
{
    QMutexLocker locker(&m_lock);
    int res = 0;
    int t_size = this->historyFaultList.size();
    for(int i = 0;i<t_size;i++)
    {
        if(FaultTypeHash[this->historyFaultList[i].ID].FaultDevice.trimmed() == str)
            res++;
    }
    return res;

}
void CrrcFault::getQueryFaultOfEachSystem(QString str)
{
    QMutexLocker locker(&m_lock);
    QueryList.clear();
    int t_size = this->historyFaultList.size();
    for(int i = 0;i<t_size;i++)
    {
        //将historyfaultlist中的HID的下脚标传给筛选显示页面，筛选显示页面通过list中脚标位置，get出faulttype信息。
        if(FaultTypeHash[this->historyFaultList[i].ID].FaultDevice.trimmed() == str)
            QueryList.push_back(i);
    }
}
void CrrcFault::getQueryFaultOfEachVehicle(QString str)
{
    QMutexLocker locker(&m_lock);
    QueryList.clear();
    int t_size = this->historyFaultList.size();
    for(int i = 0;i<t_size;i++)
    {
        if(FaultTypeHash[this->historyFaultList[i].ID].FaultPosition.trimmed() == str)
            QueryList.push_back(i);

            //QueryList.push_front(this->historyFaultList[i].HistoryID);
    }
}
QList<unsigned int> CrrcFault::getQueryFault()
{
    return this->QueryList;
}

QString CrrcFault::getFaultTypeVersion()
{
    return this->crrcFaultMapper->GetTypeDBInfo();
}
