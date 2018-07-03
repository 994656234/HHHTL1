#ifndef VEHICLEINFORMATIONAREA_H
#define VEHICLEINFORMATIONAREA_H

#include <mybase.h>

namespace Ui {
    class VehicleInformationArea;
}

class VehicleInformationArea : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleInformationArea(QWidget *parent = 0);
    ~VehicleInformationArea();

private:
    Ui::VehicleInformationArea *ui;
};

#endif // VEHICLEINFORMATIONAREA_H
