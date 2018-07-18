/********************************************************************************
** Form generated from reading UI file 'vehiclelinecircuitbreakerpage.ui'
**
** Created: Tue Jul 17 22:05:23 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLELINECIRCUITBREAKERPAGE_H
#define UI_VEHICLELINECIRCUITBREAKERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleLineCircuitBreakerPage
{
public:
    QLabel *LBLTC2;
    QLabel *LBLMP2;
    QLabel *LBLM2;
    QLabel *LBLMP1;
    QLabel *LBLM1;
    QLabel *LBLTC1;
    QLabel *lbl_AC1;
    QLabel *lbl_DC1;
    QLabel *lbl_AC1_2;
    QLabel *lbl_DC1_2;
    QLabel *lbl_AC1_3;
    QLabel *lbl_DC1_3;
    QLabel *lbl_AC1_4;
    QLabel *lbl_DC1_4;

    void setupUi(QWidget *VehicleLineCircuitBreakerPage)
    {
        if (VehicleLineCircuitBreakerPage->objectName().isEmpty())
            VehicleLineCircuitBreakerPage->setObjectName(QString::fromUtf8("VehicleLineCircuitBreakerPage"));
        VehicleLineCircuitBreakerPage->resize(1024, 211);
        VehicleLineCircuitBreakerPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"QLabel\n"
"{\n"
"\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"}"));
        LBLTC2 = new QLabel(VehicleLineCircuitBreakerPage);
        LBLTC2->setObjectName(QString::fromUtf8("LBLTC2"));
        LBLTC2->setGeometry(QRect(790, 60, 140, 120));
        LBLTC2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP2 = new QLabel(VehicleLineCircuitBreakerPage);
        LBLMP2->setObjectName(QString::fromUtf8("LBLMP2"));
        LBLMP2->setGeometry(QRect(650, 60, 140, 120));
        LBLMP2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM2 = new QLabel(VehicleLineCircuitBreakerPage);
        LBLM2->setObjectName(QString::fromUtf8("LBLM2"));
        LBLM2->setGeometry(QRect(510, 60, 140, 120));
        LBLM2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP1 = new QLabel(VehicleLineCircuitBreakerPage);
        LBLMP1->setObjectName(QString::fromUtf8("LBLMP1"));
        LBLMP1->setGeometry(QRect(230, 60, 140, 120));
        LBLMP1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM1 = new QLabel(VehicleLineCircuitBreakerPage);
        LBLM1->setObjectName(QString::fromUtf8("LBLM1"));
        LBLM1->setGeometry(QRect(370, 60, 140, 120));
        LBLM1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLTC1 = new QLabel(VehicleLineCircuitBreakerPage);
        LBLTC1->setObjectName(QString::fromUtf8("LBLTC1"));
        LBLTC1->setGeometry(QRect(90, 60, 140, 120));
        LBLTC1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        lbl_AC1 = new QLabel(VehicleLineCircuitBreakerPage);
        lbl_AC1->setObjectName(QString::fromUtf8("lbl_AC1"));
        lbl_AC1->setGeometry(QRect(245, 95, 50, 50));
        lbl_AC1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_DC1 = new QLabel(VehicleLineCircuitBreakerPage);
        lbl_DC1->setObjectName(QString::fromUtf8("lbl_DC1"));
        lbl_DC1->setGeometry(QRect(306, 95, 50, 50));
        lbl_DC1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_AC1_2 = new QLabel(VehicleLineCircuitBreakerPage);
        lbl_AC1_2->setObjectName(QString::fromUtf8("lbl_AC1_2"));
        lbl_AC1_2->setGeometry(QRect(385, 95, 50, 50));
        lbl_AC1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_DC1_2 = new QLabel(VehicleLineCircuitBreakerPage);
        lbl_DC1_2->setObjectName(QString::fromUtf8("lbl_DC1_2"));
        lbl_DC1_2->setGeometry(QRect(445, 95, 50, 50));
        lbl_DC1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_AC1_3 = new QLabel(VehicleLineCircuitBreakerPage);
        lbl_AC1_3->setObjectName(QString::fromUtf8("lbl_AC1_3"));
        lbl_AC1_3->setGeometry(QRect(525, 95, 50, 50));
        lbl_AC1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_DC1_3 = new QLabel(VehicleLineCircuitBreakerPage);
        lbl_DC1_3->setObjectName(QString::fromUtf8("lbl_DC1_3"));
        lbl_DC1_3->setGeometry(QRect(586, 95, 50, 50));
        lbl_DC1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_AC1_4 = new QLabel(VehicleLineCircuitBreakerPage);
        lbl_AC1_4->setObjectName(QString::fromUtf8("lbl_AC1_4"));
        lbl_AC1_4->setGeometry(QRect(668, 95, 50, 50));
        lbl_AC1_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_DC1_4 = new QLabel(VehicleLineCircuitBreakerPage);
        lbl_DC1_4->setObjectName(QString::fromUtf8("lbl_DC1_4"));
        lbl_DC1_4->setGeometry(QRect(725, 95, 50, 50));
        lbl_DC1_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(VehicleLineCircuitBreakerPage);

        QMetaObject::connectSlotsByName(VehicleLineCircuitBreakerPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleLineCircuitBreakerPage)
    {
        VehicleLineCircuitBreakerPage->setWindowTitle(QApplication::translate("VehicleLineCircuitBreakerPage", "Form", 0, QApplication::UnicodeUTF8));
        LBLTC2->setText(QString());
        LBLMP2->setText(QString());
        LBLM2->setText(QString());
        LBLMP1->setText(QString());
        LBLM1->setText(QString());
        LBLTC1->setText(QString());
        lbl_AC1->setText(QString());
        lbl_DC1->setText(QString());
        lbl_AC1_2->setText(QString());
        lbl_DC1_2->setText(QString());
        lbl_AC1_3->setText(QString());
        lbl_DC1_3->setText(QString());
        lbl_AC1_4->setText(QString());
        lbl_DC1_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleLineCircuitBreakerPage: public Ui_VehicleLineCircuitBreakerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLELINECIRCUITBREAKERPAGE_H
