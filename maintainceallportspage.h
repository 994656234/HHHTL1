#ifndef MAINTAINCEALLPORTSPAGE_H
#define MAINTAINCEALLPORTSPAGE_H
#include "mybase.h"
#include "qpushbutton.h"
#include "qlist.h"
#include "crrcmvb.h"
#include "qpainter.h"

#include <QWidget>

namespace Ui {
    class MaintainceAllPortsPage;
}

class MaintainceAllPortsPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceAllPortsPage(QWidget *parent = 0);
    ~MaintainceAllPortsPage();
    void updatePage();
    void paintEvent(QPaintEvent *);
    void installMvb(CrrcMvb* crrcMvb);

private:
    Ui::MaintainceAllPortsPage *ui;
    QList<QPushButton*> buttons;
    CrrcMvb* crrcMvb;
    QList <int>m_PortsList;
    QList <int> CCUAPort,CCUBPort,CCUCPort,RIOMPort,HMIPort,ERMPort,DCUPort,SIVPort,BCUPort,EDCUAPort,EDCUBPort,CCU_DPort,HVACPort,ATCPort,PISPort,TDSPort,LCUAPort,LCUBPort,BMSPort,FASPort,PCUPort;
private slots:
    void NBpressEvent();

};

#endif // MAINTAINCEALLPORTSPAGE_H
