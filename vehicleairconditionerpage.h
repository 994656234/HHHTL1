#ifndef VEHICLEAIRCONDITIONERPAGE_H
#define VEHICLEAIRCONDITIONERPAGE_H
#include "mybase.h"

#include <QWidget>

namespace Ui {
    class VehicleAirConditionerPage;
}

class VehicleAirConditionerPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleAirConditionerPage(QWidget *parent = 0);
    ~VehicleAirConditionerPage();

private:
    Ui::VehicleAirConditionerPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLEAIRCONDITIONERPAGE_H
