#ifndef DOCONTROL_H
#define DOCONTROL_H

#include <QWidget>

namespace Ui {
    class DoControl;
}

class DoControl : public QWidget
{
    Q_OBJECT

public:
    explicit DoControl(QWidget *parent = 0);
    ~DoControl();

private:
    Ui::DoControl *ui;
};

#endif // DOCONTROL_H
