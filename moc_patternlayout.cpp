/****************************************************************************
** Meta object code from reading C++ file 'patternlayout.h'
**
** Created: Tue Jul 17 22:06:02 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "log4qt/patternlayout.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patternlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Log4Qt__PatternLayout[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       1,   17, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      30,   22, 0x0a095103,

 // enums: name, flags, count, data
      48, 0x0,    2,   21,

 // enum data: key, value
      66, uint(Log4Qt::PatternLayout::DEFAULT_CONVERSION_PATTERN),
      93, uint(Log4Qt::PatternLayout::TTCC_CONVERSION_PATTERN),

       0        // eod
};

static const char qt_meta_stringdata_Log4Qt__PatternLayout[] = {
    "Log4Qt::PatternLayout\0QString\0"
    "conversionPattern\0ConversionPattern\0"
    "DEFAULT_CONVERSION_PATTERN\0"
    "TTCC_CONVERSION_PATTERN\0"
};

const QMetaObject Log4Qt::PatternLayout::staticMetaObject = {
    { &Layout::staticMetaObject, qt_meta_stringdata_Log4Qt__PatternLayout,
      qt_meta_data_Log4Qt__PatternLayout, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Log4Qt::PatternLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Log4Qt::PatternLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Log4Qt::PatternLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Log4Qt__PatternLayout))
        return static_cast<void*>(const_cast< PatternLayout*>(this));
    return Layout::qt_metacast(_clname);
}

int Log4Qt::PatternLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Layout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = conversionPattern(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setConversionPattern(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
