/****************************************************************************
** Meta object code from reading C++ file 'window_primary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Terrain_Generator/window_primary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window_primary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Window_Primary_t {
    QByteArrayData data[12];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window_Primary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window_Primary_t qt_meta_stringdata_Window_Primary = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Window_Primary"
QT_MOC_LITERAL(1, 15, 21), // "on_btnConfirm_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "on_btnContinue_clicked"
QT_MOC_LITERAL(4, 61, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(5, 80, 23), // "on_btnImageLoad_clicked"
QT_MOC_LITERAL(6, 104, 33), // "on_toolBtnOutputDirectory_cli..."
QT_MOC_LITERAL(7, 138, 29), // "on_btnBackToSelection_clicked"
QT_MOC_LITERAL(8, 168, 35), // "on_btnConfirmOnConfirmation_c..."
QT_MOC_LITERAL(9, 204, 32), // "on_btnBackToConfirmation_clicked"
QT_MOC_LITERAL(10, 237, 21), // "on_btnRestart_clicked"
QT_MOC_LITERAL(11, 259, 20) // "on_btnFinish_clicked"

    },
    "Window_Primary\0on_btnConfirm_clicked\0"
    "\0on_btnContinue_clicked\0on_btnBack_clicked\0"
    "on_btnImageLoad_clicked\0"
    "on_toolBtnOutputDirectory_clicked\0"
    "on_btnBackToSelection_clicked\0"
    "on_btnConfirmOnConfirmation_clicked\0"
    "on_btnBackToConfirmation_clicked\0"
    "on_btnRestart_clicked\0on_btnFinish_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window_Primary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Window_Primary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Window_Primary *_t = static_cast<Window_Primary *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnConfirm_clicked(); break;
        case 1: _t->on_btnContinue_clicked(); break;
        case 2: _t->on_btnBack_clicked(); break;
        case 3: _t->on_btnImageLoad_clicked(); break;
        case 4: _t->on_toolBtnOutputDirectory_clicked(); break;
        case 5: _t->on_btnBackToSelection_clicked(); break;
        case 6: _t->on_btnConfirmOnConfirmation_clicked(); break;
        case 7: _t->on_btnBackToConfirmation_clicked(); break;
        case 8: _t->on_btnRestart_clicked(); break;
        case 9: _t->on_btnFinish_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Window_Primary::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Window_Primary.data,
      qt_meta_data_Window_Primary,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Window_Primary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window_Primary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Window_Primary.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Window_Primary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
