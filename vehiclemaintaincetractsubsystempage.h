#ifndef VEHICLEMAINTAINCETRACTSUBSYSTEMPAGE_H
#define VEHICLEMAINTAINCETRACTSUBSYSTEMPAGE_H
#include "mybase.h"

#include <QWidget>

namespace Ui {
    class VehicleMaintainceTractSubsystemPage;
}

class VehicleMaintainceTractSubsystemPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleMaintainceTractSubsystemPage(QWidget *parent = 0);
    ~VehicleMaintainceTractSubsystemPage();

private:
    Ui::VehicleMaintainceTractSubsystemPage *ui;

private slots:
    void on_BTNHome_pressed();
    void on_BTN1_pressed();
};

#endif // VEHICLEMAINTAINCETRACTSUBSYSTEMPAGE_H
