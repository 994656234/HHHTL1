#ifndef MAINTAINCERUNNINGGEARSUBSYSTEMPAGE_H
#define MAINTAINCERUNNINGGEARSUBSYSTEMPAGE_H
#include "mybase.h"

#include <QWidget>

namespace Ui {
    class MaintainceRunningGearSubsystemPage;
}

class MaintainceRunningGearSubsystemPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceRunningGearSubsystemPage(QWidget *parent = 0);
    ~MaintainceRunningGearSubsystemPage();

private:
    Ui::MaintainceRunningGearSubsystemPage *ui;

private slots:
    void on_BTNHome_pressed();
    void on_BTN1_pressed();
};

#endif // MAINTAINCERUNNINGGEARSUBSYSTEMPAGE_H
