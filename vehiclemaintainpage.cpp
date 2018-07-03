#include "vehiclemaintainpage.h"
#include "ui_vehiclemaintainpage.h"
#include "qdebug.h"

VehicleMaintainPage::VehicleMaintainPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleMaintainPage)
{
    ui->setupUi(this);
    buttons<<ui->BTN1<<ui->BTN2<<ui->BTN3<<ui->BTN4<<ui->BTN5<<ui->BTN6<<ui->BTN7<<ui->BTN8<<ui->BTN9<<ui->BTNHome
            <<ui->BTN_AuxiliarySubsystem<<ui->BTN_BatterySubsystem<<ui->BTN_BogieLampSubsystem<<ui->BTN_BrakeSubsystem
            <<ui->BTN_CommunicationStatus<<ui->BTN_DataManage<<ui->BTN_DataMonitor<<ui->BTN_HistoryFault<<ui->BTN_MetroSet
            <<ui->BTN_ResetCut<<ui->BTN_RIOMTest<<ui->BTN_SoftwareVersion<<ui->BTN_TimeSet<<ui->BTN_TractSubsystem<<ui->BTN_HMIInitSet;
    foreach(QPushButton* button,buttons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(NBpressEvent()));
    }
}

VehicleMaintainPage::~VehicleMaintainPage()
{
    delete ui;
}

void VehicleMaintainPage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //消除锯齿效果

    //构造painterpath
    QPainterPath path;
    //司机室1
    path.moveTo(75,41);
    path.lineTo(101,41);
    path.lineTo(101,110);
    path.lineTo(75,110);
    path.lineTo(70,106);
    path.lineTo(70,44);
    path.lineTo(75,41);

    //司机室2
    path.moveTo(939,41);
    path.lineTo(965,41);
    path.lineTo(970,44);
    path.lineTo(970,106);
    path.lineTo(965,110);
    path.lineTo(939,110);
    path.lineTo(939,41);

    //path->setFillRule(Qt::WindingFill);
    //设置无画笔，避免边框出现一条黑线
    painter.setPen(Qt::NoPen);
    //设置画刷
    painter.setBrush(QBrush(QColor(170,170,170), Qt::SolidPattern));
    //绘制背景
    painter.drawPath(path);
    // event->accept();//不再向父类传递消息
}

void VehicleMaintainPage::NBpressEvent()
{
    QString BTNName=((QPushButton*)this->sender())->objectName();
    if(BTNName=="BTN1")
    {
        changePage(uVehicleTrainArea);
    }
    else if(BTNName=="BTNHome")
    {
        changePage(uVehicleTrainArea);
    }
    else if(BTNName=="BTN_TimeSet")
    {
        changePage(uVehicleMTTimeSetPage);
    }
    else if(BTNName=="BTN_HistoryFault")
    {
        changePage(uVehicleMTHistoryFaultPage);
    }
    else if(BTNName=="BTN_DataManage")
    {

    }
    else if(BTNName=="BTN_ResetCut")
    {

    }
    else if(BTNName=="BTN_CommunicationStatus")
    {

    }
    else if(BTNName=="BTN_SoftwareVersion")
    {

    }
    else if(BTNName=="BTN_MetroSet")
    {

    }
    else if(BTNName=="BTN_RIOMTest")
    {
        changePage(uVehicleMaintainceRIOMPage);
    }
    else if(BTNName=="BTN_DataMonitor")
    {
         changePage(uVehicleMaintainceAllPortsPage);
    }
    else if(BTNName=="BTN_TractSubsystem")
    {

    }
    else if(BTNName=="BTN_BrakeSubsystem")
    {

    }
    else if(BTNName=="BTN_AuxiliarySubsystem")
    {

    }
    else if(BTNName=="BTN_BatterySubsystem")
    {

    }
    else if(BTNName=="BTN_BogieLampSubsystem")
    {

    }
    else if(BTNName=="BTN_HMIInitSet")
    {
        changePage(uVehicleMaintainceInitSetPage);
    }
    else
    {

    }

}
