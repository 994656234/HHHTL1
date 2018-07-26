#ifndef FAULTEVENTPAGE_H
#define FAULTEVENTPAGE_H
#include "mybase.h"
#include "qpushbutton.h"
#include "qpainter.h"
#include "qlabel.h"

#include <QWidget>

namespace Ui {
    class FaultEventPage;
}

class FaultEventPage : public MyBase
{
    Q_OBJECT

public:
    explicit FaultEventPage(QWidget *parent = 0);
    ~FaultEventPage();
    void paintEvent(QPaintEvent *event);

private:
    Ui::FaultEventPage *ui;
    QList<QPushButton*> faultButtons;
    QList<QLabel*> labelList1,labelList2,labelList3,labelList4,labelList5,labelList6,labelList7,labelList8,labelList9;
private slots:
    void pushButtonPressedEvent();
    void faultPushButtonPressedEvent();
};

#endif // FAULTEVENTPAGE_H
