#ifndef BYPASSPAGE_H
#define BYPASSPAGE_H
#include "mybase.h"
#include "qpainter.h"
#include "qpushbutton.h"

#include <QWidget>

namespace Ui {
    class ByPassPage;
}

class ByPassPage : public MyBase
{
    Q_OBJECT

public:
    explicit ByPassPage(QWidget *parent = 0);
    ~ByPassPage();

private:
    Ui::ByPassPage *ui;
    void paintEvent(QPaintEvent *);
private slots:
    void pushButtonPressedEvent();
};

#endif // BYPASSPAGE_H
