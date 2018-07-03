#ifndef VEHICLEPISPAGE_H
#define VEHICLEPISPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehiclePISPage;
}

class VehiclePISPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehiclePISPage(QWidget *parent = 0);
    ~VehiclePISPage();

private:
    Ui::VehiclePISPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLEPISPAGE_H
