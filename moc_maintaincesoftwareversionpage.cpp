/****************************************************************************
** Meta object code from reading C++ file 'maintaincesoftwareversionpage.h'
**
** Created: Thu Jul 19 19:26:16 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaincesoftwareversionpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaincesoftwareversionpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceSoftwareVersionPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,
      49,   30,   30,   30, 0x08,
      67,   30,   30,   30, 0x08,
      85,   30,   30,   30, 0x08,
     106,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceSoftwareVersionPage[] = {
    "MaintainceSoftwareVersionPage\0\0"
    "on_BTN4_pressed()\0on_BTN3_pressed()\0"
    "on_BTN2_pressed()\0on_BTNHome_pressed()\0"
    "on_BTN1_pressed()\0"
};

const QMetaObject MaintainceSoftwareVersionPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceSoftwareVersionPage,
      qt_meta_data_MaintainceSoftwareVersionPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceSoftwareVersionPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceSoftwareVersionPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceSoftwareVersionPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceSoftwareVersionPage))
        return static_cast<void*>(const_cast< MaintainceSoftwareVersionPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceSoftwareVersionPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_BTN4_pressed(); break;
        case 1: on_BTN3_pressed(); break;
        case 2: on_BTN2_pressed(); break;
        case 3: on_BTNHome_pressed(); break;
        case 4: on_BTN1_pressed(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
