/****************************************************************************
** Meta object code from reading C++ file 'bullet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FeelsDefenseMan/bullet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bullet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bullet_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bullet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bullet_t qt_meta_stringdata_bullet = {
    {
QT_MOC_LITERAL(0, 0, 6), // "bullet"
QT_MOC_LITERAL(1, 7, 4), // "move"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 11), // "getMaxRange"
QT_MOC_LITERAL(4, 25, 20), // "getDistanceTravelled"
QT_MOC_LITERAL(5, 46, 11), // "setMaxRange"
QT_MOC_LITERAL(6, 58, 5), // "range"
QT_MOC_LITERAL(7, 64, 20), // "setDistanceTravelled"
QT_MOC_LITERAL(8, 85, 8) // "distance"

    },
    "bullet\0move\0\0getMaxRange\0getDistanceTravelled\0"
    "setMaxRange\0range\0setDistanceTravelled\0"
    "distance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bullet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

void bullet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        bullet *_t = static_cast<bullet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->move(); break;
        case 1: { double _r = _t->getMaxRange();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 2: { double _r = _t->getDistanceTravelled();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 3: _t->setMaxRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setDistanceTravelled((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject bullet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_bullet.data,
      qt_meta_data_bullet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bullet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bullet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bullet.stringdata0))
        return static_cast<void*>(const_cast< bullet*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< bullet*>(this));
    return QObject::qt_metacast(_clname);
}

int bullet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
