/********************************************************************************
** Form generated from reading UI file 'vehicleairconditionerpage.ui'
**
** Created: Wed Jul 4 18:59:56 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEAIRCONDITIONERPAGE_H
#define UI_VEHICLEAIRCONDITIONERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleAirConditionerPage
{
public:
    QLabel *LBLTC1;
    QLabel *LBLTC2;
    QLabel *LBLM1;
    QLabel *LBLMP2;
    QLabel *LBLM2;
    QLabel *LBLMP1;
    QLabel *lbl_airCondition1;
    QLabel *lbl_airCondition2;
    QLabel *lbl_airCondition3;
    QLabel *lbl_airCondition4;
    QLabel *lbl_airCondition5;
    QLabel *lbl_airCondition6;

    void setupUi(QWidget *VehicleAirConditionerPage)
    {
        if (VehicleAirConditionerPage->objectName().isEmpty())
            VehicleAirConditionerPage->setObjectName(QString::fromUtf8("VehicleAirConditionerPage"));
        VehicleAirConditionerPage->resize(1024, 211);
        VehicleAirConditionerPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"QLabel\n"
"{\n"
"\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"}"));
        LBLTC1 = new QLabel(VehicleAirConditionerPage);
        LBLTC1->setObjectName(QString::fromUtf8("LBLTC1"));
        LBLTC1->setGeometry(QRect(90, 60, 140, 120));
        LBLTC1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLTC2 = new QLabel(VehicleAirConditionerPage);
        LBLTC2->setObjectName(QString::fromUtf8("LBLTC2"));
        LBLTC2->setGeometry(QRect(790, 60, 140, 120));
        LBLTC2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM1 = new QLabel(VehicleAirConditionerPage);
        LBLM1->setObjectName(QString::fromUtf8("LBLM1"));
        LBLM1->setGeometry(QRect(370, 60, 140, 120));
        LBLM1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP2 = new QLabel(VehicleAirConditionerPage);
        LBLMP2->setObjectName(QString::fromUtf8("LBLMP2"));
        LBLMP2->setGeometry(QRect(650, 60, 140, 120));
        LBLMP2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM2 = new QLabel(VehicleAirConditionerPage);
        LBLM2->setObjectName(QString::fromUtf8("LBLM2"));
        LBLM2->setGeometry(QRect(510, 60, 140, 120));
        LBLM2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP1 = new QLabel(VehicleAirConditionerPage);
        LBLMP1->setObjectName(QString::fromUtf8("LBLMP1"));
        LBLMP1->setGeometry(QRect(230, 60, 140, 120));
        LBLMP1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        lbl_airCondition1 = new QLabel(VehicleAirConditionerPage);
        lbl_airCondition1->setObjectName(QString::fromUtf8("lbl_airCondition1"));
        lbl_airCondition1->setGeometry(QRect(135, 95, 50, 50));
        lbl_airCondition1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_airCondition2 = new QLabel(VehicleAirConditionerPage);
        lbl_airCondition2->setObjectName(QString::fromUtf8("lbl_airCondition2"));
        lbl_airCondition2->setGeometry(QRect(275, 95, 50, 50));
        lbl_airCondition2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_airCondition3 = new QLabel(VehicleAirConditionerPage);
        lbl_airCondition3->setObjectName(QString::fromUtf8("lbl_airCondition3"));
        lbl_airCondition3->setGeometry(QRect(415, 95, 50, 50));
        lbl_airCondition3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_airCondition4 = new QLabel(VehicleAirConditionerPage);
        lbl_airCondition4->setObjectName(QString::fromUtf8("lbl_airCondition4"));
        lbl_airCondition4->setGeometry(QRect(555, 95, 50, 50));
        lbl_airCondition4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_airCondition5 = new QLabel(VehicleAirConditionerPage);
        lbl_airCondition5->setObjectName(QString::fromUtf8("lbl_airCondition5"));
        lbl_airCondition5->setGeometry(QRect(695, 95, 50, 50));
        lbl_airCondition5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_airCondition6 = new QLabel(VehicleAirConditionerPage);
        lbl_airCondition6->setObjectName(QString::fromUtf8("lbl_airCondition6"));
        lbl_airCondition6->setGeometry(QRect(835, 95, 50, 50));
        lbl_airCondition6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(VehicleAirConditionerPage);

        QMetaObject::connectSlotsByName(VehicleAirConditionerPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleAirConditionerPage)
    {
        VehicleAirConditionerPage->setWindowTitle(QApplication::translate("VehicleAirConditionerPage", "Form", 0, QApplication::UnicodeUTF8));
        LBLTC1->setText(QString());
        LBLTC2->setText(QString());
        LBLM1->setText(QString());
        LBLMP2->setText(QString());
        LBLM2->setText(QString());
        LBLMP1->setText(QString());
        lbl_airCondition1->setText(QString());
        lbl_airCondition2->setText(QString());
        lbl_airCondition3->setText(QString());
        lbl_airCondition4->setText(QString());
        lbl_airCondition5->setText(QString());
        lbl_airCondition6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleAirConditionerPage: public Ui_VehicleAirConditionerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEAIRCONDITIONERPAGE_H
