/********************************************************************************
** Form generated from reading UI file 'vehicletractpage.ui'
**
** Created: Tue Jun 26 22:01:21 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLETRACTPAGE_H
#define UI_VEHICLETRACTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleTractPage
{
public:
    QLabel *LBLMP1;
    QLabel *LBLMP2;
    QLabel *LBLTC1;
    QLabel *LBLM2;
    QLabel *LBLTC2;
    QLabel *LBLM1;
    QLabel *lbl_tract4;
    QLabel *lbl_tract3;
    QLabel *lbl_tract1;
    QLabel *lbl_tract2;

    void setupUi(QWidget *VehicleTractPage)
    {
        if (VehicleTractPage->objectName().isEmpty())
            VehicleTractPage->setObjectName(QString::fromUtf8("VehicleTractPage"));
        VehicleTractPage->resize(1024, 211);
        VehicleTractPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"QLabel\n"
"{\n"
"\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"}"));
        LBLMP1 = new QLabel(VehicleTractPage);
        LBLMP1->setObjectName(QString::fromUtf8("LBLMP1"));
        LBLMP1->setGeometry(QRect(230, 60, 140, 120));
        LBLMP1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP2 = new QLabel(VehicleTractPage);
        LBLMP2->setObjectName(QString::fromUtf8("LBLMP2"));
        LBLMP2->setGeometry(QRect(650, 60, 140, 120));
        LBLMP2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLTC1 = new QLabel(VehicleTractPage);
        LBLTC1->setObjectName(QString::fromUtf8("LBLTC1"));
        LBLTC1->setGeometry(QRect(90, 60, 140, 120));
        LBLTC1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM2 = new QLabel(VehicleTractPage);
        LBLM2->setObjectName(QString::fromUtf8("LBLM2"));
        LBLM2->setGeometry(QRect(510, 60, 140, 120));
        LBLM2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLTC2 = new QLabel(VehicleTractPage);
        LBLTC2->setObjectName(QString::fromUtf8("LBLTC2"));
        LBLTC2->setGeometry(QRect(790, 60, 140, 120));
        LBLTC2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM1 = new QLabel(VehicleTractPage);
        LBLM1->setObjectName(QString::fromUtf8("LBLM1"));
        LBLM1->setGeometry(QRect(370, 60, 140, 120));
        LBLM1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        lbl_tract4 = new QLabel(VehicleTractPage);
        lbl_tract4->setObjectName(QString::fromUtf8("lbl_tract4"));
        lbl_tract4->setGeometry(QRect(695, 95, 50, 50));
        lbl_tract4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_tract3 = new QLabel(VehicleTractPage);
        lbl_tract3->setObjectName(QString::fromUtf8("lbl_tract3"));
        lbl_tract3->setGeometry(QRect(555, 95, 50, 50));
        lbl_tract3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_tract1 = new QLabel(VehicleTractPage);
        lbl_tract1->setObjectName(QString::fromUtf8("lbl_tract1"));
        lbl_tract1->setGeometry(QRect(275, 95, 50, 50));
        lbl_tract1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_tract2 = new QLabel(VehicleTractPage);
        lbl_tract2->setObjectName(QString::fromUtf8("lbl_tract2"));
        lbl_tract2->setGeometry(QRect(415, 95, 50, 50));
        lbl_tract2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(VehicleTractPage);

        QMetaObject::connectSlotsByName(VehicleTractPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleTractPage)
    {
        VehicleTractPage->setWindowTitle(QApplication::translate("VehicleTractPage", "Form", 0, QApplication::UnicodeUTF8));
        LBLMP1->setText(QString());
        LBLMP2->setText(QString());
        LBLTC1->setText(QString());
        LBLM2->setText(QString());
        LBLTC2->setText(QString());
        LBLM1->setText(QString());
        lbl_tract4->setText(QString());
        lbl_tract3->setText(QString());
        lbl_tract1->setText(QString());
        lbl_tract2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleTractPage: public Ui_VehicleTractPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLETRACTPAGE_H
