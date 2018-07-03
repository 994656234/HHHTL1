#include "maintainceallportspage.h"
#include "ui_maintainceallportspage.h"
#include "qdebug.h"
#define PButtonUP    "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;border-radius:8px;"
#define PButtonDOWN  "font: 20px, \"微软雅黑\";color: white;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(150,150,200,255),stop:1 rgba(0,0,50,255));border-top:0xp;border-left:0px; border-bottom: 2px solid white;border-right: 2px solid white;border-radius:8px;"

MaintainceAllPortsPage::MaintainceAllPortsPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceAllPortsPage)
{
    ui->setupUi(this);
    buttons<<ui->BTN_ATC<<ui->BTN_BCU<<ui->BTN_BMS<<ui->BTN_CCUA<<ui->BTN_CCUB<<ui->BTN_CCU_D<<ui->BTN_DCU<<ui->BTN_EDCUA
            <<ui->BTN_ERM<<ui->BTN_FAS<<ui->BTN_HMI<<ui->BTN_HVAC<<ui->BTN_LCUA<<ui->BTN_PCU<<ui->BTN_PIS<<ui->BTN_Return
            <<ui->BTN_RIOM<<ui->BTN_SIV<<ui->BTN_TDS<<ui->BTN_CCUC<<ui->BTN_LCUB<<ui->BTN_EDCUB;

    RIOMPort<<0x110<<0x111<<0x120<<0x121<<0x130<<0x131<<0x140<<0x141<<0x150<<0x151<<0x160<<0x161<<0x170<<0x171<<0x180<<0x181;
    HMIPort<<0x210<<0x211<<0x212<<0x213<<0x220<<0x221<<0x222<<0x223;
    ERMPort<<0x310<<0x311<<0x312<<0x313<<0x320<<0x321<<0x322<<0x323;
    DCUPort<<0x480<<0x481<<0x482<<0x483<<0x484<<0x490<<0x491<<0x492<<0x493<<0x494
            <<0x4C0<<0x4C1<<0x4C2<<0x4C3<<0x4c4<<0x4D0<<0x4D1<<0x4D2<<0x4D3<<0x4D4;
    SIVPort<<0x501<<0x502<<0x503<<0x504<<0x511<<0x512<<0x513<<0x514
            <<0x521<<0x522<<0x523<<0x524;
    BCUPort<<0x610<<0x611<<0x612<<0x613<<0x614<<0x620<<0x621<<0x622<<0x623<<0x624
            <<0x630<<0x631<<0x632<<0x633<<0x634<<0x640<<0x641<<0x642<<0x643<<0x644;
    EDCUAPort<<0x710<<0x711<<0x712<<0x720<<0x721<<0x722<<0x730<<0x731<<0x732<<0x740<<0x741<<0x742
            <<0x750<<0x751<<0x752<<0x760<<0x761<<0x762<<0x770<<0x771<<0x772<<0x780<<0x781<<0x782
            <<0x790<<0x791<<0x792<<0x7A0;
    EDCUBPort<<0x7A1<<0x7A2<<0x7B0<<0x7B1<<0x7B2<<0x7C0<<0x7C1<<0x7C2;
    CCU_DPort<<0x818<<0x828;
    HVACPort<<0x910<<0x920<<0x930<<0x940<<0x950<<0x960;
    ATCPort<<0xA10<<0xA11<<0xA20<<0xA21;
    PISPort<<0xB10<<0xB20;
    TDSPort<<0xC10<<0xC11<<0xC12<<0xC13<<0xC20<<0xC21<<0xC22<<0xC23;
    LCUAPort<<0xD10<<0xD11<<0xD12<<0xD13<<0xD20<<0xD21<<0xD22<<0xD23<<0xD30<<0xD31<<0xD32<<0xD33<<0xD40<<0xD41<<0xD42<<0xD43
            <<0xD50<<0xD51<<0xD52<<0xD53<<0xD60<<0xD61<<0xD62<<0xD63<<0xD70<<0xD71<<0xD72<<0xD73;
    LCUBPort<<0xD80<<0xD81<<0xD82<<0xD83;
    BMSPort<<0xE10<<0xE20;
    FASPort<<0xE50<<0xE60;
    PCUPort<<0xF10<<0xF20;
    CCUAPort<<0x00F<<0x118<<0x128<<0x138<<0x148<<0x158<<0x168<<0x178<<0x188<<0x208<<0x209<<0x20A<<0x308<<0x309<<0x488<<0x489<<0x48A
            <<0x498<<0x499<<0x49A<<0x4C8<<0x4C9<<0x4CA<<0x4D8<<0x4D9<<0x4DA<<0x508<<0x509;
    CCUBPort<<0x50A<<0x518<<0x519<<0x51A<<0x528<<0x529<<0x52A<<0x538<<0x539<<0x53A<<0x608<<0x708<<0x800<<0x810<<0x918<<0x928<<0x938
            <<0x948<<0x958<<0x968<<0xA08<<0xA09<<0xB08<<0xB09<<0xC08<<0xC09<<0xD08<<0xD18;
    CCUCPort<<0xD19<<0xD28<<0xD29<<0xD38<<0xD39<<0xD48<<0xD49<<0xD58<<0xD59<<0xD68<<0xD69<<0xD78<<0xD88<<0xE58<<0xE68<<0xF08;
    this->m_PortsList = CCUAPort;
    ui->BTN_CCUA->setStyleSheet(PButtonDOWN);
    foreach(QPushButton* button,buttons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(NBpressEvent()));
    }
}

