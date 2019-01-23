/****************************************************************************
** Meta object code from reading C++ file 'MySeekBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MySeekBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MySeekBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MySeekBar_t {
    QByteArrayData data[8];
    char stringdata[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MySeekBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MySeekBar_t qt_meta_stringdata_MySeekBar = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 13),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 3),
QT_MOC_LITERAL(4, 29, 13),
QT_MOC_LITERAL(5, 43, 8),
QT_MOC_LITERAL(6, 52, 14),
QT_MOC_LITERAL(7, 67, 3)
    },
    "MySeekBar\0onseekFoucsed\0\0yes\0onseekClicked\0"
    "progress\0onseekTracking\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MySeekBar[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    2,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int, QMetaType::Bool,    3,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Int, QMetaType::Int, QMetaType::QPoint,    5,    7,

       0        // eod
};

void MySeekBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MySeekBar *_t = static_cast<MySeekBar *>(_o);
        switch (_id) {
        case 0: { int _r = _t->onseekFoucsed((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->onseekClicked((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->onseekTracking((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject MySeekBar::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MySeekBar.data,
      qt_meta_data_MySeekBar,  qt_static_metacall, 0, 0}
};


const QMetaObject *MySeekBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MySeekBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MySeekBar.stringdata))
        return static_cast<void*>(const_cast< MySeekBar*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MySeekBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
