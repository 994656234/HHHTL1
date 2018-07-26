#ifndef MAINTAINCERESETEXCISIONPAGE_H
#define MAINTAINCERESETEXCISIONPAGE_H
#include "mybase.h"
#include "qpushbutton.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class MaintainceResetExcisionPage;
}

class MaintainceResetExcisionPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceResetExcisionPage(QWidget *parent = 0);
    ~MaintainceResetExcisionPage();

private:
    Ui::MaintainceResetExcisionPage *ui;
    void paintEvent(QPaintEvent *event);
private slots:
    void pushButtonPressedEvent();
};

#endif // MAINTAINCERESETEXCISIONPAGE_H
