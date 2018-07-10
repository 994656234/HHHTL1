/********************************************************************************
** Form generated from reading UI file 'maintainceinitsetpage.ui'
**
** Created: Wed Jul 4 18:59:56 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEINITSETPAGE_H
#define UI_MAINTAINCEINITSETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceInitSetPage
{
public:
    QPushButton *BTN_back;
    QPushButton *TC1Btn;
    QLabel *TC2HMIDBVlbl;
    QPushButton *HMIReboot;
    QLabel *TC1HMIDBVlbl;
    QPushButton *TC2Btn;
    QLabel *backgroundlbl;

    void setupUi(QWidget *MaintainceInitSetPage)
    {
        if (MaintainceInitSetPage->objectName().isEmpty())
            MaintainceInitSetPage->setObjectName(QString::fromUtf8("MaintainceInitSetPage"));
        MaintainceInitSetPage->resize(1024, 706);
        MaintainceInitSetPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);"));
        BTN_back = new QPushButton(MaintainceInitSetPage);
        BTN_back->setObjectName(QString::fromUtf8("BTN_back"));
        BTN_back->setGeometry(QRect(910, 620, 100, 71));
        BTN_back->setFocusPolicy(Qt::NoFocus);
        BTN_back->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;background-color: rgb(0, 128, 128);\n"
"border: 2px solid white;\n"
""));
        TC1Btn = new QPushButton(MaintainceInitSetPage);
        TC1Btn->setObjectName(QString::fromUtf8("TC1Btn"));
        TC1Btn->setGeometry(QRect(130, 160, 101, 51));
        TC1Btn->setFocusPolicy(Qt::NoFocus);
        TC1Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;background-color: rgb(0, 128, 128);\n"
"border: 2px solid white;\n"
""));
        TC2HMIDBVlbl = new QLabel(MaintainceInitSetPage);
        TC2HMIDBVlbl->setObjectName(QString::fromUtf8("TC2HMIDBVlbl"));
        TC2HMIDBVlbl->setGeometry(QRect(730, 100, 221, 31));
        TC2HMIDBVlbl->setStyleSheet(QString::fromUtf8("color: white;\n"
"font:16px ;\n"
""));
        TC2HMIDBVlbl->setTextFormat(Qt::AutoText);
        TC2HMIDBVlbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        HMIReboot = new QPushButton(MaintainceInitSetPage);
        HMIReboot->setObjectName(QString::fromUtf8("HMIReboot"));
        HMIReboot->setGeometry(QRect(440, 440, 161, 51));
        HMIReboot->setFocusPolicy(Qt::NoFocus);
        HMIReboot->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;background-color: rgb(0, 128, 128);\n"
"border: 2px solid white;\n"
""));
        TC1HMIDBVlbl = new QLabel(MaintainceInitSetPage);
        TC1HMIDBVlbl->setObjectName(QString::fromUtf8("TC1HMIDBVlbl"));
        TC1HMIDBVlbl->setGeometry(QRect(90, 100, 221, 31));
        TC1HMIDBVlbl->setStyleSheet(QString::fromUtf8("color: white;\n"
"font:16px ;\n"
""));
        TC1HMIDBVlbl->setTextFormat(Qt::AutoText);
        TC1HMIDBVlbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TC2Btn = new QPushButton(MaintainceInitSetPage);
        TC2Btn->setObjectName(QString::fromUtf8("TC2Btn"));
        TC2Btn->setGeometry(QRect(780, 160, 101, 51));
        TC2Btn->setFocusPolicy(Qt::NoFocus);
        TC2Btn->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;background-color: rgb(0, 128, 128);\n"
"border: 2px solid white;\n"
""));
        backgroundlbl = new QLabel(MaintainceInitSetPage);
        backgroundlbl->setObjectName(QString::fromUtf8("backgroundlbl"));
        backgroundlbl->setGeometry(QRect(102, 140, 800, 161));
        backgroundlbl->setStyleSheet(QString::fromUtf8("color: white;\n"
"border: 2px solid  white;\n"
"border-radius: 12px;\n"
"font:36px ;\n"
""));
        backgroundlbl->setTextFormat(Qt::AutoText);
        backgroundlbl->setAlignment(Qt::AlignCenter);
        backgroundlbl->raise();
        TC1Btn->raise();
        TC2HMIDBVlbl->raise();
        HMIReboot->raise();
        TC1HMIDBVlbl->raise();
        TC2Btn->raise();
        BTN_back->raise();

        retranslateUi(MaintainceInitSetPage);

        QMetaObject::connectSlotsByName(MaintainceInitSetPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceInitSetPage)
    {
        MaintainceInitSetPage->setWindowTitle(QApplication::translate("MaintainceInitSetPage", "Form", 0, QApplication::UnicodeUTF8));
        BTN_back->setText(QApplication::translate("MaintainceInitSetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        TC1Btn->setText(QApplication::translate("MaintainceInitSetPage", "TC1", 0, QApplication::UnicodeUTF8));
        TC2HMIDBVlbl->setText(QApplication::translate("MaintainceInitSetPage", "TC2 HMI DBVersion:", 0, QApplication::UnicodeUTF8));
        HMIReboot->setText(QApplication::translate("MaintainceInitSetPage", "\351\207\215\345\220\257HMI", 0, QApplication::UnicodeUTF8));
        TC1HMIDBVlbl->setText(QApplication::translate("MaintainceInitSetPage", "TC1 HMI DBVersion:", 0, QApplication::UnicodeUTF8));
        TC2Btn->setText(QApplication::translate("MaintainceInitSetPage", "TC2", 0, QApplication::UnicodeUTF8));
        backgroundlbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaintainceInitSetPage: public Ui_MaintainceInitSetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEINITSETPAGE_H
