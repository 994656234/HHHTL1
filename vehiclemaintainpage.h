#ifndef VEHICLEMAINTAINPAGE_H
#define VEHICLEMAINTAINPAGE_H
#include "mybase.h"
#include "qpainter.h"
#include "qpushbutton.h"

#include <QWidget>

namespace Ui {
    class VehicleMaintainPage;
}

class VehicleMaintainPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleMaintainPage(QWidget *parent = 0);
    ~VehicleMaintainPage();


private:
    Ui::VehicleMaintainPage *ui;
    void paintEvent(QPaintEvent *event);
    QList<QPushButton*>buttons;

private slots:
    void NBpressEvent();
};

#endif // VEHICLEMAINTAINPAGE_H
