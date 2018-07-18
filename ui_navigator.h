/********************************************************************************
** Form generated from reading UI file 'navigator.ui'
**
** Created: Tue Jul 17 22:05:23 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATOR_H
#define UI_NAVIGATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Navigator
{
public:
    QPushButton *BTNEvent;
    QPushButton *BTNSetting;
    QPushButton *BTNMaintaince;
    QPushButton *BTNSpare1;
    QPushButton *BTNArriveB;
    QPushButton *BTNLeaveB;
    QPushButton *BTNSkipback;
    QPushButton *BTNSkipforward;
    QPushButton *BTNSpare2;
    QPushButton *BTNHome;

    void setupUi(QWidget *Navigator)
    {
        if (Navigator->objectName().isEmpty())
            Navigator->setObjectName(QString::fromUtf8("Navigator"));
        Navigator->resize(1024, 85);
        Navigator->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(170,170,170);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(170,170,170,255),stop:1 rgba(150,150,150,255));\n"
"}"));
        BTNEvent = new QPushButton(Navigator);
        BTNEvent->setObjectName(QString::fromUtf8("BTNEvent"));
        BTNEvent->setGeometry(QRect(10, 0, 100, 80));
        BTNEvent->setFocusPolicy(Qt::NoFocus);
        BTNSetting = new QPushButton(Navigator);
        BTNSetting->setObjectName(QString::fromUtf8("BTNSetting"));
        BTNSetting->setGeometry(QRect(112, 0, 100, 80));
        BTNSetting->setFocusPolicy(Qt::NoFocus);
        BTNMaintaince = new QPushButton(Navigator);
        BTNMaintaince->setObjectName(QString::fromUtf8("BTNMaintaince"));
        BTNMaintaince->setGeometry(QRect(214, 0, 100, 80));
        BTNMaintaince->setFocusPolicy(Qt::NoFocus);
        BTNSpare1 = new QPushButton(Navigator);
        BTNSpare1->setObjectName(QString::fromUtf8("BTNSpare1"));
        BTNSpare1->setGeometry(QRect(316, 0, 100, 80));
        BTNSpare1->setFocusPolicy(Qt::NoFocus);
        BTNSpare1->setStyleSheet(QString::fromUtf8(""));
        BTNArriveB = new QPushButton(Navigator);
        BTNArriveB->setObjectName(QString::fromUtf8("BTNArriveB"));
        BTNArriveB->setGeometry(QRect(418, 0, 100, 80));
        BTNArriveB->setFocusPolicy(Qt::NoFocus);
        BTNArriveB->setStyleSheet(QString::fromUtf8(""));
        BTNLeaveB = new QPushButton(Navigator);
        BTNLeaveB->setObjectName(QString::fromUtf8("BTNLeaveB"));
        BTNLeaveB->setGeometry(QRect(520, 0, 100, 80));
        BTNLeaveB->setFocusPolicy(Qt::NoFocus);
        BTNLeaveB->setStyleSheet(QString::fromUtf8(""));
        BTNSkipback = new QPushButton(Navigator);
        BTNSkipback->setObjectName(QString::fromUtf8("BTNSkipback"));
        BTNSkipback->setGeometry(QRect(622, 0, 100, 80));
        BTNSkipback->setFocusPolicy(Qt::NoFocus);
        BTNSkipback->setStyleSheet(QString::fromUtf8(""));
        BTNSkipforward = new QPushButton(Navigator);
        BTNSkipforward->setObjectName(QString::fromUtf8("BTNSkipforward"));
        BTNSkipforward->setGeometry(QRect(724, 0, 100, 80));
        BTNSkipforward->setFocusPolicy(Qt::NoFocus);
        BTNSkipforward->setStyleSheet(QString::fromUtf8(""));
        BTNSpare2 = new QPushButton(Navigator);
        BTNSpare2->setObjectName(QString::fromUtf8("BTNSpare2"));
        BTNSpare2->setGeometry(QRect(826, 0, 100, 80));
        BTNSpare2->setFocusPolicy(Qt::NoFocus);
        BTNSpare2->setStyleSheet(QString::fromUtf8(""));
        BTNHome = new QPushButton(Navigator);
        BTNHome->setObjectName(QString::fromUtf8("BTNHome"));
        BTNHome->setGeometry(QRect(928, 0, 91, 80));
        BTNHome->setFocusPolicy(Qt::NoFocus);
        BTNHome->setStyleSheet(QString::fromUtf8("border-image: url(:/images/image/Home.png);"));

        retranslateUi(Navigator);

        QMetaObject::connectSlotsByName(Navigator);
    } // setupUi

    void retranslateUi(QWidget *Navigator)
    {
        Navigator->setWindowTitle(QApplication::translate("Navigator", "Form", 0, QApplication::UnicodeUTF8));
        BTNEvent->setText(QApplication::translate("Navigator", "\344\272\213\344\273\266\n"
"\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        BTNSetting->setText(QApplication::translate("Navigator", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        BTNMaintaince->setText(QApplication::translate("Navigator", "\347\273\264\346\212\244", 0, QApplication::UnicodeUTF8));
        BTNSpare1->setText(QApplication::translate("Navigator", "\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        BTNArriveB->setText(QApplication::translate("Navigator", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        BTNLeaveB->setText(QString());
        BTNSkipback->setText(QString());
        BTNSkipforward->setText(QString());
        BTNSpare2->setText(QString());
        BTNHome->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Navigator: public Ui_Navigator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATOR_H
