#include "vehiclesetstationpage.h"
#include "ui_vehiclesetstationpage.h"
#include "qdebug.h"

#define ONFOCUS "border-right:2px solid rgb(255,255,0);border-bottom:2px solid rgb(255,255,0);color:rgb(255,255,255);font:24px \"微软雅黑\";"
#define OUTFOCUS "border-right:2px solid rgb(255,188,142);border-bottom:2px solid rgb(255,188,142);color:rgb(255,255,255);font:24px \"微软雅黑\";"

VehicleSetStationPage::VehicleSetStationPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleSetStationPage)
{
    ui->setupUi(this);
    QList<QPushButton*> buttons;
    buttons<<ui->BTNStation1<<ui->BTNStation2<<ui->BTNStation3<<ui->BTNStation4<<ui->BTNStation5<<ui->BTNStation6
            <<ui->BTNStation7<<ui->BTNStation8<<ui->BTNStation9<<ui->BTNStation10<<ui->BTNStation11<<ui->BTNStation12
            <<ui->BTNStation13<<ui->BTNStation14<<ui->BTNStation15<<ui->BTNStation16<<ui->BTNStation17<<ui->BTNStation18
            <<ui->BTNStation19;
    foreach(QPushButton* button , buttons)
    {
        connect(button,SIGNAL(clicked()),this,SLOT(buttonPushEvent()));
    }

}
QString VehicleSetStationPage::flag="";
VehicleSetStationPage::~VehicleSetStationPage()
{
    delete ui;
}

void VehicleSetStationPage::on_BTN1_pressed()
{
    changePage(uVehicleSetPage);
}

void VehicleSetStationPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}

void VehicleSetStationPage::on_BTN9_pressed()
{

}

void VehicleSetStationPage::buttonPushEvent()
{
    QString key=((QPushButton*)this->sender())->text();
    if("ORIGIN"==flag)
    {
        ui->lbl_OriginStation->setText(key);
    }
    else if ("TERMINAL"==flag)
    {
        ui->lbl_Terminal->setText(key);
    }
    else
    {
        qDebug()<<key;
    }

}
void VehicleSetStationPage::on_BTNOriginStation_pressed()
{
    ui->lbl_OriginStation->setStyleSheet(ONFOCUS);
    ui->lbl_Terminal->setStyleSheet(OUTFOCUS);
    flag="ORIGIN";
}

void VehicleSetStationPage::on_BTNTerminal_pressed()
{
    ui->lbl_Terminal->setStyleSheet(ONFOCUS);
    ui->lbl_OriginStation->setStyleSheet(OUTFOCUS);
    flag="TERMINAL";
}

void VehicleSetStationPage::on_BTNChangeOrigin_Terminal_pressed()
{
    QString change;
    change=ui->lbl_OriginStation->text();
    ui->lbl_OriginStation->setText(ui->lbl_Terminal->text());
    ui->lbl_Terminal->setText(change);
}
