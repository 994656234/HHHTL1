#ifndef MAINTAINCERIOMPAGE_H
#define MAINTAINCERIOMPAGE_H
#include "mybase.h"

#include <QWidget>

namespace Ui {
    class MaintainceRIOMPage;
}

class MaintainceRIOMPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceRIOMPage(QWidget *parent = 0);
    ~MaintainceRIOMPage();

private:
    Ui::MaintainceRIOMPage *ui;

private slots:
    void on_BTN1_pressed();
    void on_BTNHome_pressed();
};

#endif // MAINTAINCERIOMPAGE_H
