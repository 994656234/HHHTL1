/****************************************************************************
** Meta object code from reading C++ file 'vehiclesetpage.h'
**
** Created: Thu Jul 19 20:41:42 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclesetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclesetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleSetPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      37,   15,   15,   15, 0x08,
      67,   15,   15,   15, 0x08,
      93,   15,   15,   15, 0x08,
     124,   15,   15,   15, 0x08,
     157,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleSetPage[] = {
    "VehicleSetPage\0\0on_BTNHome_pressed()\0"
    "on_BTN_setBrakeTest_pressed()\0"
    "on_BTN_setLight_pressed()\0"
    "on_BTN_setBrakeParam_pressed()\0"
    "on_BTN_setAirCondition_pressed()\0"
    "on_BTN_queryStation_pressed()\0"
};

const QMetaObject VehicleSetPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleSetPage,
      qt_meta_data_VehicleSetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleSetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleSetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleSetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleSetPage))
        return static_cast<void*>(const_cast< VehicleSetPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleSetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_BTNHome_pressed(); break;
        case 1: on_BTN_setBrakeTest_pressed(); break;
        case 2: on_BTN_setLight_pressed(); break;
        case 3: on_BTN_setBrakeParam_pressed(); break;
        case 4: on_BTN_setAirCondition_pressed(); break;
        case 5: on_BTN_queryStation_pressed(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
