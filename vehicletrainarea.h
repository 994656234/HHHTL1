#ifndef VEHICLETRAINAREA_H
#define VEHICLETRAINAREA_H
#include "qpainter.h"

#include <mybase.h>

namespace Ui {
    class VehicleTrainArea;
}

class VehicleTrainArea : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleTrainArea(QWidget *parent = 0);
    ~VehicleTrainArea();

private:
    Ui::VehicleTrainArea *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLETRAINAREA_H