MaintainceAllPortsPage::~MaintainceAllPortsPage()
{
    delete ui;
}

void MaintainceAllPortsPage::NBpressEvent()
{
    QString BTNName = ((QPushButton *)this->sender())->objectName();
    if(BTNName=="BTN_Return")
    {
        changePage(uVehicleMaintainPage);
    }
    else if(BTNName=="BTN_CCUA")
    {
        this->m_PortsList=CCUAPort;
    }
    else if(BTNName=="BTN_CCUB")
    {
        this->m_PortsList=CCUBPort;
    }
    else if(BTNName=="BTN_CCUC")
    {
        this->m_PortsList=CCUCPort;
    }
    else if(BTNName=="BTN_RIOM")
    {
        this->m_PortsList=RIOMPort;
    }
    else if(BTNName=="BTN_HMI")
    {
        this->m_PortsList=HMIPort;
    }
    else if(BTNName=="BTN_ERM")
    {
        this->m_PortsList=ERMPort;
    }
    else if(BTNName=="BTN_DCU")
    {
        this->m_PortsList=DCUPort;
    }
    else if(BTNName=="BTN_SIV")
    {
        this->m_PortsList=SIVPort;
    }
    else if(BTNName=="BTN_BCU")
    {
        this->m_PortsList=BCUPort;
    }
    else if(BTNName=="BTN_EDCUA")
    {
        this->m_PortsList=EDCUAPort;
    }
    else if(BTNName=="BTN_EDCUB")
    {
        this->m_PortsList=EDCUBPort;
    }
    else if(BTNName=="BTN_CCU_D")
    {
        this->m_PortsList=CCU_DPort;
    }
    else if(BTNName=="BTN_HVAC")
    {
        this->m_PortsList=HVACPort;
    }
    else if(BTNName=="BTN_ATC")
    {
        this->m_PortsList=ATCPort;
    }
    else if(BTNName=="BTN_PIS")
    {
        this->m_PortsList=PISPort;
    }
    else if(BTNName=="BTN_TDS")
    {
        this->m_PortsList=TDSPort;
    }
    else if(BTNName=="BTN_LCUA")
    {
        this->m_PortsList=LCUAPort;
    }
    else if(BTNName=="BTN_LCUB")
    {
        this->m_PortsList=LCUBPort;
    }
    else if(BTNName=="BTN_BMS")
    {
        this->m_PortsList=BMSPort;
    }
    else if(BTNName=="BTN_FAS")
    {
        this->m_PortsList=FASPort;
    }
    else if(BTNName=="BTN_PCU")
    {
        this->m_PortsList=PCUPort;
    }

    for(int i = 0; i < buttons.size();i++)
    {
       buttons[i]->setStyleSheet(PButtonUP);
    }
    ((QPushButton *)this->sender())->setStyleSheet(PButtonDOWN);
}

