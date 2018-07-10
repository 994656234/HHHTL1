/********************************************************************************
** Form generated from reading UI file 'vehicleauxiliarypage.ui'
**
** Created: Wed Jul 4 18:59:56 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEAUXILIARYPAGE_H
#define UI_VEHICLEAUXILIARYPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleAuxiliaryPage
{
public:
    QLabel *LBLTC1;
    QLabel *LBLM2;
    QLabel *LBLM1;
    QLabel *LBLTC2;
    QLabel *LBLMP1;
    QLabel *LBLMP2;
    QLabel *lbl_AC1;
    QLabel *lbl_DC1;
    QLabel *lbl_AC2;
    QLabel *lbl_DC2;
    QLabel *lbl_AC3;
    QLabel *lbl_DC3;
    QLabel *lbl_AC4;
    QLabel *lbl_DC4;

    void setupUi(QWidget *VehicleAuxiliaryPage)
    {
        if (VehicleAuxiliaryPage->objectName().isEmpty())
            VehicleAuxiliaryPage->setObjectName(QString::fromUtf8("VehicleAuxiliaryPage"));
        VehicleAuxiliaryPage->resize(1024, 211);
        VehicleAuxiliaryPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"QLabel\n"
"{\n"
"\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"}"));
        LBLTC1 = new QLabel(VehicleAuxiliaryPage);
        LBLTC1->setObjectName(QString::fromUtf8("LBLTC1"));
        LBLTC1->setGeometry(QRect(90, 60, 140, 120));
        LBLTC1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM2 = new QLabel(VehicleAuxiliaryPage);
        LBLM2->setObjectName(QString::fromUtf8("LBLM2"));
        LBLM2->setGeometry(QRect(510, 60, 140, 120));
        LBLM2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM1 = new QLabel(VehicleAuxiliaryPage);
        LBLM1->setObjectName(QString::fromUtf8("LBLM1"));
        LBLM1->setGeometry(QRect(370, 60, 140, 120));
        LBLM1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLTC2 = new QLabel(VehicleAuxiliaryPage);
        LBLTC2->setObjectName(QString::fromUtf8("LBLTC2"));
        LBLTC2->setGeometry(QRect(790, 60, 140, 120));
        LBLTC2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP1 = new QLabel(VehicleAuxiliaryPage);
        LBLMP1->setObjectName(QString::fromUtf8("LBLMP1"));
        LBLMP1->setGeometry(QRect(230, 60, 140, 120));
        LBLMP1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP2 = new QLabel(VehicleAuxiliaryPage);
        LBLMP2->setObjectName(QString::fromUtf8("LBLMP2"));
        LBLMP2->setGeometry(QRect(650, 60, 140, 120));
        LBLMP2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        lbl_AC1 = new QLabel(VehicleAuxiliaryPage);
        lbl_AC1->setObjectName(QString::fromUtf8("lbl_AC1"));
        lbl_AC1->setGeometry(QRect(105, 95, 50, 50));
        lbl_AC1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_DC1 = new QLabel(VehicleAuxiliaryPage);
        lbl_DC1->setObjectName(QString::fromUtf8("lbl_DC1"));
        lbl_DC1->setGeometry(QRect(167, 95, 50, 50));
        lbl_DC1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_AC2 = new QLabel(VehicleAuxiliaryPage);
        lbl_AC2->setObjectName(QString::fromUtf8("lbl_AC2"));
        lbl_AC2->setGeometry(QRect(383, 95, 50, 50));
        lbl_AC2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_DC2 = new QLabel(VehicleAuxiliaryPage);
        lbl_DC2->setObjectName(QString::fromUtf8("lbl_DC2"));
        lbl_DC2->setGeometry(QRect(447, 95, 50, 50));
        lbl_DC2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_AC3 = new QLabel(VehicleAuxiliaryPage);
        lbl_AC3->setObjectName(QString::fromUtf8("lbl_AC3"));
        lbl_AC3->setGeometry(QRect(525, 95, 50, 50));
        lbl_AC3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_DC3 = new QLabel(VehicleAuxiliaryPage);
        lbl_DC3->setObjectName(QString::fromUtf8("lbl_DC3"));
        lbl_DC3->setGeometry(QRect(587, 95, 50, 50));
        lbl_DC3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_AC4 = new QLabel(VehicleAuxiliaryPage);
        lbl_AC4->setObjectName(QString::fromUtf8("lbl_AC4"));
        lbl_AC4->setGeometry(QRect(805, 95, 50, 50));
        lbl_AC4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_DC4 = new QLabel(VehicleAuxiliaryPage);
        lbl_DC4->setObjectName(QString::fromUtf8("lbl_DC4"));
        lbl_DC4->setGeometry(QRect(867, 95, 50, 50));
        lbl_DC4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(VehicleAuxiliaryPage);

        QMetaObject::connectSlotsByName(VehicleAuxiliaryPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleAuxiliaryPage)
    {
        VehicleAuxiliaryPage->setWindowTitle(QApplication::translate("VehicleAuxiliaryPage", "Form", 0, QApplication::UnicodeUTF8));
        LBLTC1->setText(QString());
        LBLM2->setText(QString());
        LBLM1->setText(QString());
        LBLTC2->setText(QString());
        LBLMP1->setText(QString());
        LBLMP2->setText(QString());
        lbl_AC1->setText(QString());
        lbl_DC1->setText(QString());
        lbl_AC2->setText(QString());
        lbl_DC2->setText(QString());
        lbl_AC3->setText(QString());
        lbl_DC3->setText(QString());
        lbl_AC4->setText(QString());
        lbl_DC4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleAuxiliaryPage: public Ui_VehicleAuxiliaryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEAUXILIARYPAGE_H
