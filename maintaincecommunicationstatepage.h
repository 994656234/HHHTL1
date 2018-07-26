#ifndef MAINTAINCECOMMUNICATIONSTATEPAGE_H
#define MAINTAINCECOMMUNICATIONSTATEPAGE_H
#include "mybase.h"
#include "qpushbutton.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class MaintainceCommunicationStatePage;
}

class MaintainceCommunicationStatePage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceCommunicationStatePage(QWidget *parent = 0);
    ~MaintainceCommunicationStatePage();

private:
    Ui::MaintainceCommunicationStatePage *ui;
    void paintEvent(QPaintEvent *event);
private slots:
    void pushButtonPressedEvent();
};

#endif // MAINTAINCECOMMUNICATIONSTATEPAGE_H
