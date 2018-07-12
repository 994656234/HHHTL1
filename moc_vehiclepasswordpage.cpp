/****************************************************************************
** Meta object code from reading C++ file 'vehiclepasswordpage.h'
**
** Created: Thu Jul 12 02:55:51 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclepasswordpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclepasswordpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehiclePasswordPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      46,   20,   20,   20, 0x08,
      68,   20,   20,   20, 0x08,
      88,   20,   20,   20, 0x08,
     109,   20,   20,   20, 0x08,
     130,   20,   20,   20, 0x08,
     151,   20,   20,   20, 0x08,
     172,   20,   20,   20, 0x08,
     193,   20,   20,   20, 0x08,
     214,   20,   20,   20, 0x08,
     235,   20,   20,   20, 0x08,
     256,   20,   20,   20, 0x08,
     277,   20,   20,   20, 0x08,
     298,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehiclePasswordPage[] = {
    "VehiclePasswordPage\0\0on_BTNNumClear_pressed()\0"
    "on_BTN1back_clicked()\0on_BTN9OK_clicked()\0"
    "on_BTNNumC_clicked()\0on_BTNNum0_clicked()\0"
    "on_BTNNum9_clicked()\0on_BTNNum8_clicked()\0"
    "on_BTNNum7_clicked()\0on_BTNNum6_clicked()\0"
    "on_BTNNum5_clicked()\0on_BTNNum4_clicked()\0"
    "on_BTNNum3_clicked()\0on_BTNNum2_clicked()\0"
    "on_BTNNum1_clicked()\0"
};

const QMetaObject VehiclePasswordPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehiclePasswordPage,
      qt_meta_data_VehiclePasswordPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehiclePasswordPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehiclePasswordPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehiclePasswordPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehiclePasswordPage))
        return static_cast<void*>(const_cast< VehiclePasswordPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehiclePasswordPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_BTNNumClear_pressed(); break;
        case 1: on_BTN1back_clicked(); break;
        case 2: on_BTN9OK_clicked(); break;
        case 3: on_BTNNumC_clicked(); break;
        case 4: on_BTNNum0_clicked(); break;
        case 5: on_BTNNum9_clicked(); break;
        case 6: on_BTNNum8_clicked(); break;
        case 7: on_BTNNum7_clicked(); break;
        case 8: on_BTNNum6_clicked(); break;
        case 9: on_BTNNum5_clicked(); break;
        case 10: on_BTNNum4_clicked(); break;
        case 11: on_BTNNum3_clicked(); break;
        case 12: on_BTNNum2_clicked(); break;
        case 13: on_BTNNum1_clicked(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
