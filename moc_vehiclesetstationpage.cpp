/****************************************************************************
** Meta object code from reading C++ file 'vehiclesetstationpage.h'
**
** Created: Thu Jul 12 02:56:10 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclesetstationpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclesetstationpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleSetStationPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      61,   22,   22,   22, 0x08,
      86,   22,   22,   22, 0x08,
     116,   22,   22,   22, 0x08,
     134,   22,   22,   22, 0x08,
     155,   22,   22,   22, 0x08,
     173,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleSetStationPage[] = {
    "VehicleSetStationPage\0\0"
    "on_BTNChangeOrigin_Terminal_pressed()\0"
    "on_BTNTerminal_pressed()\0"
    "on_BTNOriginStation_pressed()\0"
    "on_BTN9_pressed()\0on_BTNHome_pressed()\0"
    "on_BTN1_pressed()\0buttonPushEvent()\0"
};

const QMetaObject VehicleSetStationPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleSetStationPage,
      qt_meta_data_VehicleSetStationPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleSetStationPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleSetStationPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleSetStationPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleSetStationPage))
        return static_cast<void*>(const_cast< VehicleSetStationPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleSetStationPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_BTNChangeOrigin_Terminal_pressed(); break;
        case 1: on_BTNTerminal_pressed(); break;
        case 2: on_BTNOriginStation_pressed(); break;
        case 3: on_BTN9_pressed(); break;
        case 4: on_BTNHome_pressed(); break;
        case 5: on_BTN1_pressed(); break;
        case 6: buttonPushEvent(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
