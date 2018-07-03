#ifndef VEHICLESTATUSAREA_H
#define VEHICLESTATUSAREA_H

#include <mybase.h>
#include "qpushbutton.h"
#include "qlabel.h"
namespace Ui {
    class VehicleStatusArea;
}

class VehicleStatusArea : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleStatusArea(QWidget *parent = 0);
    ~VehicleStatusArea();

    void updatePage();
    void refreshAllButton();

private:
    Ui::VehicleStatusArea *ui;
    QList<QPushButton*> buttons;
    QList<QLabel*> labels;

    QList<QString> Btnstatus,Btnactions;
private slots:
    void changeTrainStatus();
};

#endif // VEHICLESTATUSAREA_H
