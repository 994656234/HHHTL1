#ifndef VEHICLEAIRCOMPRESSORPAGE_H
#define VEHICLEAIRCOMPRESSORPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleAirCompressorPage;
}

class VehicleAirCompressorPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleAirCompressorPage(QWidget *parent = 0);
    ~VehicleAirCompressorPage();

private:
    Ui::VehicleAirCompressorPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLEAIRCOMPRESSORPAGE_H
