/********************************************************************************
** Form generated from reading UI file 'maintainceallportspage.ui'
**
** Created: Tue Jun 26 22:27:46 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEALLPORTSPAGE_H
#define UI_MAINTAINCEALLPORTSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceAllPortsPage
{
public:
    QPushButton *BTN_HMI;
    QPushButton *BTN_ERM;
    QPushButton *BTN_BCU;
    QPushButton *BTN_Return;
    QPushButton *BTN_RIOM;
    QPushButton *BTN_DCU;
    QPushButton *BTN_HVAC;
    QPushButton *BTN_ATC;
    QPushButton *BTN_CCUA;
    QPushButton *BTN_EDCUA;
    QPushButton *BTN_SIV;
    QPushButton *BTN_PIS;
    QPushButton *BTN_CCU_D;
    QPushButton *BTN_CCUB;
    QPushButton *BTN_TDS;
    QPushButton *BTN_LCUA;
    QPushButton *BTN_BMS;
    QPushButton *BTN_FAS;
    QPushButton *BTN_PCU;
    QPushButton *BTN_EDCUB;
    QPushButton *BTN_LCUB;
    QPushButton *BTN_CCUC;

    void setupUi(QWidget *MaintainceAllPortsPage)
    {
        if (MaintainceAllPortsPage->objectName().isEmpty())
            MaintainceAllPortsPage->setObjectName(QString::fromUtf8("MaintainceAllPortsPage"));
        MaintainceAllPortsPage->resize(1024, 768);
        MaintainceAllPortsPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color:rgb(0, 0, 50);\n"
"}\n"
"QPushButton\n"
"{\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"background-color: rgb(0, 128, 128);\n"
"border-top: 2px solid white;\n"
"border-left: 2px solid white;\n"
"border-radius:8px;\n"
"}\n"
""));
        BTN_HMI = new QPushButton(MaintainceAllPortsPage);
        BTN_HMI->setObjectName(QString::fromUtf8("BTN_HMI"));
        BTN_HMI->setGeometry(QRect(930, 220, 81, 41));
        BTN_HMI->setFocusPolicy(Qt::NoFocus);
        BTN_HMI->setStyleSheet(QString::fromUtf8(""));
        BTN_ERM = new QPushButton(MaintainceAllPortsPage);
        BTN_ERM->setObjectName(QString::fromUtf8("BTN_ERM"));
        BTN_ERM->setGeometry(QRect(930, 270, 81, 41));
        BTN_ERM->setFocusPolicy(Qt::NoFocus);
        BTN_ERM->setStyleSheet(QString::fromUtf8(""));
        BTN_BCU = new QPushButton(MaintainceAllPortsPage);
        BTN_BCU->setObjectName(QString::fromUtf8("BTN_BCU"));
        BTN_BCU->setGeometry(QRect(930, 420, 81, 41));
        BTN_BCU->setFocusPolicy(Qt::NoFocus);
        BTN_BCU->setStyleSheet(QString::fromUtf8(""));
        BTN_Return = new QPushButton(MaintainceAllPortsPage);
        BTN_Return->setObjectName(QString::fromUtf8("BTN_Return"));
        BTN_Return->setGeometry(QRect(910, 703, 100, 50));
        BTN_Return->setFocusPolicy(Qt::NoFocus);
        BTN_Return->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 0);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"\n"
"}"));
        BTN_RIOM = new QPushButton(MaintainceAllPortsPage);
        BTN_RIOM->setObjectName(QString::fromUtf8("BTN_RIOM"));
        BTN_RIOM->setGeometry(QRect(930, 170, 81, 41));
        BTN_RIOM->setFocusPolicy(Qt::NoFocus);
        BTN_RIOM->setStyleSheet(QString::fromUtf8(""));
        BTN_DCU = new QPushButton(MaintainceAllPortsPage);
        BTN_DCU->setObjectName(QString::fromUtf8("BTN_DCU"));
        BTN_DCU->setGeometry(QRect(930, 320, 81, 41));
        BTN_DCU->setFocusPolicy(Qt::NoFocus);
        BTN_DCU->setStyleSheet(QString::fromUtf8(""));
        BTN_HVAC = new QPushButton(MaintainceAllPortsPage);
        BTN_HVAC->setObjectName(QString::fromUtf8("BTN_HVAC"));
        BTN_HVAC->setGeometry(QRect(930, 620, 81, 41));
        BTN_HVAC->setFocusPolicy(Qt::NoFocus);
        BTN_HVAC->setStyleSheet(QString::fromUtf8(""));
        BTN_ATC = new QPushButton(MaintainceAllPortsPage);
        BTN_ATC->setObjectName(QString::fromUtf8("BTN_ATC"));
        BTN_ATC->setGeometry(QRect(20, 710, 81, 41));
        BTN_ATC->setFocusPolicy(Qt::NoFocus);
        BTN_ATC->setStyleSheet(QString::fromUtf8(""));
        BTN_CCUA = new QPushButton(MaintainceAllPortsPage);
        BTN_CCUA->setObjectName(QString::fromUtf8("BTN_CCUA"));
        BTN_CCUA->setGeometry(QRect(930, 20, 81, 41));
        BTN_CCUA->setFocusPolicy(Qt::NoFocus);
        BTN_CCUA->setStyleSheet(QString::fromUtf8(""));
        BTN_EDCUA = new QPushButton(MaintainceAllPortsPage);
        BTN_EDCUA->setObjectName(QString::fromUtf8("BTN_EDCUA"));
        BTN_EDCUA->setGeometry(QRect(930, 470, 81, 41));
        BTN_EDCUA->setFocusPolicy(Qt::NoFocus);
        BTN_EDCUA->setStyleSheet(QString::fromUtf8(""));
        BTN_SIV = new QPushButton(MaintainceAllPortsPage);
        BTN_SIV->setObjectName(QString::fromUtf8("BTN_SIV"));
        BTN_SIV->setGeometry(QRect(930, 370, 81, 41));
        BTN_SIV->setFocusPolicy(Qt::NoFocus);
        BTN_SIV->setStyleSheet(QString::fromUtf8(""));
        BTN_PIS = new QPushButton(MaintainceAllPortsPage);
        BTN_PIS->setObjectName(QString::fromUtf8("BTN_PIS"));
        BTN_PIS->setGeometry(QRect(110, 710, 81, 41));
        BTN_PIS->setFocusPolicy(Qt::NoFocus);
        BTN_PIS->setStyleSheet(QString::fromUtf8(""));
        BTN_CCU_D = new QPushButton(MaintainceAllPortsPage);
        BTN_CCU_D->setObjectName(QString::fromUtf8("BTN_CCU_D"));
        BTN_CCU_D->setGeometry(QRect(930, 570, 81, 41));
        BTN_CCU_D->setFocusPolicy(Qt::NoFocus);
        BTN_CCU_D->setStyleSheet(QString::fromUtf8(""));
        BTN_CCUB = new QPushButton(MaintainceAllPortsPage);
        BTN_CCUB->setObjectName(QString::fromUtf8("BTN_CCUB"));
        BTN_CCUB->setGeometry(QRect(930, 70, 81, 41));
        BTN_CCUB->setFocusPolicy(Qt::NoFocus);
        BTN_CCUB->setStyleSheet(QString::fromUtf8(""));
        BTN_TDS = new QPushButton(MaintainceAllPortsPage);
        BTN_TDS->setObjectName(QString::fromUtf8("BTN_TDS"));
        BTN_TDS->setGeometry(QRect(200, 710, 81, 41));
        BTN_TDS->setFocusPolicy(Qt::NoFocus);
        BTN_TDS->setStyleSheet(QString::fromUtf8(""));
        BTN_LCUA = new QPushButton(MaintainceAllPortsPage);
        BTN_LCUA->setObjectName(QString::fromUtf8("BTN_LCUA"));
        BTN_LCUA->setGeometry(QRect(290, 710, 81, 41));
        BTN_LCUA->setFocusPolicy(Qt::NoFocus);
        BTN_LCUA->setStyleSheet(QString::fromUtf8(""));
        BTN_BMS = new QPushButton(MaintainceAllPortsPage);
        BTN_BMS->setObjectName(QString::fromUtf8("BTN_BMS"));
        BTN_BMS->setGeometry(QRect(470, 710, 81, 41));
        BTN_BMS->setFocusPolicy(Qt::NoFocus);
        BTN_BMS->setStyleSheet(QString::fromUtf8(""));
        BTN_FAS = new QPushButton(MaintainceAllPortsPage);
        BTN_FAS->setObjectName(QString::fromUtf8("BTN_FAS"));
        BTN_FAS->setGeometry(QRect(560, 710, 81, 41));
        BTN_FAS->setFocusPolicy(Qt::NoFocus);
        BTN_FAS->setStyleSheet(QString::fromUtf8(""));
        BTN_PCU = new QPushButton(MaintainceAllPortsPage);
        BTN_PCU->setObjectName(QString::fromUtf8("BTN_PCU"));
        BTN_PCU->setGeometry(QRect(650, 710, 81, 41));
        BTN_PCU->setFocusPolicy(Qt::NoFocus);
        BTN_PCU->setStyleSheet(QString::fromUtf8(""));
        BTN_EDCUB = new QPushButton(MaintainceAllPortsPage);
        BTN_EDCUB->setObjectName(QString::fromUtf8("BTN_EDCUB"));
        BTN_EDCUB->setGeometry(QRect(930, 520, 81, 41));
        BTN_EDCUB->setFocusPolicy(Qt::NoFocus);
        BTN_EDCUB->setStyleSheet(QString::fromUtf8(""));
        BTN_LCUB = new QPushButton(MaintainceAllPortsPage);
        BTN_LCUB->setObjectName(QString::fromUtf8("BTN_LCUB"));
        BTN_LCUB->setGeometry(QRect(380, 710, 81, 41));
        BTN_LCUB->setFocusPolicy(Qt::NoFocus);
        BTN_LCUB->setStyleSheet(QString::fromUtf8(""));
        BTN_CCUC = new QPushButton(MaintainceAllPortsPage);
        BTN_CCUC->setObjectName(QString::fromUtf8("BTN_CCUC"));
        BTN_CCUC->setGeometry(QRect(930, 120, 81, 41));
        BTN_CCUC->setFocusPolicy(Qt::NoFocus);
        BTN_CCUC->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(MaintainceAllPortsPage);

        QMetaObject::connectSlotsByName(MaintainceAllPortsPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceAllPortsPage)
    {
        MaintainceAllPortsPage->setWindowTitle(QApplication::translate("MaintainceAllPortsPage", "Form", 0, QApplication::UnicodeUTF8));
        BTN_HMI->setText(QApplication::translate("MaintainceAllPortsPage", "HMI", 0, QApplication::UnicodeUTF8));
        BTN_ERM->setText(QApplication::translate("MaintainceAllPortsPage", "ERM", 0, QApplication::UnicodeUTF8));
        BTN_BCU->setText(QApplication::translate("MaintainceAllPortsPage", "BCU", 0, QApplication::UnicodeUTF8));
        BTN_Return->setText(QApplication::translate("MaintainceAllPortsPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        BTN_RIOM->setText(QApplication::translate("MaintainceAllPortsPage", "RIOM", 0, QApplication::UnicodeUTF8));
        BTN_DCU->setText(QApplication::translate("MaintainceAllPortsPage", "DCU", 0, QApplication::UnicodeUTF8));
        BTN_HVAC->setText(QApplication::translate("MaintainceAllPortsPage", "HVAC", 0, QApplication::UnicodeUTF8));
        BTN_ATC->setText(QApplication::translate("MaintainceAllPortsPage", "ATC", 0, QApplication::UnicodeUTF8));
        BTN_CCUA->setText(QApplication::translate("MaintainceAllPortsPage", "CCUA", 0, QApplication::UnicodeUTF8));
        BTN_EDCUA->setText(QApplication::translate("MaintainceAllPortsPage", "EDCUA", 0, QApplication::UnicodeUTF8));
        BTN_SIV->setText(QApplication::translate("MaintainceAllPortsPage", "SIV", 0, QApplication::UnicodeUTF8));
        BTN_PIS->setText(QApplication::translate("MaintainceAllPortsPage", "PIS", 0, QApplication::UnicodeUTF8));
        BTN_CCU_D->setText(QApplication::translate("MaintainceAllPortsPage", "CCU-D", 0, QApplication::UnicodeUTF8));
        BTN_CCUB->setText(QApplication::translate("MaintainceAllPortsPage", "CCUB", 0, QApplication::UnicodeUTF8));
        BTN_TDS->setText(QApplication::translate("MaintainceAllPortsPage", "TDS", 0, QApplication::UnicodeUTF8));
        BTN_LCUA->setText(QApplication::translate("MaintainceAllPortsPage", "LCUA", 0, QApplication::UnicodeUTF8));
        BTN_BMS->setText(QApplication::translate("MaintainceAllPortsPage", "BMS", 0, QApplication::UnicodeUTF8));
        BTN_FAS->setText(QApplication::translate("MaintainceAllPortsPage", "FAS", 0, QApplication::UnicodeUTF8));
        BTN_PCU->setText(QApplication::translate("MaintainceAllPortsPage", "PCU", 0, QApplication::UnicodeUTF8));
        BTN_EDCUB->setText(QApplication::translate("MaintainceAllPortsPage", "EDCUB", 0, QApplication::UnicodeUTF8));
        BTN_LCUB->setText(QApplication::translate("MaintainceAllPortsPage", "LCUB", 0, QApplication::UnicodeUTF8));
        BTN_CCUC->setText(QApplication::translate("MaintainceAllPortsPage", "CCUC", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceAllPortsPage: public Ui_MaintainceAllPortsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEALLPORTSPAGE_H
