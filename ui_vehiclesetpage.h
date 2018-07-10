/********************************************************************************
** Form generated from reading UI file 'vehiclesetpage.ui'
**
** Created: Wed Jul 4 18:59:56 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLESETPAGE_H
#define UI_VEHICLESETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleSetPage
{
public:
    QPushButton *BTN1;
    QPushButton *BTNHome;
    QPushButton *BTN4;
    QPushButton *BTN2;
    QPushButton *BTN5;
    QPushButton *BTN7;
    QPushButton *BTN3;
    QPushButton *BTN8;
    QPushButton *BTN6;
    QPushButton *BTN9;
    QLabel *LBLMP2;
    QLabel *LBLM2;
    QLabel *LBLTC1;
    QLabel *LBLTC2;
    QLabel *LBLMP1;
    QLabel *LBLM1;
    QLabel *lbl1;
    QPushButton *BTN_queryStation;
    QPushButton *BTN_setAirCondition;
    QPushButton *BTN_setBrakeParam;
    QLabel *lbl2;
    QPushButton *BTN_setLight;
    QPushButton *BTN_setBrakeTest;

    void setupUi(QWidget *VehicleSetPage)
    {
        if (VehicleSetPage->objectName().isEmpty())
            VehicleSetPage->setObjectName(QString::fromUtf8("VehicleSetPage"));
        VehicleSetPage->resize(1024, 706);
        VehicleSetPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);"));
        BTN1 = new QPushButton(VehicleSetPage);
        BTN1->setObjectName(QString::fromUtf8("BTN1"));
        BTN1->setGeometry(QRect(10, 620, 100, 80));
        BTN1->setFocusPolicy(Qt::NoFocus);
        BTN1->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));"));
        BTNHome = new QPushButton(VehicleSetPage);
        BTNHome->setObjectName(QString::fromUtf8("BTNHome"));
        BTNHome->setGeometry(QRect(928, 620, 91, 80));
        BTNHome->setFocusPolicy(Qt::NoFocus);
        BTNHome->setStyleSheet(QString::fromUtf8("border-image: url(:/images/image/Home.png);"));
        BTN4 = new QPushButton(VehicleSetPage);
        BTN4->setObjectName(QString::fromUtf8("BTN4"));
        BTN4->setGeometry(QRect(316, 620, 100, 80));
        BTN4->setFocusPolicy(Qt::NoFocus);
        BTN4->setStyleSheet(QString::fromUtf8("	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
""));
        BTN2 = new QPushButton(VehicleSetPage);
        BTN2->setObjectName(QString::fromUtf8("BTN2"));
        BTN2->setGeometry(QRect(112, 620, 100, 80));
        BTN2->setFocusPolicy(Qt::NoFocus);
        BTN2->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));"));
        BTN5 = new QPushButton(VehicleSetPage);
        BTN5->setObjectName(QString::fromUtf8("BTN5"));
        BTN5->setGeometry(QRect(418, 620, 100, 80));
        BTN5->setFocusPolicy(Qt::NoFocus);
        BTN5->setStyleSheet(QString::fromUtf8("	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
""));
        BTN7 = new QPushButton(VehicleSetPage);
        BTN7->setObjectName(QString::fromUtf8("BTN7"));
        BTN7->setGeometry(QRect(622, 620, 100, 80));
        BTN7->setFocusPolicy(Qt::NoFocus);
        BTN7->setStyleSheet(QString::fromUtf8("	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
""));
        BTN3 = new QPushButton(VehicleSetPage);
        BTN3->setObjectName(QString::fromUtf8("BTN3"));
        BTN3->setGeometry(QRect(214, 620, 100, 80));
        BTN3->setFocusPolicy(Qt::NoFocus);
        BTN3->setStyleSheet(QString::fromUtf8("	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
""));
        BTN8 = new QPushButton(VehicleSetPage);
        BTN8->setObjectName(QString::fromUtf8("BTN8"));
        BTN8->setGeometry(QRect(724, 620, 100, 80));
        BTN8->setFocusPolicy(Qt::NoFocus);
        BTN8->setStyleSheet(QString::fromUtf8("	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
""));
        BTN6 = new QPushButton(VehicleSetPage);
        BTN6->setObjectName(QString::fromUtf8("BTN6"));
        BTN6->setGeometry(QRect(520, 620, 100, 80));
        BTN6->setFocusPolicy(Qt::NoFocus);
        BTN6->setStyleSheet(QString::fromUtf8("	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
""));
        BTN9 = new QPushButton(VehicleSetPage);
        BTN9->setObjectName(QString::fromUtf8("BTN9"));
        BTN9->setGeometry(QRect(826, 620, 100, 80));
        BTN9->setFocusPolicy(Qt::NoFocus);
        BTN9->setStyleSheet(QString::fromUtf8("	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
""));
        LBLMP2 = new QLabel(VehicleSetPage);
        LBLMP2->setObjectName(QString::fromUtf8("LBLMP2"));
        LBLMP2->setGeometry(QRect(660, 110, 140, 71));
        LBLMP2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);\n"
"border:1px solid black;\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLMP2->setAlignment(Qt::AlignCenter);
        LBLM2 = new QLabel(VehicleSetPage);
        LBLM2->setObjectName(QString::fromUtf8("LBLM2"));
        LBLM2->setGeometry(QRect(520, 110, 140, 71));
        LBLM2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);\n"
"border:1px solid black;\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLM2->setAlignment(Qt::AlignCenter);
        LBLTC1 = new QLabel(VehicleSetPage);
        LBLTC1->setObjectName(QString::fromUtf8("LBLTC1"));
        LBLTC1->setGeometry(QRect(100, 110, 140, 71));
        LBLTC1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);\n"
"border:1px solid black;\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLTC1->setAlignment(Qt::AlignCenter);
        LBLTC2 = new QLabel(VehicleSetPage);
        LBLTC2->setObjectName(QString::fromUtf8("LBLTC2"));
        LBLTC2->setGeometry(QRect(800, 110, 140, 71));
        LBLTC2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);\n"
"border:1px solid black;\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLTC2->setAlignment(Qt::AlignCenter);
        LBLMP1 = new QLabel(VehicleSetPage);
        LBLMP1->setObjectName(QString::fromUtf8("LBLMP1"));
        LBLMP1->setGeometry(QRect(240, 110, 140, 71));
        LBLMP1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);\n"
"border:1px solid black;\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLMP1->setAlignment(Qt::AlignCenter);
        LBLM1 = new QLabel(VehicleSetPage);
        LBLM1->setObjectName(QString::fromUtf8("LBLM1"));
        LBLM1->setGeometry(QRect(380, 110, 140, 71));
        LBLM1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);\n"
"border:1px solid black;\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLM1->setAlignment(Qt::AlignCenter);
        lbl1 = new QLabel(VehicleSetPage);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(350, 280, 341, 101));
        lbl1->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(19,20,87), stop:1 rgb(187,188,247))"));
        BTN_queryStation = new QPushButton(VehicleSetPage);
        BTN_queryStation->setObjectName(QString::fromUtf8("BTN_queryStation"));
        BTN_queryStation->setGeometry(QRect(360, 290, 100, 80));
        BTN_queryStation->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);\n"
"color: rgb(255, 255, 255);\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        BTN_setAirCondition = new QPushButton(VehicleSetPage);
        BTN_setAirCondition->setObjectName(QString::fromUtf8("BTN_setAirCondition"));
        BTN_setAirCondition->setGeometry(QRect(470, 290, 100, 80));
        BTN_setAirCondition->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);\n"
"color: rgb(255, 255, 255);\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        BTN_setBrakeParam = new QPushButton(VehicleSetPage);
        BTN_setBrakeParam->setObjectName(QString::fromUtf8("BTN_setBrakeParam"));
        BTN_setBrakeParam->setGeometry(QRect(580, 290, 100, 80));
        BTN_setBrakeParam->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);\n"
"color: rgb(255, 255, 255);\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lbl2 = new QLabel(VehicleSetPage);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setGeometry(QRect(350, 385, 341, 101));
        lbl2->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(187,188,247) , stop:1 rgb(19,20,87))"));
        BTN_setLight = new QPushButton(VehicleSetPage);
        BTN_setLight->setObjectName(QString::fromUtf8("BTN_setLight"));
        BTN_setLight->setGeometry(QRect(360, 395, 100, 80));
        BTN_setLight->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);\n"
"color: rgb(255, 255, 255);\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        BTN_setBrakeTest = new QPushButton(VehicleSetPage);
        BTN_setBrakeTest->setObjectName(QString::fromUtf8("BTN_setBrakeTest"));
        BTN_setBrakeTest->setGeometry(QRect(470, 395, 100, 80));
        BTN_setBrakeTest->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);\n"
"color: rgb(255, 255, 255);\n"
"font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(VehicleSetPage);

        QMetaObject::connectSlotsByName(VehicleSetPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleSetPage)
    {
        VehicleSetPage->setWindowTitle(QApplication::translate("VehicleSetPage", "Form", 0, QApplication::UnicodeUTF8));
        BTN1->setText(QString());
        BTNHome->setText(QString());
        BTN4->setText(QString());
        BTN2->setText(QString());
        BTN5->setText(QString());
        BTN7->setText(QString());
        BTN3->setText(QString());
        BTN8->setText(QString());
        BTN6->setText(QString());
        BTN9->setText(QString());
        LBLMP2->setText(QApplication::translate("VehicleSetPage", "H05", 0, QApplication::UnicodeUTF8));
        LBLM2->setText(QApplication::translate("VehicleSetPage", "H04", 0, QApplication::UnicodeUTF8));
        LBLTC1->setText(QApplication::translate("VehicleSetPage", "H01", 0, QApplication::UnicodeUTF8));
        LBLTC2->setText(QApplication::translate("VehicleSetPage", "H06", 0, QApplication::UnicodeUTF8));
        LBLMP1->setText(QApplication::translate("VehicleSetPage", "H02", 0, QApplication::UnicodeUTF8));
        LBLM1->setText(QApplication::translate("VehicleSetPage", "H03", 0, QApplication::UnicodeUTF8));
        lbl1->setText(QString());
        BTN_queryStation->setText(QApplication::translate("VehicleSetPage", "\347\253\231\347\202\271\n"
"\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        BTN_setAirCondition->setText(QApplication::translate("VehicleSetPage", "\347\251\272\350\260\203\n"
"\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        BTN_setBrakeParam->setText(QApplication::translate("VehicleSetPage", "\345\210\266\345\212\250\n"
"\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        lbl2->setText(QString());
        BTN_setLight->setText(QApplication::translate("VehicleSetPage", "\344\272\256\345\272\246\n"
"\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        BTN_setBrakeTest->setText(QApplication::translate("VehicleSetPage", "\345\210\266\345\212\250\n"
"\350\207\252\346\243\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleSetPage: public Ui_VehicleSetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLESETPAGE_H
