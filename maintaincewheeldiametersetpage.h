#ifndef MAINTAINCEWHEELDIAMETERSETPAGE_H
#define MAINTAINCEWHEELDIAMETERSETPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class MaintainceWheelDiameterSetPage;
}

enum metroType
{
    TC1=0,
    Mp1,
    M1,
    Mp2,
    M2,
    TC2,
    MetroType
};

static int currentType;

class MaintainceWheelDiameterSetPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceWheelDiameterSetPage(QWidget *parent = 0);
    ~MaintainceWheelDiameterSetPage();

private:
    Ui::MaintainceWheelDiameterSetPage *ui;
    void paintEvent(QPaintEvent *event);
    void allButtonRelease();

private slots:
    void buttonPressEvent();
};

#endif // MAINTAINCEWHEELDIAMETERSETPAGE_H
