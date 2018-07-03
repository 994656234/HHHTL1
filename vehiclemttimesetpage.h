#ifndef VEHICLEMTTIMESETPAGE_H
#define VEHICLEMTTIMESETPAGE_H
#include "mybase.h"
#include "qpushbutton.h"
#include "QTime"
#include "QDate"

#include <QWidget>

namespace Ui {
    class VehicleMTTimeSetPage;
}

enum numIndex
{
    nYear=0,
    nMonth,
    nDay,
    nHour,
    nMinute,
    nSecond,
};
static int currentNum;

class VehicleMTTimeSetPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleMTTimeSetPage(QWidget *parent = 0);
    ~VehicleMTTimeSetPage();
private:
    Ui::VehicleMTTimeSetPage *ui;
    QList<QPushButton*> buttons;

    void allButtonRelease();

private slots:
    void NBpressEvent();



};

#endif // VEHICLEMTTIMESETPAGE_H
