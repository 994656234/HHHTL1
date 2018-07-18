#include "widget.h"
#include "ui_widget.h"
#include "mybase.h"
#include "header.h"
#include "qtimer.h"
#include "database.h"
#include "navigator.h"
#include "vehiclerunstatepage.h"
#include "crrcmvb.h"
#include "crrcfault.h"
#include "simulation.h"

#include "vehiclestationbar.h"
#include "vehicletrainarea.h"
#include "vehiclestatusarea.h"
#include "vehicleinformationarea.h"
#include "vehiclepasswordpage.h"

#include "vehicleairconditionerpage.h"
#include "vehicleauxiliarypage.h"
#include "vehiclelinecircuitbreakerpage.h"
#include "vehicledoorpage.h"
#include "vehiclepispage.h"
#include "vehiclebrakepage.h"
#include "vehicletractpage.h"
#include "vehiclefirewarningpage.h"
#include "vehicleaircompressorpage.h"
#include "vehicletopologypage.h"
#include "vehiclesetpage.h"
#include "vehiclesetstationpage.h"
#include "vehiclesetairconditionpage.h"
#include "vehiclemaintainpage.h"
#include "vehiclemthistoryfaultpage.h"
#include "vehiclemttimesetpage.h"
#include "maintainceallportspage.h"
#include "maintainceinitsetpage.h"
#include "maintainceriompage.h"
#include "maintaincewheeldiametersetpage.h"
#include "maintaincesoftwareversionpage.h"
#include "maintaincedatamanagepage.h"
#include "maintainceresetexcisionpage.h"
#include "maintaincecommunicationstatepage.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QDesktopWidget *desktop = QApplication::desktop();

    if (desktop->width() == 800 && desktop->height() == 600)
    {
        this->showFullScreen();
    }
    else
    {
        this->move((desktop->width() - this->width()) / 2, (desktop->height() - this->height()) / 2);
    }

    this->database = new Database();
    MyBase::database = this->database;

    this->timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(updatePage()));

    if(CrrcFault::initCrrcFault("fault_type_SY9.db","fault_DB_SY9.db"))
    {
        crrcFault = CrrcFault::getCrrcFault();
    }else
    {
        logger()->error("故障文件初始化错误");
    }
    crrcMvb = CrrcMvb::getCrrcMvb();

    this->simulation=new Simulation();
    this->simulation->hide();

    this->header = new Header(this);
    this->header->setMyBase(uTop,QString("标题栏"));
    this->header->show();

    this->navigator = new Navigator(this);
    this->navigator->setMyBase(uBottom,QString("导航栏"));
    this->navigator->show();

    this->vehicleRunStatePage = new VehicleRunStatePage(this);
    this->vehicleRunStatePage->setMyBase(uTrain,QString("一般信息"));
    this->vehicleRunStatePage->show();

    this->vehicleStationBar = new VehicleStationBar(this);
    this->vehicleStationBar->setMyBase(uStation,QString("站点信息"));
    this->vehicleStationBar->show();

    this->vehicleTrainArea = new VehicleTrainArea(this);
    this->vehicleTrainArea->setMyBase(uMainRunstatus,QString("车体"));
    this->vehicleTrainArea->show();

    this->vehicleStatusArea = new VehicleStatusArea(this);
    this->vehicleStatusArea->setMyBase(uStatus,QString("过程信息"));
    this->vehicleStatusArea->show();

    this->vehicleInformationArea = new VehicleInformationArea(this);
    this->vehicleInformationArea->setMyBase(uInformation,QString("提示信息"));
    this->vehicleInformationArea->show();

    this->vehiclePasswordPage = new VehiclePasswordPage(this);
    this->vehiclePasswordPage->setMyBase(uMiddle,QString("密码页面"));
    this->vehiclePasswordPage->hide();

    this->vehicleAirConditionerPage=new VehicleAirConditionerPage(this);
    this->vehicleAirConditionerPage->setMyBase(uTrain,QString("空调界面"));
    this->vehicleAirConditionerPage->hide();

    this->vehicleAuxiliaryPage=new VehicleAuxiliaryPage(this);
    this->vehicleAuxiliaryPage->setMyBase(uTrain,QString("辅助界面"));
    this->vehicleAuxiliaryPage->hide();

    this->vehicleLineCircuitBreakerPage=new VehicleLineCircuitBreakerPage(this);
    this->vehicleLineCircuitBreakerPage->setMyBase(uTrain,QString("主回路界面"));
    this->vehicleLineCircuitBreakerPage->hide();

    this->vehicleDoorPage=new VehicleDoorPage(this);
    this->vehicleDoorPage->setMyBase(uTrain,QString("车门界面"));
    this->vehicleDoorPage->hide();

    this->vehiclePISPage=new VehiclePISPage(this);
    this->vehiclePISPage->setMyBase(uTrain,QString("PIS界面"));
    this->vehiclePISPage->hide();

    this->vehicleBrakePage=new VehicleBrakePage(this);
    this->vehicleBrakePage->setMyBase(uTrain,QString("制动界面"));
    this->vehicleBrakePage->hide();

    this->vehicleTractPage=new VehicleTractPage(this);
    this->vehicleTractPage->setMyBase(uTrain,QString("牵引界面"));
    this->vehicleTractPage->hide();

    this->vehicleFireWarningPage=new VehicleFireWarningPage(this);
    this->vehicleFireWarningPage->setMyBase(uTrain,QString("火灾报警"));
    this->vehicleFireWarningPage->hide();

    this->vehicleAirCompressorPage=new VehicleAirCompressorPage(this);
    this->vehicleAirCompressorPage->setMyBase(uTrain,QString("空压机界面"));
    this->vehicleAirCompressorPage->hide();

    this->vehicleTopologyPage=new VehicleTopologyPage(this);
    this->vehicleTopologyPage->setMyBase(uTolopogy,QString("拓扑界面"));
    this->vehicleTopologyPage->hide();

    this->vehicleSetPage=new VehicleSetPage(this);
    this->vehicleSetPage->setMyBase(uMiddle,QString("设置界面"));
    this->vehicleSetPage->hide();

    this->vehicleSetStationPage=new VehicleSetStationPage(this);
    this->vehicleSetStationPage->setMyBase(uMiddle,QString("站点设置界面"));
    this->vehicleSetStationPage->hide();

    this->vehicleSetAirConditionPage=new VehicleSetAirConditionPage(this);
    this->vehicleSetAirConditionPage->setMyBase(uMiddle,QString("空调设置界面"));
    this->vehicleSetAirConditionPage->hide();





    this->vehicleMaintainPage=new VehicleMaintainPage(this);
    this->vehicleMaintainPage->setMyBase(uMiddle,QString("维护界面"));
    this->vehicleMaintainPage->hide();

    this->vehicleMTTimeSetPage=new VehicleMTTimeSetPage(this);
    this->vehicleMTTimeSetPage->setMyBase(uMiddle,QString("时间设定界面"));
    this->vehicleMTTimeSetPage->hide();

    this->vehicleMTHistoryFaultPage=new VehicleMTHistoryFaultPage(this);
    this->vehicleMTHistoryFaultPage->setMyBase(uMiddle,QString("故障履历界面"));
    this->vehicleMTHistoryFaultPage->hide();

    this->vehicleMaintainceAllPortsPage=new MaintainceAllPortsPage(this);
    this->vehicleMaintainceAllPortsPage->setMyBase(uHuge,QString("数据监控界面"));
    this->vehicleMaintainceAllPortsPage->hide();
    this->vehicleMaintainceAllPortsPage->installMvb(this->crrcMvb);

    this->vehicleMaintainceInitSetPage=new MaintainceInitSetPage(this);
    this->vehicleMaintainceInitSetPage->setMyBase(uMiddle,QString("显示屏设置界面"));
    this->vehicleMaintainceInitSetPage->hide();

    this->vehicleMaintainceRIOMPage=new MaintainceRIOMPage(this);
    this->vehicleMaintainceRIOMPage->setMyBase(uMiddle,QString("RIOM界面"));
    this->vehicleMaintainceRIOMPage->hide();

    this->vehicleMaintainceWheelDiameterSetPage=new MaintainceWheelDiameterSetPage(this);
    this->vehicleMaintainceWheelDiameterSetPage->setMyBase(uMiddle,QString("轮径设置界面"));
    this->vehicleMaintainceWheelDiameterSetPage->hide();

    this->vehicleMaintainceSoftwareVersionPage=new MaintainceSoftwareVersionPage(this);
    this->vehicleMaintainceSoftwareVersionPage->setMyBase(uMiddle,QString("版本信息界面"));
    this->vehicleMaintainceSoftwareVersionPage->hide();

    this->vehicleMaintainceDataManagePage=new MaintainceDataManagePage(this);
    this->vehicleMaintainceDataManagePage->setMyBase(uMiddle,QString("数据管理界面"));
    this->vehicleMaintainceDataManagePage->hide();

    this->vehicleMaintainceResetExcisionPage=new MaintainceResetExcisionPage(this);
    this->vehicleMaintainceResetExcisionPage->setMyBase(uMiddle,QString("复位切除"));
    this->vehicleMaintainceResetExcisionPage->hide();

    this->vehicleMaintainceCommunicationStatePage=new MaintainceCommunicationStatePage(this);
    this->vehicleMaintainceCommunicationStatePage->setMyBase(uMiddle,QString("通信状态界面"));
    this->vehicleMaintainceCommunicationStatePage->hide();

    this->widgets.insert(uVehicleRunStatePage,this->vehicleRunStatePage);
    this->widgets.insert(uVehicleStationBar,this->vehicleStationBar);
    this->widgets.insert(uVehicleTrainArea,this->vehicleTrainArea);
    this->widgets.insert(uVehicleStatusArea,this->vehicleStatusArea);
    this->widgets.insert(uVehicleInformationArea,this->vehicleInformationArea);
    this->widgets.insert(uVehiclePasswordPage,this->vehiclePasswordPage);

    this->widgets.insert(uVehicleAirConditionerPage,this->vehicleAirConditionerPage);
    this->widgets.insert(uVehicleAuxiliaryPage,this->vehicleAuxiliaryPage);
    this->widgets.insert(uVehicleLineCircuitBreakerPage,this->vehicleLineCircuitBreakerPage);
    this->widgets.insert(uVehicleDoorPage,this->vehicleDoorPage);
    this->widgets.insert(uVehiclePISPage,this->vehiclePISPage);
    this->widgets.insert(uVehicleBrakePage,this->vehicleBrakePage);
    this->widgets.insert(uVehicleTractPage,this->vehicleTractPage);
    this->widgets.insert(uVehicleFireWarningPage,this->vehicleFireWarningPage);
    this->widgets.insert(uVehicleAirCompressorPage,this->vehicleAirCompressorPage);
    this->widgets.insert(uVehicleTopologyPage,this->vehicleTopologyPage);
    this->widgets.insert(uVehicleSetPage,this->vehicleSetPage);
    this->widgets.insert(uVehicleSetStationPage,this->vehicleSetStationPage);
    this->widgets.insert(uVehicleSetAirConditionPage,this->vehicleSetAirConditionPage);
    this->widgets.insert(uVehicleMaintainPage,this->vehicleMaintainPage);
    this->widgets.insert(uVehicleMTHistoryFaultPage,this->vehicleMTHistoryFaultPage);
    this->widgets.insert(uVehicleMTTimeSetPage,this->vehicleMTTimeSetPage);
    this->widgets.insert(uVehicleMaintainceAllPortsPage,this->vehicleMaintainceAllPortsPage);
    this->widgets.insert(uVehicleMaintainceInitSetPage,this->vehicleMaintainceInitSetPage);
    this->widgets.insert(uVehicleMaintainceRIOMPage,this->vehicleMaintainceRIOMPage);
    this->widgets.insert(uVehicleMaintainceWheelDiameterSetPage,this->vehicleMaintainceWheelDiameterSetPage);
    this->widgets.insert(uVehicleMaintainceSoftwareVersionPage,this->vehicleMaintainceSoftwareVersionPage);
    this->widgets.insert(uVehicleMaintainceDataManagePage,this->vehicleMaintainceDataManagePage);
    this->widgets.insert(uVehicleMaintainceResetExcisionPage,this->vehicleMaintainceResetExcisionPage);
    this->widgets.insert(uVehicleMaintainceCommunicationStatePage,this->vehicleMaintainceCommunicationStatePage);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::updatePage()
{
    static QTime timeStart(QTime::currentTime());

    static int counter = 1;
    this->header->updatePage();
    this->widgets[MyBase::currentPage]->updatePage();

    // update comm data,some base logic
    if(counter%2 == 0)
    {
        crrcMvb->synchronizeMvbData();
        this->simulation->installMvb(crrcMvb);
    }

    // start fault scanning thread
    static int faultdelaycnt = 0;
    if ((faultdelaycnt++ > 45) )
    {
        crrcFault->start();
        faultdelaycnt = 60;
    }


    counter >= 100 ? (counter = 1) : (counter ++);


    if (timeStart.msecsTo(QTime::currentTime()) > 500)
    {
        _LOG << "update page time out fault" << timeStart.msecsTo(QTime::currentTime()) << ", please check it";
    }

    timeStart = QTime::currentTime();

}
void Widget::changePage(int page)
{
    foreach (int key, this->widgets.keys())
    {

        if (key == page)
        {
            MyBase::currentPage = page;
            this->widgets[page]->show();

            this->header->setPageName(this->widgets[page]->name);

            if(this->widgets[page]->Position == uHuge)
            {
                this->header->hide();
                this->navigator->hide();
                this->vehicleStationBar->hide();
                this->vehicleStatusArea->hide();
                this->vehicleInformationArea->hide();
                this->vehicleTrainArea->hide();
                this->vehicleStatusArea->refreshAllButton();
            }else if(this->widgets[key]->Position == uMiddle)
            {
                this->header->show();
                this->navigator->hide();
                this->vehicleStationBar->hide();
                this->vehicleStatusArea->hide();
                this->vehicleInformationArea->hide();
                this->vehicleTrainArea->hide();
                this->vehicleStatusArea->refreshAllButton();
            }else if(this->widgets[key]->Position == uTrain)
            {

                this->header->show();
                this->navigator->show();
                this->vehicleStationBar->show();
                this->vehicleStatusArea->show();
                this->vehicleInformationArea->show();
                //this->vehicleTrainArea->hide();
            } else if(this->widgets[key]->Position==uTolopogy)
            {
                //拓扑界面单独设置了一种模式
                this->header->show();
                this->navigator->show();
                this->vehicleStationBar->show();
                this->vehicleTopologyPage->show();
                this->vehicleInformationArea->show();
            }
            else if(this->widgets[key]->Position==uMainRunstatus)
            {
                this->header->show();
                this->navigator->show();
                this->vehicleStationBar->show();
                this->vehicleStatusArea->show();
                this->vehicleStatusArea->refreshAllButton();//点击HOME按键的时候刷新按键的状态
                this->vehicleInformationArea->show();
            }
            _LOG << "change page to" << this->widgets[page]->name;
        }
        else
        {
            this->widgets[key]->hide();
        }
    }
}
void Widget::showEvent(QShowEvent *)
{
    this->header->setPageName(this->widgets[uVehicleRunStatePage]->name);

    if(MainGetDefaultPara::configureValid())
    {
#ifndef WINDOWS_MODE
        if(database->HMIPosition == 1)//config  sourcePORT and IP
        {
            system("ifconfig eth0 192.168.2.3");

            if(!crrcMvb->initializeMvb(0x31))
            {
                logger()->error("MVB板卡初始化失败");
            }

            //HMI-CCU
            system("ifconfig eth0 192.168.2.3");

            if(!crrcMvb->initializeMvb(0x31))
            {
                logger()->error("MVB板卡初始化失败");
            }

            //HMI-CCU
            crrcMvb->addSourcePort(0x210,uFCode4,256);
            crrcMvb->addSourcePort(0x211,uFCode4,256);
            crrcMvb->addSourcePort(0x212,uFCode4,256);
            crrcMvb->addSourcePort(0x213,uFCode4,256);

            crrcMvb->addSinkPort(0x220,uFCode4,256);
            crrcMvb->addSinkPort(0x221,uFCode4,256);
            crrcMvb->addSinkPort(0x222,uFCode4,256);
            crrcMvb->addSinkPort(0x223,uFCode4,256);

        }else if(database->HMIPosition == 2)
        {
            system("ifconfig eth0 192.168.2.4");
            if(!crrcMvb->initializeMvb(0x32))
            {
                logger()->error("MVB板卡初始化失败");
            }
            //HMI-CCU
            crrcMvb->addSinkPort(0x210,uFCode4,256);
            crrcMvb->addSinkPort(0x211,uFCode4,256);
            crrcMvb->addSinkPort(0x212,uFCode4,256);
            crrcMvb->addSinkPort(0x213,uFCode4,256);

            crrcMvb->addSourcePort(0x220,uFCode4,256);
            crrcMvb->addSourcePort(0x221,uFCode4,256);
            crrcMvb->addSourcePort(0x222,uFCode4,256);
            crrcMvb->addSourcePort(0x223,uFCode4,256);

        }
        //add ports
        {
            //CCU-HMI
            crrcMvb->addSinkPort(0x208,uFCode4,128);
            crrcMvb->addSinkPort(0x209,uFCode4,128);
            crrcMvb->addSinkPort(0x20A,uFCode4,128);

            //RIOM-CCU
            crrcMvb->addSinkPort(0x110,uFCode4,64);
            crrcMvb->addSinkPort(0x111,uFCode4,64);
            crrcMvb->addSinkPort(0x120,uFCode4,64);
            crrcMvb->addSinkPort(0x121,uFCode4,64);
            crrcMvb->addSinkPort(0x130,uFCode4,64);
            crrcMvb->addSinkPort(0x131,uFCode4,64);
            crrcMvb->addSinkPort(0x140,uFCode4,64);
            crrcMvb->addSinkPort(0x141,uFCode4,64);
            crrcMvb->addSinkPort(0x150,uFCode4,64);
            crrcMvb->addSinkPort(0x151,uFCode4,64);
            crrcMvb->addSinkPort(0x160,uFCode4,64);
            crrcMvb->addSinkPort(0x161,uFCode4,64);
            crrcMvb->addSinkPort(0x170,uFCode4,64);
            crrcMvb->addSinkPort(0x171,uFCode4,64);
            crrcMvb->addSinkPort(0x180,uFCode4,64);
            crrcMvb->addSinkPort(0x181,uFCode4,64);

            //ERM-CCU
            crrcMvb->addSinkPort(0x310,uFCode4,256);
            crrcMvb->addSinkPort(0x311,uFCode4,256);
            crrcMvb->addSinkPort(0x312,uFCode4,256);
            crrcMvb->addSinkPort(0x313,uFCode4,256);

            crrcMvb->addSinkPort(0x320,uFCode4,256);
            crrcMvb->addSinkPort(0x321,uFCode4,256);
            crrcMvb->addSinkPort(0x322,uFCode4,256);
            crrcMvb->addSinkPort(0x323,uFCode4,256);

            //DCU-CCU
            crrcMvb->addSinkPort(0x480,uFCode3,32);
            crrcMvb->addSinkPort(0x481,uFCode4,64);
            crrcMvb->addSinkPort(0x482,uFCode4,512);
            crrcMvb->addSinkPort(0x483,uFCode4,512);
            crrcMvb->addSinkPort(0x484,uFCode3,512);

            crrcMvb->addSinkPort(0x490,uFCode3,32);
            crrcMvb->addSinkPort(0x491,uFCode4,64);
            crrcMvb->addSinkPort(0x492,uFCode4,512);
            crrcMvb->addSinkPort(0x493,uFCode4,512);
            crrcMvb->addSinkPort(0x494,uFCode3,512);

            crrcMvb->addSinkPort(0x4C0,uFCode3,32);
            crrcMvb->addSinkPort(0x4C1,uFCode4,64);
            crrcMvb->addSinkPort(0x4C2,uFCode4,512);
            crrcMvb->addSinkPort(0x4C3,uFCode4,512);
            crrcMvb->addSinkPort(0x4C4,uFCode3,512);

            crrcMvb->addSinkPort(0x4D0,uFCode3,32);
            crrcMvb->addSinkPort(0x4D1,uFCode4,64);
            crrcMvb->addSinkPort(0x4D2,uFCode4,512);
            crrcMvb->addSinkPort(0x4D3,uFCode4,512);
            crrcMvb->addSinkPort(0x4D4,uFCode3,512);

            //SIV-CCU
            crrcMvb->addSinkPort(0x501,uFCode4,64);
            crrcMvb->addSinkPort(0x502,uFCode4,512);
            crrcMvb->addSinkPort(0x503,uFCode4,512);
            crrcMvb->addSinkPort(0x504,uFCode3,512);

            crrcMvb->addSinkPort(0x511,uFCode4,64);
            crrcMvb->addSinkPort(0x512,uFCode4,512);
            crrcMvb->addSinkPort(0x513,uFCode4,512);
            crrcMvb->addSinkPort(0x514,uFCode3,512);

            crrcMvb->addSinkPort(0x521,uFCode4,64);
            crrcMvb->addSinkPort(0x522,uFCode4,512);
            crrcMvb->addSinkPort(0x523,uFCode4,512);
            crrcMvb->addSinkPort(0x524,uFCode3,512);

            crrcMvb->addSinkPort(0x531,uFCode4,64);
            crrcMvb->addSinkPort(0x532,uFCode4,512);
            crrcMvb->addSinkPort(0x533,uFCode4,512);
            crrcMvb->addSinkPort(0x534,uFCode3,512);

            //BCU-CCU
            crrcMvb->addSinkPort(0x610,uFCode4,128);
            crrcMvb->addSinkPort(0x611,uFCode4,64);
            crrcMvb->addSinkPort(0x612,uFCode4,64);
            crrcMvb->addSinkPort(0x613,uFCode4,128);
            crrcMvb->addSinkPort(0x614,uFCode4,512);

            crrcMvb->addSinkPort(0x620,uFCode4,128);
            crrcMvb->addSinkPort(0x621,uFCode4,64);
            crrcMvb->addSinkPort(0x622,uFCode4,64);
            crrcMvb->addSinkPort(0x623,uFCode4,128);
            crrcMvb->addSinkPort(0x624,uFCode4,512);

            crrcMvb->addSinkPort(0x630,uFCode4,128);
            crrcMvb->addSinkPort(0x631,uFCode4,64);
            crrcMvb->addSinkPort(0x632,uFCode4,64);
            crrcMvb->addSinkPort(0x633,uFCode4,128);
            crrcMvb->addSinkPort(0x634,uFCode4,512);

            crrcMvb->addSinkPort(0x640,uFCode4,128);
            crrcMvb->addSinkPort(0x641,uFCode4,64);
            crrcMvb->addSinkPort(0x642,uFCode4,64);
            crrcMvb->addSinkPort(0x643,uFCode4,128);
            crrcMvb->addSinkPort(0x644,uFCode4,512);

            //EDCU-CCU
            crrcMvb->addSinkPort(0x710,uFCode4,512);
            crrcMvb->addSinkPort(0x711,uFCode4,1024);
            crrcMvb->addSinkPort(0x712,uFCode4,1024);

            crrcMvb->addSinkPort(0x720,uFCode4,512);
            crrcMvb->addSinkPort(0x721,uFCode4,1024);
            crrcMvb->addSinkPort(0x722,uFCode4,1024);

            crrcMvb->addSinkPort(0x730,uFCode4,512);
            crrcMvb->addSinkPort(0x731,uFCode4,1024);
            crrcMvb->addSinkPort(0x732,uFCode4,1024);

            crrcMvb->addSinkPort(0x740,uFCode4,512);
            crrcMvb->addSinkPort(0x741,uFCode4,1024);
            crrcMvb->addSinkPort(0x742,uFCode4,1024);

            crrcMvb->addSinkPort(0x750,uFCode4,512);
            crrcMvb->addSinkPort(0x751,uFCode4,1024);
            crrcMvb->addSinkPort(0x752,uFCode4,1024);

            crrcMvb->addSinkPort(0x760,uFCode4,512);
            crrcMvb->addSinkPort(0x761,uFCode4,1024);
            crrcMvb->addSinkPort(0x762,uFCode4,1024);

            crrcMvb->addSinkPort(0x770,uFCode4,512);
            crrcMvb->addSinkPort(0x771,uFCode4,1024);
            crrcMvb->addSinkPort(0x772,uFCode4,1024);

            crrcMvb->addSinkPort(0x780,uFCode4,512);
            crrcMvb->addSinkPort(0x781,uFCode4,1024);
            crrcMvb->addSinkPort(0x782,uFCode4,1024);

            crrcMvb->addSinkPort(0x790,uFCode4,512);
            crrcMvb->addSinkPort(0x791,uFCode4,1024);
            crrcMvb->addSinkPort(0x792,uFCode4,1024);

            crrcMvb->addSinkPort(0x7A0,uFCode4,512);
            crrcMvb->addSinkPort(0x7A1,uFCode4,1024);
            crrcMvb->addSinkPort(0x7A2,uFCode4,1024);

            crrcMvb->addSinkPort(0x7B0,uFCode4,512);
            crrcMvb->addSinkPort(0x7B1,uFCode4,1024);
            crrcMvb->addSinkPort(0x7B2,uFCode4,1024);

            crrcMvb->addSinkPort(0x7C0,uFCode4,512);
            crrcMvb->addSinkPort(0x7C1,uFCode4,1024);
            crrcMvb->addSinkPort(0x7C2,uFCode4,1024);

            //CCU-D
            crrcMvb->addSinkPort(0x818,uFCode3,512);
            crrcMvb->addSinkPort(0x828,uFCode3,512);

            //HVAC-CCU
            crrcMvb->addSinkPort(0x910,uFCode4,256);
            crrcMvb->addSinkPort(0x920,uFCode4,256);
            crrcMvb->addSinkPort(0x930,uFCode4,256);
            crrcMvb->addSinkPort(0x940,uFCode4,256);
            crrcMvb->addSinkPort(0x950,uFCode4,256);
            crrcMvb->addSinkPort(0x960,uFCode4,256);

            //ATC-CCU
            crrcMvb->addSinkPort(0xA10,uFCode3,64);
            crrcMvb->addSinkPort(0xA11,uFCode4,128);

            crrcMvb->addSinkPort(0xA20,uFCode3,64);
            crrcMvb->addSinkPort(0xA21,uFCode4,128);

            //PIS-CCU
            crrcMvb->addSinkPort(0xB10,uFCode4,256);
            crrcMvb->addSinkPort(0xB20,uFCode4,256);

            //TDS-CCU
            crrcMvb->addSinkPort(0xc10,uFCode4,1024);
            crrcMvb->addSinkPort(0xc11,uFCode4,1024);
            crrcMvb->addSinkPort(0xc12,uFCode4,1024);
            crrcMvb->addSinkPort(0xc13,uFCode4,1024);

            crrcMvb->addSinkPort(0xc20,uFCode4,1024);
            crrcMvb->addSinkPort(0xc21,uFCode4,1024);
            crrcMvb->addSinkPort(0xc22,uFCode4,1024);
            crrcMvb->addSinkPort(0xc23,uFCode4,1024);

            //LCU-CCU
            crrcMvb->addSinkPort(0xD10,uFCode4,512);
            crrcMvb->addSinkPort(0xD11,uFCode4,512);
            crrcMvb->addSinkPort(0xD12,uFCode4,512);
            crrcMvb->addSinkPort(0xD13,uFCode4,512);

            crrcMvb->addSinkPort(0xD20,uFCode4,512);
            crrcMvb->addSinkPort(0xD21,uFCode4,512);
            crrcMvb->addSinkPort(0xD22,uFCode4,512);
            crrcMvb->addSinkPort(0xD23,uFCode4,512);

            crrcMvb->addSinkPort(0xD30,uFCode4,512);
            crrcMvb->addSinkPort(0xD31,uFCode4,512);
            crrcMvb->addSinkPort(0xD32,uFCode4,512);
            crrcMvb->addSinkPort(0xD33,uFCode4,512);

            crrcMvb->addSinkPort(0xD40,uFCode4,512);
            crrcMvb->addSinkPort(0xD41,uFCode4,512);
            crrcMvb->addSinkPort(0xD42,uFCode4,512);
            crrcMvb->addSinkPort(0xD43,uFCode4,512);

            crrcMvb->addSinkPort(0xD50,uFCode4,512);
            crrcMvb->addSinkPort(0xD51,uFCode4,512);
            crrcMvb->addSinkPort(0xD52,uFCode4,512);
            crrcMvb->addSinkPort(0xD53,uFCode4,512);

            crrcMvb->addSinkPort(0xD60,uFCode4,512);
            crrcMvb->addSinkPort(0xD61,uFCode4,512);
            crrcMvb->addSinkPort(0xD62,uFCode4,512);
            crrcMvb->addSinkPort(0xD63,uFCode4,512);

            crrcMvb->addSinkPort(0xD70,uFCode4,512);
            crrcMvb->addSinkPort(0xD71,uFCode4,512);
            crrcMvb->addSinkPort(0xD72,uFCode4,512);
            crrcMvb->addSinkPort(0xD73,uFCode4,512);

            crrcMvb->addSinkPort(0xD80,uFCode4,512);
            crrcMvb->addSinkPort(0xD81,uFCode4,512);
            crrcMvb->addSinkPort(0xD82,uFCode4,512);
            crrcMvb->addSinkPort(0xD83,uFCode4,512);

            //BMS-CCU
            crrcMvb->addSinkPort(0xE10,uFCode4,1024);
            crrcMvb->addSinkPort(0xE20,uFCode4,1024);

            //FAS-CCU
            crrcMvb->addSinkPort(0xE50,uFCode4,256);
            crrcMvb->addSinkPort(0xE60,uFCode4,256);

            //PCU-CCU
            crrcMvb->addSinkPort(0xF10,uFCode3,256);
            crrcMvb->addSinkPort(0xF20,uFCode3,256);


            //CCU-ALL
            crrcMvb->addSinkPort(0x00F,uFCode3,64);

            //CCU-RIOM
            crrcMvb->addSinkPort(0x118,uFCode3,64);
            crrcMvb->addSinkPort(0x128,uFCode3,64);
            crrcMvb->addSinkPort(0x138,uFCode3,64);
            crrcMvb->addSinkPort(0x148,uFCode3,64);
            crrcMvb->addSinkPort(0x158,uFCode3,64);
            crrcMvb->addSinkPort(0x168,uFCode3,64);
            crrcMvb->addSinkPort(0x178,uFCode3,64);
            crrcMvb->addSinkPort(0x188,uFCode3,64);

            //CCU-ERM
            crrcMvb->addSinkPort(0x308,uFCode4,128);
            crrcMvb->addSinkPort(0x309,uFCode4,128);

            //CCU-TCU
            crrcMvb->addSinkPort(0x488,uFCode3,32);
            crrcMvb->addSinkPort(0x489,uFCode4,64);
            crrcMvb->addSinkPort(0x48A,uFCode4,512);

            crrcMvb->addSinkPort(0x498,uFCode3,32);
            crrcMvb->addSinkPort(0x499,uFCode4,64);
            crrcMvb->addSinkPort(0x49A,uFCode4,512);

            crrcMvb->addSinkPort(0x4C8,uFCode3,32);
            crrcMvb->addSinkPort(0x4C9,uFCode4,64);
            crrcMvb->addSinkPort(0x4CA,uFCode4,512);

            crrcMvb->addSinkPort(0x4D8,uFCode3,32);
            crrcMvb->addSinkPort(0x4D9,uFCode4,64);
            crrcMvb->addSinkPort(0x4DA,uFCode4,512);

            //CCU-ACU
            crrcMvb->addSinkPort(0x508,uFCode2,32);
            crrcMvb->addSinkPort(0x509,uFCode3,64);
            crrcMvb->addSinkPort(0x50A,uFCode3,512);

            crrcMvb->addSinkPort(0x518,uFCode2,32);
            crrcMvb->addSinkPort(0x519,uFCode3,64);
            crrcMvb->addSinkPort(0x51A,uFCode3,512);

            crrcMvb->addSinkPort(0x528,uFCode2,32);
            crrcMvb->addSinkPort(0x529,uFCode3,64);
            crrcMvb->addSinkPort(0x52A,uFCode3,512);

            crrcMvb->addSinkPort(0x538,uFCode2,32);
            crrcMvb->addSinkPort(0x539,uFCode3,64);
            crrcMvb->addSinkPort(0x53A,uFCode3,512);

            //CCU-BCU
            crrcMvb->addSinkPort(0x608,uFCode4,32);

            //CCU-EDCU
            crrcMvb->addSinkPort(0x708,uFCode3,256);

            //CCU-TCU-public
            crrcMvb->addSinkPort(0x800,uFCode2,512);

            //CCU-CCU-D
            crrcMvb->addSinkPort(0x810,uFCode2,512);

            //CCU-HVAC
            crrcMvb->addSinkPort(0x918,uFCode3,128);
            crrcMvb->addSinkPort(0x928,uFCode3,128);
            crrcMvb->addSinkPort(0x938,uFCode3,128);
            crrcMvb->addSinkPort(0x948,uFCode3,128);
            crrcMvb->addSinkPort(0x958,uFCode3,128);
            crrcMvb->addSinkPort(0x968,uFCode3,128);

            //CCU-ATC
            crrcMvb->addSinkPort(0xA08,uFCode4,128);
            crrcMvb->addSinkPort(0xA09,uFCode4,128);

            //CCU-PIS
            crrcMvb->addSinkPort(0xB08,uFCode4,256);
            crrcMvb->addSinkPort(0xB09,uFCode3,512);

            //CCU-TDS
            crrcMvb->addSinkPort(0xC08,uFCode4,1024);
            crrcMvb->addSinkPort(0xC09,uFCode4,1024);

            //CCU-LCU
            crrcMvb->addSinkPort(0xD08,uFCode3,256);

            //CCU-LCU1
            crrcMvb->addSinkPort(0xD18,uFCode4,32);
            crrcMvb->addSinkPort(0xD19,uFCode4,32);

            //CCU-LCU2
            crrcMvb->addSinkPort(0xD28,uFCode4,32);
            crrcMvb->addSinkPort(0xD29,uFCode4,32);

            //CCU-LCU3
            crrcMvb->addSinkPort(0xD38,uFCode4,32);
            crrcMvb->addSinkPort(0xD39,uFCode4,32);

            //CCU-LCU4
            crrcMvb->addSinkPort(0xD48,uFCode4,32);
            crrcMvb->addSinkPort(0xD49,uFCode4,32);

            //CCU-LCU5
            crrcMvb->addSinkPort(0xD58,uFCode4,32);
            crrcMvb->addSinkPort(0xD59,uFCode4,32);

            //CCU-LCU6
            crrcMvb->addSinkPort(0xD68,uFCode4,32);
            crrcMvb->addSinkPort(0xD69,uFCode4,32);

            //CCU-LCU7
            crrcMvb->addSinkPort(0xD78,uFCode4,32);

            //CCU-LCU8
            crrcMvb->addSinkPort(0xD88,uFCode4,32);

            //CCU-FAS
            crrcMvb->addSinkPort(0xE58,uFCode4,128);
            crrcMvb->addSinkPort(0xE68,uFCode4,128);

            //CCU-PCU
            crrcMvb->addSinkPort(0xF08,uFCode3,256);


        }
#endif

        if(crrcMvb->setMvbOperation())
        {
            logger()->error("MVB板卡设置操作模式失败");
        }

        timer->start(333);
    }else
    {
        logger()->error("configure.ini文件错误");
        _LOG << "fail to read configure file.";
    }

}


void Widget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
    else if (event->key() == Qt::Key_S)
    {
        QDesktopWidget *desktop = QApplication::desktop();

        // show a window uesd to manipulate the mvb ports and change page
        simulation->raise();
        simulation->move((desktop->width() - simulation->width()) / 2, (desktop->height() - simulation->height()) / 2);
        simulation->show();

    }
}
