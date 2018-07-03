/********************************************************************************
** Form generated from reading UI file 'vehicleinformationarea.ui'
**
** Created: Tue Jun 26 22:01:21 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEINFORMATIONAREA_H
#define UI_VEHICLEINFORMATIONAREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleInformationArea
{
public:

    void setupUi(QWidget *VehicleInformationArea)
    {
        if (VehicleInformationArea->objectName().isEmpty())
            VehicleInformationArea->setObjectName(QString::fromUtf8("VehicleInformationArea"));
        VehicleInformationArea->resize(1024, 71);
        VehicleInformationArea->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(0,0,50);\n"
"}\n"
"QLabel\n"
"{\n"
"color:white;\n"
"}\n"
""));

        retranslateUi(VehicleInformationArea);

        QMetaObject::connectSlotsByName(VehicleInformationArea);
    } // setupUi

    void retranslateUi(QWidget *VehicleInformationArea)
    {
        VehicleInformationArea->setWindowTitle(QApplication::translate("VehicleInformationArea", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleInformationArea: public Ui_VehicleInformationArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINFORMATIONAREA_H
