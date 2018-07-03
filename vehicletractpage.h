#ifndef VEHICLETRACTPAGE_H
#define VEHICLETRACTPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleTractPage;
}

class VehicleTractPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleTractPage(QWidget *parent = 0);
    ~VehicleTractPage();

private:
    Ui::VehicleTractPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLETRACTPAGE_H
