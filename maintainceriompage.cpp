#include "maintainceriompage.h"
#include "ui_maintainceriompage.h"

MaintainceRIOMPage::MaintainceRIOMPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceRIOMPage)
{
    ui->setupUi(this);
}

MaintainceRIOMPage::~MaintainceRIOMPage()
{
    delete ui;
}

void MaintainceRIOMPage::on_BTNHome_pressed()
{
    changePage(uVehicleTrainArea);
}

void MaintainceRIOMPage::on_BTN1_pressed()
{
    changePage(uVehicleMaintainPage);
}
