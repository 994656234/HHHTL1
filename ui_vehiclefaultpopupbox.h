/********************************************************************************
** Form generated from reading UI file 'vehiclefaultpopupbox.ui'
**
** Created: Mon Jul 23 19:41:46 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEFAULTPOPUPBOX_H
#define UI_VEHICLEFAULTPOPUPBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleFaultPopupBox
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *VehicleFaultPopupBox)
    {
        if (VehicleFaultPopupBox->objectName().isEmpty())
            VehicleFaultPopupBox->setObjectName(QString::fromUtf8("VehicleFaultPopupBox"));
        VehicleFaultPopupBox->resize(1024, 71);
        VehicleFaultPopupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);"));
        label = new QLabel(VehicleFaultPopupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, 10, 1041, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        pushButton = new QPushButton(VehicleFaultPopupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(900, 10, 98, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border:0px solid ;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));"));
        label_2 = new QLabel(VehicleFaultPopupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;\n"
"background-color: rgb(255, 255, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(VehicleFaultPopupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 20, 181, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;\n"
"background-color: rgb(255, 255, 0);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(VehicleFaultPopupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 20, 321, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;\n"
"background-color: rgb(255, 255, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(VehicleFaultPopupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(650, 20, 241, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;\n"
"background-color: rgb(255, 255, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        retranslateUi(VehicleFaultPopupBox);

        QMetaObject::connectSlotsByName(VehicleFaultPopupBox);
    } // setupUi

    void retranslateUi(QWidget *VehicleFaultPopupBox)
    {
        VehicleFaultPopupBox->setWindowTitle(QApplication::translate("VehicleFaultPopupBox", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("VehicleFaultPopupBox", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VehicleFaultPopupBox", "2107", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VehicleFaultPopupBox", "2\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("VehicleFaultPopupBox", "\350\275\246\351\227\2502\351\200\232\344\277\241\344\270\255\346\226\255", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("VehicleFaultPopupBox", "2018-07-18 12:22:22", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleFaultPopupBox: public Ui_VehicleFaultPopupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEFAULTPOPUPBOX_H
