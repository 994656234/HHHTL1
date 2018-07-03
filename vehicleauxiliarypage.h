#ifndef VEHICLEAUXILIARYPAGE_H
#define VEHICLEAUXILIARYPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleAuxiliaryPage;
}

class VehicleAuxiliaryPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleAuxiliaryPage(QWidget *parent = 0);
    ~VehicleAuxiliaryPage();

private:
    Ui::VehicleAuxiliaryPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLEAUXILIARYPAGE_H
