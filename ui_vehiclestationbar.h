/********************************************************************************
** Form generated from reading UI file 'vehiclestationbar.ui'
**
** Created: Tue Jul 17 22:05:23 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLESTATIONBAR_H
#define UI_VEHICLESTATIONBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleStationBar
{
public:
    QLabel *lbl_currentStationName;
    QLabel *lbl_nextStationName;
    QLabel *lbl_terminalStationName;
    QLabel *lbl_networkVoltageName;
    QLabel *lbl_batteryVoltageName;
    QLabel *lbl_terminalStationValue;
    QLabel *lbl_nextStationValue;
    QLabel *lbl_networkVoltageValue;
    QLabel *lbl_batteryVoltageValue;
    QLabel *lbl_currentStationValue;

    void setupUi(QWidget *VehicleStationBar)
    {
        if (VehicleStationBar->objectName().isEmpty())
            VehicleStationBar->setObjectName(QString::fromUtf8("VehicleStationBar"));
        VehicleStationBar->resize(1024, 90);
        VehicleStationBar->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"QLabel\n"
"{\n"
"color:rgb(0,0,0);\n"
"background-color:rgb(170,170,170);\n"
"font:22px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
""));
        lbl_currentStationName = new QLabel(VehicleStationBar);
        lbl_currentStationName->setObjectName(QString::fromUtf8("lbl_currentStationName"));
        lbl_currentStationName->setGeometry(QRect(4, 5, 200, 38));
        lbl_currentStationName->setStyleSheet(QString::fromUtf8(""));
        lbl_currentStationName->setAlignment(Qt::AlignCenter);
        lbl_nextStationName = new QLabel(VehicleStationBar);
        lbl_nextStationName->setObjectName(QString::fromUtf8("lbl_nextStationName"));
        lbl_nextStationName->setGeometry(QRect(208, 5, 200, 38));
        lbl_nextStationName->setStyleSheet(QString::fromUtf8(""));
        lbl_nextStationName->setAlignment(Qt::AlignCenter);
        lbl_terminalStationName = new QLabel(VehicleStationBar);
        lbl_terminalStationName->setObjectName(QString::fromUtf8("lbl_terminalStationName"));
        lbl_terminalStationName->setGeometry(QRect(412, 5, 200, 38));
        lbl_terminalStationName->setStyleSheet(QString::fromUtf8(""));
        lbl_terminalStationName->setAlignment(Qt::AlignCenter);
        lbl_networkVoltageName = new QLabel(VehicleStationBar);
        lbl_networkVoltageName->setObjectName(QString::fromUtf8("lbl_networkVoltageName"));
        lbl_networkVoltageName->setGeometry(QRect(616, 5, 200, 38));
        lbl_networkVoltageName->setStyleSheet(QString::fromUtf8(""));
        lbl_networkVoltageName->setAlignment(Qt::AlignCenter);
        lbl_batteryVoltageName = new QLabel(VehicleStationBar);
        lbl_batteryVoltageName->setObjectName(QString::fromUtf8("lbl_batteryVoltageName"));
        lbl_batteryVoltageName->setGeometry(QRect(820, 5, 200, 38));
        lbl_batteryVoltageName->setStyleSheet(QString::fromUtf8(""));
        lbl_batteryVoltageName->setAlignment(Qt::AlignCenter);
        lbl_terminalStationValue = new QLabel(VehicleStationBar);
        lbl_terminalStationValue->setObjectName(QString::fromUtf8("lbl_terminalStationValue"));
        lbl_terminalStationValue->setGeometry(QRect(412, 47, 200, 38));
        lbl_terminalStationValue->setStyleSheet(QString::fromUtf8(""));
        lbl_terminalStationValue->setAlignment(Qt::AlignCenter);
        lbl_nextStationValue = new QLabel(VehicleStationBar);
        lbl_nextStationValue->setObjectName(QString::fromUtf8("lbl_nextStationValue"));
        lbl_nextStationValue->setGeometry(QRect(208, 47, 200, 38));
        lbl_nextStationValue->setStyleSheet(QString::fromUtf8(""));
        lbl_nextStationValue->setAlignment(Qt::AlignCenter);
        lbl_networkVoltageValue = new QLabel(VehicleStationBar);
        lbl_networkVoltageValue->setObjectName(QString::fromUtf8("lbl_networkVoltageValue"));
        lbl_networkVoltageValue->setGeometry(QRect(616, 47, 200, 38));
        lbl_networkVoltageValue->setStyleSheet(QString::fromUtf8(""));
        lbl_networkVoltageValue->setAlignment(Qt::AlignCenter);
        lbl_batteryVoltageValue = new QLabel(VehicleStationBar);
        lbl_batteryVoltageValue->setObjectName(QString::fromUtf8("lbl_batteryVoltageValue"));
        lbl_batteryVoltageValue->setGeometry(QRect(820, 47, 200, 38));
        lbl_batteryVoltageValue->setStyleSheet(QString::fromUtf8(""));
        lbl_batteryVoltageValue->setAlignment(Qt::AlignCenter);
        lbl_currentStationValue = new QLabel(VehicleStationBar);
        lbl_currentStationValue->setObjectName(QString::fromUtf8("lbl_currentStationValue"));
        lbl_currentStationValue->setGeometry(QRect(4, 47, 200, 38));
        lbl_currentStationValue->setStyleSheet(QString::fromUtf8(""));
        lbl_currentStationValue->setAlignment(Qt::AlignCenter);

        retranslateUi(VehicleStationBar);

        QMetaObject::connectSlotsByName(VehicleStationBar);
    } // setupUi

    void retranslateUi(QWidget *VehicleStationBar)
    {
        VehicleStationBar->setWindowTitle(QApplication::translate("VehicleStationBar", "Form", 0, QApplication::UnicodeUTF8));
        lbl_currentStationName->setText(QApplication::translate("VehicleStationBar", "\345\275\223\345\211\215\347\253\231", 0, QApplication::UnicodeUTF8));
        lbl_nextStationName->setText(QApplication::translate("VehicleStationBar", "\344\270\213\344\270\200\347\253\231", 0, QApplication::UnicodeUTF8));
        lbl_terminalStationName->setText(QApplication::translate("VehicleStationBar", "\347\273\210\347\202\271\347\253\231", 0, QApplication::UnicodeUTF8));
        lbl_networkVoltageName->setText(QApplication::translate("VehicleStationBar", "\347\275\221\345\216\213\345\200\274", 0, QApplication::UnicodeUTF8));
        lbl_batteryVoltageName->setText(QApplication::translate("VehicleStationBar", "\350\223\204\347\224\265\346\261\240\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        lbl_terminalStationValue->setText(QString());
        lbl_nextStationValue->setText(QString());
        lbl_networkVoltageValue->setText(QString());
        lbl_batteryVoltageValue->setText(QString());
        lbl_currentStationValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleStationBar: public Ui_VehicleStationBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLESTATIONBAR_H
