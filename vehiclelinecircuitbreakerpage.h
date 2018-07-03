#ifndef VEHICLELINECIRCUITBREAKERPAGE_H
#define VEHICLELINECIRCUITBREAKERPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleLineCircuitBreakerPage;
}

class VehicleLineCircuitBreakerPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleLineCircuitBreakerPage(QWidget *parent = 0);
    ~VehicleLineCircuitBreakerPage();

private:
    Ui::VehicleLineCircuitBreakerPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLELINECIRCUITBREAKERPAGE_H
