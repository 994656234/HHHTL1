#include "vehiclemthistoryfaultpage.h"
#include "ui_vehiclemthistoryfaultpage.h"

VehicleMTHistoryFaultPage::VehicleMTHistoryFaultPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleMTHistoryFaultPage)
{
    ui->setupUi(this);
}

VehicleMTHistoryFaultPage::~VehicleMTHistoryFaultPage()
{
    delete ui;
}
