#include "vehicleinformationarea.h"
#include "ui_vehicleinformationarea.h"

VehicleInformationArea::VehicleInformationArea(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleInformationArea)
{
    ui->setupUi(this);
}

VehicleInformationArea::~VehicleInformationArea()
{
    delete ui;
}
