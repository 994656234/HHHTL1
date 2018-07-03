#ifndef VEHICLEFIREWARNINGPAGE_H
#define VEHICLEFIREWARNINGPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleFireWarningPage;
}

class VehicleFireWarningPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleFireWarningPage(QWidget *parent = 0);
    ~VehicleFireWarningPage();

private:
    Ui::VehicleFireWarningPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLEFIREWARNINGPAGE_H
