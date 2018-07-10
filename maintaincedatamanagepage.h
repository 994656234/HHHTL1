#ifndef MAINTAINCEDATAMANAGEPAGE_H
#define MAINTAINCEDATAMANAGEPAGE_H
#include "mybase.h"
#include "qpushbutton.h"

#include <QWidget>

namespace Ui {
    class MaintainceDataManagePage;
}

class MaintainceDataManagePage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceDataManagePage(QWidget *parent = 0);
    ~MaintainceDataManagePage();

private:
    Ui::MaintainceDataManagePage *ui;
private slots:
    void pushButtonPressedEvent();
};

#endif // MAINTAINCEDATAMANAGEPAGE_H
