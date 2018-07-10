#ifndef MAINTAINCESOFTWAREVERSIONPAGE_H
#define MAINTAINCESOFTWAREVERSIONPAGE_H
#include "mybase.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class MaintainceSoftwareVersionPage;
}

class MaintainceSoftwareVersionPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceSoftwareVersionPage(QWidget *parent = 0);
    ~MaintainceSoftwareVersionPage();

private:
    Ui::MaintainceSoftwareVersionPage *ui;
    void paintEvent(QPaintEvent *event);

private slots:
    void on_BTN4_pressed();
    void on_BTN3_pressed();
    void on_BTN2_pressed();
    void on_BTNHome_pressed();
    void on_BTN1_pressed();
};

#endif // MAINTAINCESOFTWAREVERSIONPAGE_H
