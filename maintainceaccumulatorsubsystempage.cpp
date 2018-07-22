#include "maintainceaccumulatorsubsystempage.h"
#include "ui_maintainceaccumulatorsubsystempage.h"

MaintainceAccumulatorSubsystemPage::MaintainceAccumulatorSubsystemPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceAccumulatorSubsystemPage)
{
    ui->setupUi(this);
}

MaintainceAccumulatorSubsystemPage::~MaintainceAccumulatorSubsystemPage()
{
    delete ui;
}

void MaintainceAccumulatorSubsystemPage::on_BTN1_pressed()
{
    changePage(uVehicleMaintainPage);
}

void MaintainceAccumulatorSubsystemPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}
