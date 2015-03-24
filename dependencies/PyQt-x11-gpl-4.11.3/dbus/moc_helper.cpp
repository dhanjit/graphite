/****************************************************************************
** Meta object code from reading C++ file 'helper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "helper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_pyqtDBusHelper_t {
    QByteArrayData data[6];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pyqtDBusHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pyqtDBusHelper_t qt_meta_stringdata_pyqtDBusHelper = {
    {
QT_MOC_LITERAL(0, 0, 14), // "pyqtDBusHelper"
QT_MOC_LITERAL(1, 15, 10), // "readSocket"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 2), // "fd"
QT_MOC_LITERAL(4, 30, 11), // "writeSocket"
QT_MOC_LITERAL(5, 42, 8) // "dispatch"

    },
    "pyqtDBusHelper\0readSocket\0\0fd\0writeSocket\0"
    "dispatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pyqtDBusHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void pyqtDBusHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pyqtDBusHelper *_t = static_cast<pyqtDBusHelper *>(_o);
        switch (_id) {
        case 0: _t->readSocket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->writeSocket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->dispatch(); break;
        default: ;
        }
    }
}

const QMetaObject pyqtDBusHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pyqtDBusHelper.data,
      qt_meta_data_pyqtDBusHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pyqtDBusHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pyqtDBusHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pyqtDBusHelper.stringdata))
        return static_cast<void*>(const_cast< pyqtDBusHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int pyqtDBusHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
