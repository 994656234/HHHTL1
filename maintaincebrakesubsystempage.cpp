#include "maintaincebrakesubsystempage.h"
#include "ui_maintaincebrakesubsystempage.h"

MaintainceBrakeSubsystemPage::MaintainceBrakeSubsystemPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceBrakeSubsystemPage)
{
    ui->setupUi(this);
}

MaintainceBrakeSubsystemPage::~MaintainceBrakeSubsystemPage()
{
    delete ui;
}

void MaintainceBrakeSubsystemPage::on_BTN1_pressed()
{
    changePage(uVehicleMaintainPage);
}

void MaintainceBrakeSubsystemPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}
