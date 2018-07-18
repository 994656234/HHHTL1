/********************************************************************************
** Form generated from reading UI file 'header.ui'
**
** Created: Tue Jul 17 22:05:23 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADER_H
#define UI_HEADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Header
{
public:
    QLabel *LBLDateTime;
    QLabel *LBLServiceNum;
    QLabel *LBLPageName;
    QLabel *background;

    void setupUi(QWidget *Header)
    {
        if (Header->objectName().isEmpty())
            Header->setObjectName(QString::fromUtf8("Header"));
        Header->resize(1024, 62);
        Header->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(170,170,170);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"color:black;\n"
"font:24px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
"}"));
        LBLDateTime = new QLabel(Header);
        LBLDateTime->setObjectName(QString::fromUtf8("LBLDateTime"));
        LBLDateTime->setGeometry(QRect(723, 0, 301, 60));
        LBLDateTime->setStyleSheet(QString::fromUtf8(""));
        LBLDateTime->setAlignment(Qt::AlignCenter);
        LBLServiceNum = new QLabel(Header);
        LBLServiceNum->setObjectName(QString::fromUtf8("LBLServiceNum"));
        LBLServiceNum->setGeometry(QRect(0, 0, 201, 60));
        LBLServiceNum->setStyleSheet(QString::fromUtf8(""));
        LBLServiceNum->setAlignment(Qt::AlignCenter);
        LBLPageName = new QLabel(Header);
        LBLPageName->setObjectName(QString::fromUtf8("LBLPageName"));
        LBLPageName->setGeometry(QRect(373, 0, 251, 60));
        LBLPageName->setStyleSheet(QString::fromUtf8(""));
        LBLPageName->setAlignment(Qt::AlignCenter);
        background = new QLabel(Header);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1024, 60));
        background->setStyleSheet(QString::fromUtf8(""));
        background->setAlignment(Qt::AlignCenter);
        background->raise();
        LBLDateTime->raise();
        LBLServiceNum->raise();
        LBLPageName->raise();

        retranslateUi(Header);

        QMetaObject::connectSlotsByName(Header);
    } // setupUi

    void retranslateUi(QWidget *Header)
    {
        Header->setWindowTitle(QApplication::translate("Header", "Form", 0, QApplication::UnicodeUTF8));
        LBLDateTime->setText(QString());
        LBLServiceNum->setText(QString());
        LBLPageName->setText(QString());
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Header: public Ui_Header {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADER_H
