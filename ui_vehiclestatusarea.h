/********************************************************************************
** Form generated from reading UI file 'vehiclestatusarea.ui'
**
** Created: Mon Jul 23 19:41:46 2018
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
    QWidget *widget_2;
    QLabel *Barlabel_left_24;
    QLabel *label_84;
    QLabel *label_85;
    QLabel *label_86;
    QLabel *label_87;
    QLabel *Barlabel_left_25;
    QLabel *label_88;
    QLabel *label_89;
    QLabel *label_90;
    QLabel *label_91;
    QLabel *label_92;
    QLabel *label_93;
    QLabel *Barlabel_right_7;
    QLabel *label_94;
    QLabel *Barlabel_TraBrakevalue_4;
    QLabel *label_95;
    QLabel *Barlabel_left_26;
    QLabel *Barlabel_TraBrakeLine_4;
    QLabel *label_96;
    QLabel *label_97;
    QLabel *label_98;
    QLabel *label_99;
    QLabel *label_100;
    QLabel *label_101;
    QLabel *LBLSpeed_4;
    QLabel *LBLSpeed_5;

    void setupUi(QWidget *VehicleStatusArea)
    {
        if (VehicleStatusArea->objectName().isEmpty())
            VehicleStatusArea->setObjectName(QString::fromUtf8("VehicleStatusArea"));
        VehicleStatusArea->resize(1024, 251);
        VehicleStatusArea->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"\n"
""));
        LBLSpeed = new QLabel(VehicleStatusArea);
        LBLSpeed->setObjectName(QString::fromUtf8("LBLSpeed"));
        LBLSpeed->setGeometry(QRect(20, 160, 111, 31));
        LBLSpeed->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
""));
        LBLNetV = new QLabel(VehicleStatusArea);
        LBLNetV->setObjectName(QString::fromUtf8("LBLNetV"));
        LBLNetV->setGeometry(QRect(820, 60, 61, 31));
        LBLNetV->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        BTNHVAC = new QPushButton(VehicleStatusArea);
        BTNHVAC->setObjectName(QString::fromUtf8("BTNHVAC"));
        BTNHVAC->setGeometry(QRect(350, 40, 81, 81));
        BTNHVAC->setFocusPolicy(Qt::NoFocus);
        BTNHVAC->setStyleSheet(QString::fromUtf8(""));
        BTNSIV = new QPushButton(VehicleStatusArea);
        BTNSIV->setObjectName(QString::fromUtf8("BTNSIV"));
        BTNSIV->setGeometry(QRect(440, 40, 81, 81));
        BTNSIV->setFocusPolicy(Qt::NoFocus);
        BTNSIV->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(VehicleStatusArea);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 30, 461, 101));
        label->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(0,0,50,255),stop:1 rgba(150,150,200,255));"));
        label_2 = new QLabel(VehicleStatusArea);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 130, 461, 101));
        label_2->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(0,0,50,255),stop:1 rgba(150,150,200,255));"));
        BTNLineCircuitBreaker = new QPushButton(VehicleStatusArea);
        BTNLineCircuitBreaker->setObjectName(QString::fromUtf8("BTNLineCircuitBreaker"));
        BTNLineCircuitBreaker->setGeometry(QRect(530, 40, 81, 81));
        BTNLineCircuitBreaker->setFocusPolicy(Qt::NoFocus);
        BTNLineCircuitBreaker->setStyleSheet(QString::fromUtf8(""));
        BTNEDCU = new QPushButton(VehicleStatusArea);
        BTNEDCU->setObjectName(QString::fromUtf8("BTNEDCU"));
        BTNEDCU->setGeometry(QRect(620, 40, 81, 81));
        BTNEDCU->setFocusPolicy(Qt::NoFocus);
        BTNEDCU->setStyleSheet(QString::fromUtf8(""));
        BTNPIS = new QPushButton(VehicleStatusArea);
        BTNPIS->setObjectName(QString::fromUtf8("BTNPIS"));
        BTNPIS->setGeometry(QRect(710, 40, 81, 81));
        BTNPIS->setFocusPolicy(Qt::NoFocus);
        BTNPIS->setStyleSheet(QString::fromUtf8(""));
        BTNTolopogy = new QPushButton(VehicleStatusArea);
        BTNTolopogy->setObjectName(QString::fromUtf8("BTNTolopogy"));
        BTNTolopogy->setGeometry(QRect(710, 140, 81, 81));
        BTNTolopogy->setFocusPolicy(Qt::NoFocus);
        BTNTolopogy->setStyleSheet(QString::fromUtf8(""));
        BTNFire = new QPushButton(VehicleStatusArea);
        BTNFire->setObjectName(QString::fromUtf8("BTNFire"));
        BTNFire->setGeometry(QRect(530, 140, 81, 81));
        BTNFire->setFocusPolicy(Qt::NoFocus);
        BTNFire->setStyleSheet(QString::fromUtf8(""));
        BTNBCU = new QPushButton(VehicleStatusArea);
        BTNBCU->setObjectName(QString::fromUtf8("BTNBCU"));
        BTNBCU->setGeometry(QRect(350, 140, 81, 81));
        BTNBCU->setFocusPolicy(Qt::NoFocus);
        BTNBCU->setStyleSheet(QString::fromUtf8(""));
        BTNTCU = new QPushButton(VehicleStatusArea);
        BTNTCU->setObjectName(QString::fromUtf8("BTNTCU"));
        BTNTCU->setGeometry(QRect(440, 140, 81, 81));
        BTNTCU->setFocusPolicy(Qt::NoFocus);
        BTNTCU->setStyleSheet(QString::fromUtf8(""));
        BTNACP = new QPushButton(VehicleStatusArea);
        BTNACP->setObjectName(QString::fromUtf8("BTNACP"));
        BTNACP->setGeometry(QRect(620, 140, 81, 81));
        BTNACP->setFocusPolicy(Qt::NoFocus);
        BTNACP->setStyleSheet(QString::fromUtf8(""));
        LBLSpeed_3 = new QLabel(VehicleStatusArea);
        LBLSpeed_3->setObjectName(QString::fromUtf8("LBLSpeed_3"));
        LBLSpeed_3->setGeometry(QRect(20, 70, 111, 31));
        LBLSpeed_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:1px solid black;\n"
"}"));
        LBLHVAC = new QLabel(VehicleStatusArea);
        LBLHVAC->setObjectName(QString::fromUtf8("LBLHVAC"));
        LBLHVAC->setGeometry(QRect(350, 40, 81, 81));
        LBLHVAC->setStyleSheet(QString::fromUtf8(""));
        LBLSIV = new QLabel(VehicleStatusArea);
        LBLSIV->setObjectName(QString::fromUtf8("LBLSIV"));
        LBLSIV->setGeometry(QRect(440, 40, 81, 81));
        LBLSIV->setStyleSheet(QString::fromUtf8(""));
        LBLLineCircleBreaker = new QLabel(VehicleStatusArea);
        LBLLineCircleBreaker->setObjectName(QString::fromUtf8("LBLLineCircleBreaker"));
        LBLLineCircleBreaker->setGeometry(QRect(530, 40, 81, 81));
        LBLLineCircleBreaker->setStyleSheet(QString::fromUtf8(""));
        LBLEDCU = new QLabel(VehicleStatusArea);
        LBLEDCU->setObjectName(QString::fromUtf8("LBLEDCU"));
        LBLEDCU->setGeometry(QRect(620, 40, 81, 81));
        LBLEDCU->setStyleSheet(QString::fromUtf8(""));
        LBLPIS = new QLabel(VehicleStatusArea);
        LBLPIS->setObjectName(QString::fromUtf8("LBLPIS"));
        LBLPIS->setGeometry(QRect(710, 40, 81, 81));
        LBLPIS->setStyleSheet(QString::fromUtf8(""));
        LBLFire = new QLabel(VehicleStatusArea);
        LBLFire->setObjectName(QString::fromUtf8("LBLFire"));
        LBLFire->setGeometry(QRect(530, 140, 81, 81));
        LBLFire->setStyleSheet(QString::fromUtf8(""));
        LBLBCU = new QLabel(VehicleStatusArea);
        LBLBCU->setObjectName(QString::fromUtf8("LBLBCU"));
        LBLBCU->setGeometry(QRect(350, 140, 81, 81));
        LBLBCU->setStyleSheet(QString::fromUtf8(""));
        LBLACP = new QLabel(VehicleStatusArea);
        LBLACP->setObjectName(QString::fromUtf8("LBLACP"));
        LBLACP->setGeometry(QRect(620, 140, 81, 81));
        LBLACP->setStyleSheet(QString::fromUtf8(""));
        LBLTolopogy = new QLabel(VehicleStatusArea);
        LBLTolopogy->setObjectName(QString::fromUtf8("LBLTolopogy"));
        LBLTolopogy->setGeometry(QRect(710, 140, 81, 81));
        LBLTolopogy->setStyleSheet(QString::fromUtf8(""));
        LBLTCU = new QLabel(VehicleStatusArea);
        LBLTCU->setObjectName(QString::fromUtf8("LBLTCU"));
        LBLTCU->setGeometry(QRect(440, 140, 81, 81));
        LBLTCU->setStyleSheet(QString::fromUtf8(""));
        LBLNetV_2 = new QLabel(VehicleStatusArea);
        LBLNetV_2->setObjectName(QString::fromUtf8("LBLNetV_2"));
        LBLNetV_2->setGeometry(QRect(880, 60, 61, 31));
        LBLNetV_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLNetV_3 = new QLabel(VehicleStatusArea);
        LBLNetV_3->setObjectName(QString::fromUtf8("LBLNetV_3"));
        LBLNetV_3->setGeometry(QRect(820, 160, 61, 31));
        LBLNetV_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLNetV_4 = new QLabel(VehicleStatusArea);
        LBLNetV_4->setObjectName(QString::fromUtf8("LBLNetV_4"));
        LBLNetV_4->setGeometry(QRect(880, 160, 61, 31));
        LBLNetV_4->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLNetV_5 = new QLabel(VehicleStatusArea);
        LBLNetV_5->setObjectName(QString::fromUtf8("LBLNetV_5"));
        LBLNetV_5->setGeometry(QRect(940, 60, 71, 31));
        LBLNetV_5->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LBLNetV_6 = new QLabel(VehicleStatusArea);
        LBLNetV_6->setObjectName(QString::fromUtf8("LBLNetV_6"));
        LBLNetV_6->setGeometry(QRect(940, 160, 71, 31));
        LBLNetV_6->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        widget_2 = new QWidget(VehicleStatusArea);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(200, 0, 121, 250));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);"));
        Barlabel_left_24 = new QLabel(widget_2);
        Barlabel_left_24->setObjectName(QString::fromUtf8("Barlabel_left_24"));
        Barlabel_left_24->setGeometry(QRect(20, 50, 10, 91));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Barlabel_left_24->sizePolicy().hasHeightForWidth());
        Barlabel_left_24->setSizePolicy(sizePolicy);
        Barlabel_left_24->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);\n"
"border-color: rgb(255, 255, 255);"));
        label_84 = new QLabel(widget_2);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setGeometry(QRect(70, 90, 31, 16));
        label_84->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_84->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_85 = new QLabel(widget_2);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setGeometry(QRect(50, 73, 5, 1));
        label_85->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_86 = new QLabel(widget_2);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setGeometry(QRect(20, 232, 35, 1));
        label_86->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_87 = new QLabel(widget_2);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setGeometry(QRect(30, 51, 1, 181));
        label_87->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Barlabel_left_25 = new QLabel(widget_2);
        Barlabel_left_25->setObjectName(QString::fromUtf8("Barlabel_left_25"));
        Barlabel_left_25->setGeometry(QRect(40, 140, 10, 91));
        Barlabel_left_25->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_88 = new QLabel(widget_2);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(70, 135, 31, 16));
        label_88->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_88->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_89 = new QLabel(widget_2);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setGeometry(QRect(50, 185, 10, 1));
        label_89->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_90 = new QLabel(widget_2);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setGeometry(QRect(50, 51, 1, 181));
        label_90->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_91 = new QLabel(widget_2);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setGeometry(QRect(70, 180, 31, 16));
        label_91->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_91->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_92 = new QLabel(widget_2);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setGeometry(QRect(40, 51, 1, 181));
        label_92->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_93 = new QLabel(widget_2);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setGeometry(QRect(50, 120, 5, 1));
        label_93->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Barlabel_right_7 = new QLabel(widget_2);
        Barlabel_right_7->setObjectName(QString::fromUtf8("Barlabel_right_7"));
        Barlabel_right_7->setGeometry(QRect(41, 50, 9, 91));
        Barlabel_right_7->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(170, 255, 0);\n"
"border-color: rgb(0, 0, 0);"));
        label_94 = new QLabel(widget_2);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setGeometry(QRect(60, 220, 51, 20));
        label_94->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_94->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Barlabel_TraBrakevalue_4 = new QLabel(widget_2);
        Barlabel_TraBrakevalue_4->setObjectName(QString::fromUtf8("Barlabel_TraBrakevalue_4"));
        Barlabel_TraBrakevalue_4->setGeometry(QRect(31, 172, 9, 60));
        Barlabel_TraBrakevalue_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_95 = new QLabel(widget_2);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setGeometry(QRect(19, 51, 1, 181));
        label_95->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Barlabel_left_26 = new QLabel(widget_2);
        Barlabel_left_26->setObjectName(QString::fromUtf8("Barlabel_left_26"));
        Barlabel_left_26->setGeometry(QRect(20, 140, 10, 91));
        Barlabel_left_26->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        Barlabel_TraBrakeLine_4 = new QLabel(widget_2);
        Barlabel_TraBrakeLine_4->setObjectName(QString::fromUtf8("Barlabel_TraBrakeLine_4"));
        Barlabel_TraBrakeLine_4->setGeometry(QRect(20, 170, 40, 5));
        Barlabel_TraBrakeLine_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        label_96 = new QLabel(widget_2);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setGeometry(QRect(20, 50, 40, 1));
        label_96->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_97 = new QLabel(widget_2);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setGeometry(QRect(70, 50, 41, 16));
        label_97->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_97->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_98 = new QLabel(widget_2);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setGeometry(QRect(50, 95, 10, 1));
        label_98->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_99 = new QLabel(widget_2);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setGeometry(QRect(50, 140, 10, 1));
        label_99->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_100 = new QLabel(widget_2);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setGeometry(QRect(50, 163, 5, 1));
        label_100->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_101 = new QLabel(widget_2);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        label_101->setGeometry(QRect(50, 210, 5, 1));
        label_101->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LBLSpeed_4 = new QLabel(VehicleStatusArea);
        LBLSpeed_4->setObjectName(QString::fromUtf8("LBLSpeed_4"));
        LBLSpeed_4->setGeometry(QRect(150, 70, 45, 31));
        LBLSpeed_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:white;\n"
"font:20px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        LBLSpeed_4->setAlignment(Qt::AlignCenter);
        LBLSpeed_5 = new QLabel(VehicleStatusArea);
        LBLSpeed_5->setObjectName(QString::fromUtf8("LBLSpeed_5"));
        LBLSpeed_5->setGeometry(QRect(150, 160, 45, 31));
        LBLSpeed_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:white;\n"
"font:20px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        LBLSpeed_5->setAlignment(Qt::AlignCenter);
        LBLSpeed->raise();
        LBLNetV->raise();
        label->raise();
        label_2->raise();
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
        widget_2->raise();
        LBLSpeed_4->raise();
        LBLSpeed_5->raise();
        BTNHVAC->raise();
        BTNBCU->raise();
        BTNSIV->raise();
        BTNTCU->raise();
        BTNLineCircuitBreaker->raise();
        BTNFire->raise();
        BTNEDCU->raise();
        BTNACP->raise();
        BTNPIS->raise();
        BTNTolopogy->raise();
        Barlabel_left_26->raise();

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
        Barlabel_left_24->setText(QString());
        label_84->setText(QApplication::translate("VehicleStatusArea", "50%", 0, QApplication::UnicodeUTF8));
        label_85->setText(QString());
        label_86->setText(QString());
        label_87->setText(QString());
        Barlabel_left_25->setText(QString());
        label_88->setText(QApplication::translate("VehicleStatusArea", "0% ", 0, QApplication::UnicodeUTF8));
        label_89->setText(QString());
        label_90->setText(QString());
        label_91->setText(QApplication::translate("VehicleStatusArea", "50%", 0, QApplication::UnicodeUTF8));
        label_92->setText(QString());
        label_93->setText(QString());
        Barlabel_right_7->setText(QString());
        label_94->setText(QApplication::translate("VehicleStatusArea", "-100%", 0, QApplication::UnicodeUTF8));
        Barlabel_TraBrakevalue_4->setText(QString());
        label_95->setText(QString());
        Barlabel_left_26->setText(QString());
        Barlabel_TraBrakeLine_4->setText(QString());
        label_96->setText(QString());
        label_97->setText(QApplication::translate("VehicleStatusArea", "100%", 0, QApplication::UnicodeUTF8));
        label_98->setText(QString());
        label_99->setText(QString());
        label_100->setText(QString());
        label_101->setText(QString());
        LBLSpeed_4->setText(QApplication::translate("VehicleStatusArea", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        LBLSpeed_5->setText(QApplication::translate("VehicleStatusArea", "30\357\274\205", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleStatusArea: public Ui_VehicleStatusArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLESTATUSAREA_H
