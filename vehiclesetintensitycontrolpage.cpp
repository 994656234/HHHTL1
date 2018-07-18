#include "vehiclesetintensitycontrolpage.h"
#include "ui_vehiclesetintensitycontrolpage.h"

VehicleSetIntensityControlPage::VehicleSetIntensityControlPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleSetIntensityControlPage)
{
    ui->setupUi(this);
    QList<QPushButton*> buttons;
    buttons<<ui->BTN1<<ui->BTN2<<ui->BTN3<<ui->BTN4<<ui->BTN5<<ui->BTN6<<ui->BTN7<<ui->BTN8<<ui->BTN9<<ui->BTNHome;
    foreach(QPushButton* button,buttons)
    {
        connect(button,SIGNAL(pressed()),this,SLOT(pushButtonPressedEvent()));
    }
}

VehicleSetIntensityControlPage::~VehicleSetIntensityControlPage()
{
    delete ui;
}

void VehicleSetIntensityControlPage::pushButtonPressedEvent()
{
    QString btnName=((QPushButton*)this->sender())->objectName();
    if(btnName=="BTN1")
    {
        changePage(uVehicleSetPage);
    }
    else if(btnName=="BTNHome")
    {
        changePage(uVehicleTrainArea);
    }
}
