#ifndef MAINTAINCEACCUMULATORSUBSYSTEMPAGE_H
#define MAINTAINCEACCUMULATORSUBSYSTEMPAGE_H
#include "mybase.h"

#include <QWidget>

namespace Ui {
    class MaintainceAccumulatorSubsystemPage;
}

class MaintainceAccumulatorSubsystemPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceAccumulatorSubsystemPage(QWidget *parent = 0);
    ~MaintainceAccumulatorSubsystemPage();

private:
    Ui::MaintainceAccumulatorSubsystemPage *ui;

private slots:
    void on_BTNHome_pressed();
    void on_BTN1_pressed();
};

#endif // MAINTAINCEACCUMULATORSUBSYSTEMPAGE_H
