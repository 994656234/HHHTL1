/********************************************************************************
** Form generated from reading UI file 'vehicleaircompressorpage.ui'
**
** Created: Tue Jun 26 22:01:21 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEAIRCOMPRESSORPAGE_H
#define UI_VEHICLEAIRCOMPRESSORPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleAirCompressorPage
{
public:
    QLabel *LBLTC2;
    QLabel *LBLMP2;
    QLabel *LBLM2;
    QLabel *LBLMP1;
    QLabel *LBLTC1;
    QLabel *LBLM1;
    QLabel *lbl_airCompressor1;
    QLabel *lbl_airCompressor2;

    void setupUi(QWidget *VehicleAirCompressorPage)
    {
        if (VehicleAirCompressorPage->objectName().isEmpty())
            VehicleAirCompressorPage->setObjectName(QString::fromUtf8("VehicleAirCompressorPage"));
        VehicleAirCompressorPage->resize(1024, 211);
        VehicleAirCompressorPage->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(0,0,50);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"}"));
        LBLTC2 = new QLabel(VehicleAirCompressorPage);
        LBLTC2->setObjectName(QString::fromUtf8("LBLTC2"));
        LBLTC2->setGeometry(QRect(790, 60, 140, 120));
        LBLTC2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP2 = new QLabel(VehicleAirCompressorPage);
        LBLMP2->setObjectName(QString::fromUtf8("LBLMP2"));
        LBLMP2->setGeometry(QRect(650, 60, 140, 120));
        LBLMP2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM2 = new QLabel(VehicleAirCompressorPage);
        LBLM2->setObjectName(QString::fromUtf8("LBLM2"));
        LBLM2->setGeometry(QRect(510, 60, 140, 120));
        LBLM2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP1 = new QLabel(VehicleAirCompressorPage);
        LBLMP1->setObjectName(QString::fromUtf8("LBLMP1"));
        LBLMP1->setGeometry(QRect(230, 60, 140, 120));
        LBLMP1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLTC1 = new QLabel(VehicleAirCompressorPage);
        LBLTC1->setObjectName(QString::fromUtf8("LBLTC1"));
        LBLTC1->setGeometry(QRect(90, 60, 140, 120));
        LBLTC1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM1 = new QLabel(VehicleAirCompressorPage);
        LBLM1->setObjectName(QString::fromUtf8("LBLM1"));
        LBLM1->setGeometry(QRect(370, 60, 140, 120));
        LBLM1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        lbl_airCompressor1 = new QLabel(VehicleAirCompressorPage);
        lbl_airCompressor1->setObjectName(QString::fromUtf8("lbl_airCompressor1"));
        lbl_airCompressor1->setGeometry(QRect(135, 95, 50, 50));
        lbl_airCompressor1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_airCompressor2 = new QLabel(VehicleAirCompressorPage);
        lbl_airCompressor2->setObjectName(QString::fromUtf8("lbl_airCompressor2"));
        lbl_airCompressor2->setGeometry(QRect(835, 95, 50, 50));
        lbl_airCompressor2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(VehicleAirCompressorPage);

        QMetaObject::connectSlotsByName(VehicleAirCompressorPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleAirCompressorPage)
    {
        VehicleAirCompressorPage->setWindowTitle(QApplication::translate("VehicleAirCompressorPage", "Form", 0, QApplication::UnicodeUTF8));
        LBLTC2->setText(QString());
        LBLMP2->setText(QString());
        LBLM2->setText(QString());
        LBLMP1->setText(QString());
        LBLTC1->setText(QString());
        LBLM1->setText(QString());
        lbl_airCompressor1->setText(QString());
        lbl_airCompressor2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleAirCompressorPage: public Ui_VehicleAirCompressorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEAIRCOMPRESSORPAGE_H
