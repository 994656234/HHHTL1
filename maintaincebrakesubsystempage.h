#ifndef MAINTAINCEBRAKESUBSYSTEMPAGE_H
#define MAINTAINCEBRAKESUBSYSTEMPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class MaintainceBrakeSubsystemPage;
}

class MaintainceBrakeSubsystemPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceBrakeSubsystemPage(QWidget *parent = 0);
    ~MaintainceBrakeSubsystemPage();

private:
    Ui::MaintainceBrakeSubsystemPage *ui;
    void paintEvent(QPaintEvent *event);

private slots:
    void on_BTNHome_pressed();
    void on_BTN1_pressed();
};

#endif // MAINTAINCEBRAKESUBSYSTEMPAGE_H
