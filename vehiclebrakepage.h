#ifndef VEHICLEBRAKEPAGE_H
#define VEHICLEBRAKEPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleBrakePage;
}

class VehicleBrakePage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleBrakePage(QWidget *parent = 0);
    ~VehicleBrakePage();

private:
    Ui::VehicleBrakePage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLEBRAKEPAGE_H
