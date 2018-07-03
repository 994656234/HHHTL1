/********************************************************************************
** Form generated from reading UI file 'docontrol.ui'
**
** Created: Mon Jul 2 19:19:33 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCONTROL_H
#define UI_DOCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoControl
{
public:

    void setupUi(QWidget *DoControl)
    {
        if (DoControl->objectName().isEmpty())
            DoControl->setObjectName(QString::fromUtf8("DoControl"));
        DoControl->resize(788, 398);
        DoControl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        retranslateUi(DoControl);

        QMetaObject::connectSlotsByName(DoControl);
    } // setupUi

    void retranslateUi(QWidget *DoControl)
    {
        DoControl->setWindowTitle(QApplication::translate("DoControl", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DoControl: public Ui_DoControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCONTROL_H
