#ifndef VEHICLEDOORPAGE_H
#define VEHICLEDOORPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleDoorPage;
}

class VehicleDoorPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleDoorPage(QWidget *parent = 0);
    ~VehicleDoorPage();

private:
    Ui::VehicleDoorPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLEDOORPAGE_H