void MaintainceAllPortsPage::installMvb(CrrcMvb *crrcMvb)
{
    this->crrcMvb=crrcMvb;
}

void MaintainceAllPortsPage::updatePage()
{
    this->update();
}

void MaintainceAllPortsPage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QFont font;
    font.setFamily("微软雅黑");
    font.setPixelSize(13);
    painter.setFont(font);
    painter.setPen(QPen(Qt::white,2));
    painter.setBrush(QBrush(Qt::transparent));

    // draw title
    for(int i = 0; i < 34 ; i++)
    {

        QString text1;
        QRect rect1;
        if(i == 0)
        {
            text1 = "port";
            rect1 = QRect(1,2,39,25);
            painter.drawRect(rect1);

        }else if(i == 33)
        {
            text1 = "cycle";
            rect1 = QRect(26*32+40,2,50,25);

        }else
        {
            QString tmp;
            tmp.sprintf("%02d",i-1);
            text1 = tmp;
            rect1 = QRect(i*26+14,2,26,25);

        }


        if(i%2==1)
        {
            painter.drawRect(QRect(i*26+14,2,52,25));
        }
        painter.drawText(rect1,Qt::AlignCenter,text1);

    }



    //draw data
    for(int j = 0 ;j < 28 ;j++)
    {
        for(int i = 0; i < 34 ; i++)
        {
            QString text2;
            QRect rect2,rect3;

            if(j%3 == 0)// set pen color
            {
                painter.setPen(QPen(QColor(255,128,0),2));
            }else if(j%3 == 1)
            {
                painter.setPen(QPen(Qt::lightGray,2));
            }else
            {
                painter.setPen(QPen(QColor(0, 255, 255),2));
            }
            //portaddress
            if(i == 0)
            {
                if(j<m_PortsList.size())
                {
                    QString tmp;
                    tmp.sprintf("%03x",m_PortsList[j]);

                    text2 = tmp.toUpper();
                }else
                {
                    text2 = "";
                }
                rect2 = QRect(1,2+(j+1)*24,39,25);
                painter.drawRect(rect2);
                painter.drawText(rect2,Qt::AlignCenter,text2);
            }else if(i == 33)//cycle
            {
                painter.save();
                painter.setPen(QPen(Qt::white,2));

                if(j<m_PortsList.size())
                {
                    QString tmp;
                    tmp.sprintf("%02d",crrcMvb->getPortCycle(m_PortsList[j]));


                    if(crrcMvb->isPortTimeout(m_PortsList[j]))
                    {
                        painter.setBrush(QBrush(Qt::red));
                    }else
                    {
                        painter.setBrush(QBrush(Qt::transparent));
                    }
                    text2 = tmp.toUpper();
                }else
                {
                    painter.setBrush(QBrush(Qt::transparent));
                    text2 = "";
                }
                rect2 = QRect(32*26+40,2+(j+1)*24,51,25);

                painter.drawRect(rect2);
                painter.drawText(rect2,Qt::AlignCenter,text2);
                painter.restore();

            }else//data
            {
                QString tmp;

                if(j<m_PortsList.size())
                {
                    tmp.sprintf("%02x",crrcMvb->getUnsignedChar(m_PortsList[j],i-1));

                    text2 = tmp.toUpper();
                }else
                {
                    text2 = "";
                }
                rect3 = QRect(i*26+14,2+(j+1)*24,26,25);
                painter.drawText(rect3,Qt::AlignCenter,text2);
            }


            if(i%2==1)
            {
                painter.drawRect(QRect(i*26+14,2+(j+1)*24,52,25));
            }

        }
    }
}
