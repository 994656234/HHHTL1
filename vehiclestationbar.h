#ifndef VEHICLESTATIONBAR_H
#define VEHICLESTATIONBAR_H

#include <mybase.h>

namespace Ui {
    class VehicleStationBar;
}

class VehicleStationBar : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleStationBar(QWidget *parent = 0);
    ~VehicleStationBar();

private:
    Ui::VehicleStationBar *ui;
};

#endif // VEHICLESTATIONBAR_H
