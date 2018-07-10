#ifndef VEHICLESETAIRCONDITIONPAGE_H
#define VEHICLESETAIRCONDITIONPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleSetAirConditionPage;
}

class VehicleSetAirConditionPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleSetAirConditionPage(QWidget *parent = 0);
    ~VehicleSetAirConditionPage();

private:
    Ui::VehicleSetAirConditionPage *ui;
        void paintEvent(QPaintEvent *event);

private slots:
    void on_BTNHome_pressed();
    void on_BTN1_pressed();
};

#endif // VEHICLESETAIRCONDITIONPAGE_H
