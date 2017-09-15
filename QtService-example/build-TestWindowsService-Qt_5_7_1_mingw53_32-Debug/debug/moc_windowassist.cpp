/****************************************************************************
** Meta object code from reading C++ file 'windowassist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TestWindowsService/windowassist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowassist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowAssist_t {
    QByteArrayData data[8];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowAssist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowAssist_t qt_meta_stringdata_WindowAssist = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WindowAssist"
QT_MOC_LITERAL(1, 13, 5), // "logon"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "logoff"
QT_MOC_LITERAL(4, 27, 6), // "locked"
QT_MOC_LITERAL(5, 34, 8), // "unlocked"
QT_MOC_LITERAL(6, 43, 5), // "sleep"
QT_MOC_LITERAL(7, 49, 5) // "awake"

    },
    "WindowAssist\0logon\0\0logoff\0locked\0"
    "unlocked\0sleep\0awake"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowAssist[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WindowAssist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowAssist *_t = static_cast<WindowAssist *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logon(); break;
        case 1: _t->logoff(); break;
        case 2: _t->locked(); break;
        case 3: _t->unlocked(); break;
        case 4: _t->sleep(); break;
        case 5: _t->awake(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WindowAssist::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAssist::logon)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WindowAssist::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAssist::logoff)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WindowAssist::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAssist::locked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WindowAssist::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAssist::unlocked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WindowAssist::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAssist::sleep)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WindowAssist::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAssist::awake)) {
                *result = 5;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WindowAssist::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WindowAssist.data,
      qt_meta_data_WindowAssist,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WindowAssist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowAssist::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAssist.stringdata0))
        return static_cast<void*>(const_cast< WindowAssist*>(this));
    return QObject::qt_metacast(_clname);
}

int WindowAssist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WindowAssist::logon()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WindowAssist::logoff()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WindowAssist::locked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void WindowAssist::unlocked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void WindowAssist::sleep()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void WindowAssist::awake()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
