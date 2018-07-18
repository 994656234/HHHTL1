#ifndef VEHICLESETBRAKETESTPAGE_H
#define VEHICLESETBRAKETESTPAGE_H
#include "mybase.h"
#include "qpushbutton.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleSetBrakeTestPage;
}

class VehicleSetBrakeTestPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleSetBrakeTestPage(QWidget *parent = 0);
    ~VehicleSetBrakeTestPage();

private:
    Ui::VehicleSetBrakeTestPage *ui;
    void paintEvent(QPaintEvent *event);
private slots:
    void pushButtonPressedEvent();
};

#endif // VEHICLESETBRAKETESTPAGE_H
