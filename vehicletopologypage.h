#ifndef VEHICLETOPOLOGYPAGE_H
#define VEHICLETOPOLOGYPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class VehicleTopologyPage;
}

class VehicleTopologyPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleTopologyPage(QWidget *parent = 0);
    ~VehicleTopologyPage();

private:
    Ui::VehicleTopologyPage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // VEHICLETOPOLOGYPAGE_H
