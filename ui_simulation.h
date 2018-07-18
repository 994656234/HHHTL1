/********************************************************************************
** Form generated from reading UI file 'simulation.ui'
**
** Created: Tue Jul 17 22:05:23 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATION_H
#define UI_SIMULATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Simulation
{
public:
    QPushButton *btnConfirm;
    QLineEdit *lndPort;
    QLineEdit *lndByteOffset;
    QLineEdit *lndBitOffset;
    QPushButton *btnClose;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lndValue;
    QTextBrowser *txtMessage;
    QComboBox *cbType;
    QTextBrowser *sendMessage;

    void setupUi(QWidget *Simulation)
    {
        if (Simulation->objectName().isEmpty())
            Simulation->setObjectName(QString::fromUtf8("Simulation"));
        Simulation->resize(512, 452);
        Simulation->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 0px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	color: white;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"	font: 15px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: white;\n"
"}"));
        btnConfirm = new QPushButton(Simulation);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(410, 130, 91, 40));
        btnConfirm->setStyleSheet(QString::fromUtf8(""));
        lndPort = new QLineEdit(Simulation);
        lndPort->setObjectName(QString::fromUtf8("lndPort"));
        lndPort->setGeometry(QRect(10, 50, 141, 41));
        lndPort->setStyleSheet(QString::fromUtf8(""));
        lndPort->setAlignment(Qt::AlignCenter);
        lndByteOffset = new QLineEdit(Simulation);
        lndByteOffset->setObjectName(QString::fromUtf8("lndByteOffset"));
        lndByteOffset->setGeometry(QRect(160, 50, 141, 41));
        lndByteOffset->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lndByteOffset->setAlignment(Qt::AlignCenter);
        lndBitOffset = new QLineEdit(Simulation);
        lndBitOffset->setObjectName(QString::fromUtf8("lndBitOffset"));
        lndBitOffset->setGeometry(QRect(310, 50, 91, 41));
        lndBitOffset->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lndBitOffset->setAlignment(Qt::AlignCenter);
        btnClose = new QPushButton(Simulation);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(410, 180, 91, 40));
        label = new QLabel(Simulation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Simulation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 20, 141, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Simulation);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 20, 91, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Simulation);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 20, 91, 20));
        label_4->setAlignment(Qt::AlignCenter);
        lndValue = new QLineEdit(Simulation);
        lndValue->setObjectName(QString::fromUtf8("lndValue"));
        lndValue->setGeometry(QRect(410, 50, 91, 41));
        lndValue->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lndValue->setAlignment(Qt::AlignCenter);
        txtMessage = new QTextBrowser(Simulation);
        txtMessage->setObjectName(QString::fromUtf8("txtMessage"));
        txtMessage->setGeometry(QRect(10, 100, 391, 121));
        txtMessage->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        cbType = new QComboBox(Simulation);
        cbType->setObjectName(QString::fromUtf8("cbType"));
        cbType->setGeometry(QRect(410, 97, 91, 27));
        cbType->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: white;\n"
"border-color: gray;"));
        sendMessage = new QTextBrowser(Simulation);
        sendMessage->setObjectName(QString::fromUtf8("sendMessage"));
        sendMessage->setGeometry(QRect(10, 230, 491, 211));
        sendMessage->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Simulation);

        QMetaObject::connectSlotsByName(Simulation);
    } // setupUi

    void retranslateUi(QWidget *Simulation)
    {
        Simulation->setWindowTitle(QApplication::translate("Simulation", "Form", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("Simulation", "Confirm", 0, QApplication::UnicodeUTF8));
        lndPort->setText(QString());
        lndByteOffset->setText(QString());
        lndBitOffset->setText(QString());
        btnClose->setText(QApplication::translate("Simulation", "Close", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Simulation", "Port", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Simulation", "Byte Offset", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Simulation", "Bit Offset", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Simulation", "Value", 0, QApplication::UnicodeUTF8));
        lndValue->setText(QString());
        cbType->clear();
        cbType->insertItems(0, QStringList()
         << QApplication::translate("Simulation", "char", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Simulation", "int", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Simulation", "uint", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class Simulation: public Ui_Simulation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATION_H
