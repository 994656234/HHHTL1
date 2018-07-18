/********************************************************************************
** Form generated from reading UI file 'vehiclebrakepage.ui'
**
** Created: Tue Jul 17 22:05:23 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEBRAKEPAGE_H
#define UI_VEHICLEBRAKEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleBrakePage
{
public:
    QLabel *LBLM2;
    QLabel *LBLM1;
    QLabel *LBLMP1;
    QLabel *LBLTC1;
    QLabel *LBLTC2;
    QLabel *LBLMP2;
    QLabel *lbl_brake1_1;
    QLabel *lbl_brake1_2;
    QLabel *lbl_brake2_1;
    QLabel *lbl_brake2_2;
    QLabel *lbl_brake3_1;
    QLabel *lbl_brake3_2;
    QLabel *lbl_brake4_1;
    QLabel *lbl_brake4_2;
    QLabel *lbl_brake5_1;
    QLabel *lbl_brake5_2;
    QLabel *lbl_brake6_1;
    QLabel *lbl_brake6_2;

    void setupUi(QWidget *VehicleBrakePage)
    {
        if (VehicleBrakePage->objectName().isEmpty())
            VehicleBrakePage->setObjectName(QString::fromUtf8("VehicleBrakePage"));
        VehicleBrakePage->resize(1024, 211);
        VehicleBrakePage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"QLabel\n"
"{\n"
"\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"}"));
        LBLM2 = new QLabel(VehicleBrakePage);
        LBLM2->setObjectName(QString::fromUtf8("LBLM2"));
        LBLM2->setGeometry(QRect(510, 60, 140, 120));
        LBLM2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLM1 = new QLabel(VehicleBrakePage);
        LBLM1->setObjectName(QString::fromUtf8("LBLM1"));
        LBLM1->setGeometry(QRect(370, 60, 140, 120));
        LBLM1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP1 = new QLabel(VehicleBrakePage);
        LBLMP1->setObjectName(QString::fromUtf8("LBLMP1"));
        LBLMP1->setGeometry(QRect(230, 60, 140, 120));
        LBLMP1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLTC1 = new QLabel(VehicleBrakePage);
        LBLTC1->setObjectName(QString::fromUtf8("LBLTC1"));
        LBLTC1->setGeometry(QRect(90, 60, 140, 120));
        LBLTC1->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLTC2 = new QLabel(VehicleBrakePage);
        LBLTC2->setObjectName(QString::fromUtf8("LBLTC2"));
        LBLTC2->setGeometry(QRect(790, 60, 140, 120));
        LBLTC2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        LBLMP2 = new QLabel(VehicleBrakePage);
        LBLMP2->setObjectName(QString::fromUtf8("LBLMP2"));
        LBLMP2->setGeometry(QRect(650, 60, 140, 120));
        LBLMP2->setStyleSheet(QString::fromUtf8("background-color:rgb(170,170,170);"));
        lbl_brake1_1 = new QLabel(VehicleBrakePage);
        lbl_brake1_1->setObjectName(QString::fromUtf8("lbl_brake1_1"));
        lbl_brake1_1->setGeometry(QRect(105, 95, 50, 50));
        lbl_brake1_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake1_2 = new QLabel(VehicleBrakePage);
        lbl_brake1_2->setObjectName(QString::fromUtf8("lbl_brake1_2"));
        lbl_brake1_2->setGeometry(QRect(167, 95, 50, 50));
        lbl_brake1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake2_1 = new QLabel(VehicleBrakePage);
        lbl_brake2_1->setObjectName(QString::fromUtf8("lbl_brake2_1"));
        lbl_brake2_1->setGeometry(QRect(245, 95, 50, 50));
        lbl_brake2_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake2_2 = new QLabel(VehicleBrakePage);
        lbl_brake2_2->setObjectName(QString::fromUtf8("lbl_brake2_2"));
        lbl_brake2_2->setGeometry(QRect(307, 95, 50, 50));
        lbl_brake2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake3_1 = new QLabel(VehicleBrakePage);
        lbl_brake3_1->setObjectName(QString::fromUtf8("lbl_brake3_1"));
        lbl_brake3_1->setGeometry(QRect(385, 95, 50, 50));
        lbl_brake3_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake3_2 = new QLabel(VehicleBrakePage);
        lbl_brake3_2->setObjectName(QString::fromUtf8("lbl_brake3_2"));
        lbl_brake3_2->setGeometry(QRect(447, 95, 50, 50));
        lbl_brake3_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake4_1 = new QLabel(VehicleBrakePage);
        lbl_brake4_1->setObjectName(QString::fromUtf8("lbl_brake4_1"));
        lbl_brake4_1->setGeometry(QRect(525, 95, 50, 50));
        lbl_brake4_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake4_2 = new QLabel(VehicleBrakePage);
        lbl_brake4_2->setObjectName(QString::fromUtf8("lbl_brake4_2"));
        lbl_brake4_2->setGeometry(QRect(587, 95, 50, 50));
        lbl_brake4_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake5_1 = new QLabel(VehicleBrakePage);
        lbl_brake5_1->setObjectName(QString::fromUtf8("lbl_brake5_1"));
        lbl_brake5_1->setGeometry(QRect(665, 95, 50, 50));
        lbl_brake5_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake5_2 = new QLabel(VehicleBrakePage);
        lbl_brake5_2->setObjectName(QString::fromUtf8("lbl_brake5_2"));
        lbl_brake5_2->setGeometry(QRect(727, 95, 50, 50));
        lbl_brake5_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake6_1 = new QLabel(VehicleBrakePage);
        lbl_brake6_1->setObjectName(QString::fromUtf8("lbl_brake6_1"));
        lbl_brake6_1->setGeometry(QRect(805, 95, 50, 50));
        lbl_brake6_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_brake6_2 = new QLabel(VehicleBrakePage);
        lbl_brake6_2->setObjectName(QString::fromUtf8("lbl_brake6_2"));
        lbl_brake6_2->setGeometry(QRect(867, 95, 50, 50));
        lbl_brake6_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(VehicleBrakePage);

        QMetaObject::connectSlotsByName(VehicleBrakePage);
    } // setupUi

    void retranslateUi(QWidget *VehicleBrakePage)
    {
        VehicleBrakePage->setWindowTitle(QApplication::translate("VehicleBrakePage", "Form", 0, QApplication::UnicodeUTF8));
        LBLM2->setText(QString());
        LBLM1->setText(QString());
        LBLMP1->setText(QString());
        LBLTC1->setText(QString());
        LBLTC2->setText(QString());
        LBLMP2->setText(QString());
        lbl_brake1_1->setText(QString());
        lbl_brake1_2->setText(QString());
        lbl_brake2_1->setText(QString());
        lbl_brake2_2->setText(QString());
        lbl_brake3_1->setText(QString());
        lbl_brake3_2->setText(QString());
        lbl_brake4_1->setText(QString());
        lbl_brake4_2->setText(QString());
        lbl_brake5_1->setText(QString());
        lbl_brake5_2->setText(QString());
        lbl_brake6_1->setText(QString());
        lbl_brake6_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleBrakePage: public Ui_VehicleBrakePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEBRAKEPAGE_H
