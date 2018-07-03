#include "vehiclestationbar.h"
#include "ui_vehiclestationbar.h"

VehicleStationBar::VehicleStationBar(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleStationBar)
{
    ui->setupUi(this);
}

VehicleStationBar::~VehicleStationBar()
{
    delete ui;
}
