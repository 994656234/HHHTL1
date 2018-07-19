#include "vehiclemaintaincetractsubsystempage.h"
#include "ui_vehiclemaintaincetractsubsystempage.h"

VehicleMaintainceTractSubsystemPage::VehicleMaintainceTractSubsystemPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleMaintainceTractSubsystemPage)
{
    ui->setupUi(this);
}

VehicleMaintainceTractSubsystemPage::~VehicleMaintainceTractSubsystemPage()
{
    delete ui;
}

void VehicleMaintainceTractSubsystemPage::on_BTN1_pressed()
{
    changePage(uVehicleMaintainPage);
}

void VehicleMaintainceTractSubsystemPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}
