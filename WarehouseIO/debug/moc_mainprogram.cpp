/****************************************************************************
** Meta object code from reading C++ file 'mainprogram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainprogram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainprogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainProgram_t {
    QByteArrayData data[7];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainProgram_t qt_meta_stringdata_MainProgram = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainProgram"
QT_MOC_LITERAL(1, 12, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "on_GenerateReport_clicked"
QT_MOC_LITERAL(4, 63, 22), // "on_Filebrowser_clicked"
QT_MOC_LITERAL(5, 86, 29), // "on_ReportFileContents_clicked"
QT_MOC_LITERAL(6, 116, 15) // "on_Exit_clicked"

    },
    "MainProgram\0on_pushButton_3_clicked\0"
    "\0on_GenerateReport_clicked\0"
    "on_Filebrowser_clicked\0"
    "on_ReportFileContents_clicked\0"
    "on_Exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainProgram[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainProgram *_t = static_cast<MainProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->on_GenerateReport_clicked(); break;
        case 2: _t->on_Filebrowser_clicked(); break;
        case 3: _t->on_ReportFileContents_clicked(); break;
        case 4: _t->on_Exit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainProgram::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainProgram.data,
      qt_meta_data_MainProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainProgram.stringdata0))
        return static_cast<void*>(const_cast< MainProgram*>(this));
    return QDialog::qt_metacast(_clname);
}

int MainProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
