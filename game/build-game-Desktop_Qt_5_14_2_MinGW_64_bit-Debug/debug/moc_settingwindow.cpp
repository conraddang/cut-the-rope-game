/****************************************************************************
** Meta object code from reading C++ file 'settingwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../game/settingwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingWindow_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingWindow_t qt_meta_stringdata_SettingWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SettingWindow"
QT_MOC_LITERAL(1, 14, 21), // "on_BackButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 26), // "on_sliderMusic_sliderMoved"
QT_MOC_LITERAL(4, 64, 8), // "position"
QT_MOC_LITERAL(5, 73, 26) // "on_sliderSound_sliderMoved"

    },
    "SettingWindow\0on_BackButton_clicked\0"
    "\0on_sliderMusic_sliderMoved\0position\0"
    "on_sliderSound_sliderMoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void SettingWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BackButton_clicked(); break;
        case 1: _t->on_sliderMusic_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_sliderSound_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SettingWindow.data,
    qt_meta_data_SettingWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "audio"))
        return static_cast< audio*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SettingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
