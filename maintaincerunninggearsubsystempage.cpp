#include "maintaincerunninggearsubsystempage.h"
#include "ui_maintaincerunninggearsubsystempage.h"

MaintainceRunningGearSubsystemPage::MaintainceRunningGearSubsystemPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceRunningGearSubsystemPage)
{
    ui->setupUi(this);
}

MaintainceRunningGearSubsystemPage::~MaintainceRunningGearSubsystemPage()
{
    delete ui;
}

void MaintainceRunningGearSubsystemPage::on_BTN1_pressed()
{
    changePage(uVehicleMaintainPage);
}

void MaintainceRunningGearSubsystemPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}
