/********************************************************************************
** Form generated from reading UI file 'vehiclemthistoryfaultpage.ui'
**
** Created: Tue Jun 26 22:01:21 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEMTHISTORYFAULTPAGE_H
#define UI_VEHICLEMTHISTORYFAULTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleMTHistoryFaultPage
{
public:

    void setupUi(QWidget *VehicleMTHistoryFaultPage)
    {
        if (VehicleMTHistoryFaultPage->objectName().isEmpty())
            VehicleMTHistoryFaultPage->setObjectName(QString::fromUtf8("VehicleMTHistoryFaultPage"));
        VehicleMTHistoryFaultPage->resize(1024, 706);
        VehicleMTHistoryFaultPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);"));

        retranslateUi(VehicleMTHistoryFaultPage);

        QMetaObject::connectSlotsByName(VehicleMTHistoryFaultPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleMTHistoryFaultPage)
    {
        VehicleMTHistoryFaultPage->setWindowTitle(QApplication::translate("VehicleMTHistoryFaultPage", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleMTHistoryFaultPage: public Ui_VehicleMTHistoryFaultPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMTHISTORYFAULTPAGE_H
