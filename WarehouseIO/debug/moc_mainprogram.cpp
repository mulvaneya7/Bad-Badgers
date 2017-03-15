/****************************************************************************
** Meta object code from reading C++ file 'mainprogram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainprogram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainprogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainProgram_t {
    QByteArrayData data[13];
    char stringdata0[277];
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
QT_MOC_LITERAL(4, 63, 26), // "on_DisplayOption_activated"
QT_MOC_LITERAL(5, 90, 5), // "index"
QT_MOC_LITERAL(6, 96, 29), // "on_ReportFileContents_clicked"
QT_MOC_LITERAL(7, 126, 22), // "on_Filebrowser_clicked"
QT_MOC_LITERAL(8, 149, 27), // "on_RefreshItemSales_clicked"
QT_MOC_LITERAL(9, 177, 15), // "on_Exit_clicked"
QT_MOC_LITERAL(10, 193, 34), // "on_MemberSearchInput_returnPr..."
QT_MOC_LITERAL(11, 228, 27), // "on_ChangeMemberShip_clicked"
QT_MOC_LITERAL(12, 256, 20) // "on_AddMember_clicked"

    },
    "MainProgram\0on_pushButton_3_clicked\0"
    "\0on_GenerateReport_clicked\0"
    "on_DisplayOption_activated\0index\0"
    "on_ReportFileContents_clicked\0"
    "on_Filebrowser_clicked\0"
    "on_RefreshItemSales_clicked\0on_Exit_clicked\0"
    "on_MemberSearchInput_returnPressed\0"
    "on_ChangeMemberShip_clicked\0"
    "on_AddMember_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainProgram[] = {

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
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
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
        case 2: _t->on_DisplayOption_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_ReportFileContents_clicked(); break;
        case 4: _t->on_Filebrowser_clicked(); break;
        case 5: _t->on_RefreshItemSales_clicked(); break;
        case 6: _t->on_Exit_clicked(); break;
        case 7: _t->on_MemberSearchInput_returnPressed(); break;
        case 8: _t->on_ChangeMemberShip_clicked(); break;
        case 9: _t->on_AddMember_clicked(); break;
        default: ;
        }
    }
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
QT_END_MOC_NAMESPACE
