/********************************************************************************
** Form generated from reading UI file 'vehiclestatusarea.ui'
**
** Created: Wed Jul 4 18:59:56 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLESTATUSAREA_H
#define UI_VEHICLESTATUSAREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleStatusArea
{
public:
    QLabel *LBLSpeed;
    QLabel *LBLNetV;
    QPushButton *BTNHVAC;
    QPushButton *BTNSIV;
    QLabel *label;
    QLabel *label_2;
    QPushButton *BTNLineCircuitBreaker;
    QPushButton *BTNEDCU;
    QPushButton *BTNPIS;
    QPushButton *BTNTolopogy;
    QPushButton *BTNFire;
    QPushButton *BTNBCU;
    QPushButton *BTNTCU;
    QPushButton *BTNACP;
    QLabel *LBLLevel;
    QLabel *LBLSpeed_3;
    QLabel *LBLHVAC;
    QLabel *LBLSIV;
    QLabel *LBLLineCircleBreaker;
    QLabel *LBLEDCU;
    QLabel *LBLPIS;
    QLabel *LBLFire;
    QLabel *LBLBCU;
    QLabel *LBLACP;
    QLabel *LBLTolopogy;
    QLabel *LBLTCU;
    QLabel *LBLNetV_2;
    QLabel *LBLNetV_3;
    QLabel *LBLNetV_4;
    QLabel *LBLNetV_5;
    QLabel *LBLNetV_6;

    void setupUi(QWidget *VehicleStatusArea)
    {
        if (VehicleStatusArea->objectName().isEmpty())
            VehicleStatusArea->setObjectName(QString::fromUtf8("VehicleStatusArea"));
        VehicleStatusArea->resize(1024, 251);
        VehicleStatusArea->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"QLabel\n"
"{\n"
"color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"}\n"
""));
        LBLSpeed = new QLabel(VehicleStatusArea);
        LBLSpeed->setObjectName(QString::fromUtf8("LBLSpeed"));
        LBLSpeed->setGeometry(QRect(30, 160, 111, 31));
        LBLSpeed->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        LBLNetV = new QLabel(VehicleStatusArea);
        LBLNetV->setObjectName(QString::fromUtf8("LBLNetV"));
        LBLNetV->setGeometry(QRect(750, 60, 71, 31));
        BTNHVAC = new QPushButton(VehicleStatusArea);
        BTNHVAC->setObjectName(QString::fromUtf8("BTNHVAC"));
        BTNHVAC->setGeometry(QRect(270, 30, 81, 81));
        BTNHVAC->setFocusPolicy(Qt::NoFocus);
        BTNHVAC->setStyleSheet(QString::fromUtf8(""));
        BTNSIV = new QPushButton(VehicleStatusArea);
        BTNSIV->setObjectName(QString::fromUtf8("BTNSIV"));
        BTNSIV->setGeometry(QRect(360, 30, 81, 81));
        BTNSIV->setFocusPolicy(Qt::NoFocus);
        BTNSIV->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(VehicleStatusArea);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 461, 101));
        label->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(0,0,50,255),stop:1 rgba(150,150,200,255));"));
        label_2 = new QLabel(VehicleStatusArea);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 120, 461, 101));
        label_2->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(0,0,50,255),stop:1 rgba(150,150,200,255));"));
        BTNLineCircuitBreaker = new QPushButton(VehicleStatusArea);
        BTNLineCircuitBreaker->setObjectName(QString::fromUtf8("BTNLineCircuitBreaker"));
        BTNLineCircuitBreaker->setGeometry(QRect(450, 30, 81, 81));
        BTNLineCircuitBreaker->setFocusPolicy(Qt::NoFocus);
        BTNLineCircuitBreaker->setStyleSheet(QString::fromUtf8(""));
        BTNEDCU = new QPushButton(VehicleStatusArea);
        BTNEDCU->setObjectName(QString::fromUtf8("BTNEDCU"));
        BTNEDCU->setGeometry(QRect(540, 30, 81, 81));
        BTNEDCU->setFocusPolicy(Qt::NoFocus);
        BTNEDCU->setStyleSheet(QString::fromUtf8(""));
        BTNPIS = new QPushButton(VehicleStatusArea);
        BTNPIS->setObjectName(QString::fromUtf8("BTNPIS"));
        BTNPIS->setGeometry(QRect(630, 30, 81, 81));
        BTNPIS->setFocusPolicy(Qt::NoFocus);
        BTNPIS->setStyleSheet(QString::fromUtf8(""));
        BTNTolopogy = new QPushButton(VehicleStatusArea);
        BTNTolopogy->setObjectName(QString::fromUtf8("BTNTolopogy"));
        BTNTolopogy->setGeometry(QRect(630, 130, 81, 81));
        BTNTolopogy->setFocusPolicy(Qt::NoFocus);
        BTNTolopogy->setStyleSheet(QString::fromUtf8(""));
        BTNFire = new QPushButton(VehicleStatusArea);
        BTNFire->setObjectName(QString::fromUtf8("BTNFire"));
        BTNFire->setGeometry(QRect(450, 130, 81, 81));
        BTNFire->setFocusPolicy(Qt::NoFocus);
        BTNFire->setStyleSheet(QString::fromUtf8(""));
        BTNBCU = new QPushButton(VehicleStatusArea);
        BTNBCU->setObjectName(QString::fromUtf8("BTNBCU"));
        BTNBCU->setGeometry(QRect(270, 130, 81, 81));
        BTNBCU->setFocusPolicy(Qt::NoFocus);
        BTNBCU->setStyleSheet(QString::fromUtf8(""));
        BTNTCU = new QPushButton(VehicleStatusArea);
        BTNTCU->setObjectName(QString::fromUtf8("BTNTCU"));
        BTNTCU->setGeometry(QRect(360, 130, 81, 81));
        BTNTCU->setFocusPolicy(Qt::NoFocus);
        BTNTCU->setStyleSheet(QString::fromUtf8(""));
        BTNACP = new QPushButton(VehicleStatusArea);
        BTNACP->setObjectName(QString::fromUtf8("BTNACP"));
        BTNACP->setGeometry(QRect(540, 130, 81, 81));
        BTNACP->setFocusPolicy(Qt::NoFocus);
        BTNACP->setStyleSheet(QString::fromUtf8(""));
        LBLLevel = new QLabel(VehicleStatusArea);
        LBLLevel->setObjectName(QString::fromUtf8("LBLLevel"));
        LBLLevel->setGeometry(QRect(180, 40, 41, 181));
        LBLLevel->setStyleSheet(QString::fromUtf8("border:1px solid rgb(170,170,170);"));
        LBLSpeed_3 = new QLabel(VehicleStatusArea);
        LBLSpeed_3->setObjectName(QString::fromUtf8("LBLSpeed_3"));
        LBLSpeed_3->setGeometry(QRect(30, 70, 111, 31));
        LBLHVAC = new QLabel(VehicleStatusArea);
        LBLHVAC->setObjectName(QString::fromUtf8("LBLHVAC"));
        LBLHVAC->setGeometry(QRect(270, 30, 81, 81));
        LBLHVAC->setStyleSheet(QString::fromUtf8(""));
        LBLSIV = new QLabel(VehicleStatusArea);
        LBLSIV->setObjectName(QString::fromUtf8("LBLSIV"));
        LBLSIV->setGeometry(QRect(360, 30, 81, 81));
        LBLSIV->setStyleSheet(QString::fromUtf8(""));
        LBLLineCircleBreaker = new QLabel(VehicleStatusArea);
        LBLLineCircleBreaker->setObjectName(QString::fromUtf8("LBLLineCircleBreaker"));
        LBLLineCircleBreaker->setGeometry(QRect(450, 30, 81, 81));
        LBLLineCircleBreaker->setStyleSheet(QString::fromUtf8(""));
        LBLEDCU = new QLabel(VehicleStatusArea);
        LBLEDCU->setObjectName(QString::fromUtf8("LBLEDCU"));
        LBLEDCU->setGeometry(QRect(540, 30, 81, 81));
        LBLEDCU->setStyleSheet(QString::fromUtf8(""));
        LBLPIS = new QLabel(VehicleStatusArea);
        LBLPIS->setObjectName(QString::fromUtf8("LBLPIS"));
        LBLPIS->setGeometry(QRect(630, 30, 81, 81));
        LBLPIS->setStyleSheet(QString::fromUtf8(""));
        LBLFire = new QLabel(VehicleStatusArea);
        LBLFire->setObjectName(QString::fromUtf8("LBLFire"));
        LBLFire->setGeometry(QRect(450, 130, 81, 81));
        LBLFire->setStyleSheet(QString::fromUtf8(""));
        LBLBCU = new QLabel(VehicleStatusArea);
        LBLBCU->setObjectName(QString::fromUtf8("LBLBCU"));
        LBLBCU->setGeometry(QRect(270, 130, 81, 81));
        LBLBCU->setStyleSheet(QString::fromUtf8(""));
        LBLACP = new QLabel(VehicleStatusArea);
        LBLACP->setObjectName(QString::fromUtf8("LBLACP"));
        LBLACP->setGeometry(QRect(540, 130, 81, 81));
        LBLACP->setStyleSheet(QString::fromUtf8(""));
        LBLTolopogy = new QLabel(VehicleStatusArea);
        LBLTolopogy->setObjectName(QString::fromUtf8("LBLTolopogy"));
        LBLTolopogy->setGeometry(QRect(630, 130, 81, 81));
        LBLTolopogy->setStyleSheet(QString::fromUtf8(""));
        LBLTCU = new QLabel(VehicleStatusArea);
        LBLTCU->setObjectName(QString::fromUtf8("LBLTCU"));
        LBLTCU->setGeometry(QRect(360, 130, 81, 81));
        LBLTCU->setStyleSheet(QString::fromUtf8(""));
        LBLNetV_2 = new QLabel(VehicleStatusArea);
        LBLNetV_2->setObjectName(QString::fromUtf8("LBLNetV_2"));
        LBLNetV_2->setGeometry(QRect(830, 60, 61, 31));
        LBLNetV_3 = new QLabel(VehicleStatusArea);
        LBLNetV_3->setObjectName(QString::fromUtf8("LBLNetV_3"));
        LBLNetV_3->setGeometry(QRect(750, 160, 71, 31));
        LBLNetV_4 = new QLabel(VehicleStatusArea);
        LBLNetV_4->setObjectName(QString::fromUtf8("LBLNetV_4"));
        LBLNetV_4->setGeometry(QRect(830, 160, 61, 31));
        LBLNetV_5 = new QLabel(VehicleStatusArea);
        LBLNetV_5->setObjectName(QString::fromUtf8("LBLNetV_5"));
        LBLNetV_5->setGeometry(QRect(900, 60, 71, 31));
        LBLNetV_6 = new QLabel(VehicleStatusArea);
        LBLNetV_6->setObjectName(QString::fromUtf8("LBLNetV_6"));
        LBLNetV_6->setGeometry(QRect(900, 160, 71, 31));
        label->raise();
        label_2->raise();
        LBLSpeed->raise();
        LBLNetV->raise();
        LBLLevel->raise();
        LBLSpeed_3->raise();
        LBLHVAC->raise();
        LBLSIV->raise();
        LBLLineCircleBreaker->raise();
        LBLEDCU->raise();
        LBLPIS->raise();
        LBLFire->raise();
        LBLBCU->raise();
        LBLACP->raise();
        LBLTolopogy->raise();
        LBLTCU->raise();
        LBLNetV_2->raise();
        LBLNetV_3->raise();
        LBLNetV_4->raise();
        LBLNetV_5->raise();
        LBLNetV_6->raise();
        BTNHVAC->raise();
        BTNSIV->raise();
        BTNLineCircuitBreaker->raise();
        BTNEDCU->raise();
        BTNPIS->raise();
        BTNBCU->raise();
        BTNTCU->raise();
        BTNFire->raise();
        BTNACP->raise();
        BTNTolopogy->raise();

        retranslateUi(VehicleStatusArea);

        QMetaObject::connectSlotsByName(VehicleStatusArea);
    } // setupUi

    void retranslateUi(QWidget *VehicleStatusArea)
    {
        VehicleStatusArea->setWindowTitle(QApplication::translate("VehicleStatusArea", "Form", 0, QApplication::UnicodeUTF8));
        LBLSpeed->setText(QApplication::translate("VehicleStatusArea", "\347\264\247\346\200\245\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        LBLNetV->setText(QApplication::translate("VehicleStatusArea", "\351\231\220\351\200\237", 0, QApplication::UnicodeUTF8));
        BTNHVAC->setText(QString());
        BTNSIV->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        BTNLineCircuitBreaker->setText(QString());
        BTNEDCU->setText(QString());
        BTNPIS->setText(QString());
        BTNTolopogy->setText(QString());
        BTNFire->setText(QString());
        BTNBCU->setText(QString());
        BTNTCU->setText(QString());
        BTNACP->setText(QString());
        LBLLevel->setText(QString());
        LBLSpeed_3->setText(QApplication::translate("VehicleStatusArea", "ATO\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        LBLHVAC->setText(QString());
        LBLSIV->setText(QString());
        LBLLineCircleBreaker->setText(QString());
        LBLEDCU->setText(QString());
        LBLPIS->setText(QString());
        LBLFire->setText(QString());
        LBLBCU->setText(QString());
        LBLACP->setText(QString());
        LBLTolopogy->setText(QString());
        LBLTCU->setText(QString());
        LBLNetV_2->setText(QString());
        LBLNetV_3->setText(QApplication::translate("VehicleStatusArea", "\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        LBLNetV_4->setText(QString());
        LBLNetV_5->setText(QApplication::translate("VehicleStatusArea", "km/h", 0, QApplication::UnicodeUTF8));
        LBLNetV_6->setText(QApplication::translate("VehicleStatusArea", "km/h", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleStatusArea: public Ui_VehicleStatusArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLESTATUSAREA_H
