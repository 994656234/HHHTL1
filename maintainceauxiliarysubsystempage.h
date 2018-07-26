#ifndef MAINTAINCEAUXILIARYSUBSYSTEMPAGE_H
#define MAINTAINCEAUXILIARYSUBSYSTEMPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class MaintainceAuxiliarySubsystemPage;
}

class MaintainceAuxiliarySubsystemPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceAuxiliarySubsystemPage(QWidget *parent = 0);
    ~MaintainceAuxiliarySubsystemPage();

private:
    Ui::MaintainceAuxiliarySubsystemPage *ui;
    void paintEvent(QPaintEvent *event);

private slots:
    void on_BTNHome_pressed();
    void on_BTN1_pressed();
};

#endif // MAINTAINCEAUXILIARYSUBSYSTEMPAGE_H
