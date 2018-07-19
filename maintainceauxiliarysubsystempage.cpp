#include "maintainceauxiliarysubsystempage.h"
#include "ui_maintainceauxiliarysubsystempage.h"

MaintainceAuxiliarySubsystemPage::MaintainceAuxiliarySubsystemPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceAuxiliarySubsystemPage)
{
    ui->setupUi(this);
}

MaintainceAuxiliarySubsystemPage::~MaintainceAuxiliarySubsystemPage()
{
    delete ui;
}

void MaintainceAuxiliarySubsystemPage::on_BTN1_pressed()
{
    changePage(uVehicleMaintainPage);
}

void MaintainceAuxiliarySubsystemPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}
