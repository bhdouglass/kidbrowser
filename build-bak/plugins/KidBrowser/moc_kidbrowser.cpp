/****************************************************************************
** Meta object code from reading C++ file 'kidbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/KidBrowser/kidbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kidbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KidBrowser_t {
    QByteArrayData data[10];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KidBrowser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KidBrowser_t qt_meta_stringdata_KidBrowser = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KidBrowser"
QT_MOC_LITERAL(1, 11, 13), // "isBlacklisted"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "domain"
QT_MOC_LITERAL(4, 33, 13), // "isWhitelisted"
QT_MOC_LITERAL(5, 47, 12), // "addBlacklist"
QT_MOC_LITERAL(6, 60, 12), // "addWhitelist"
QT_MOC_LITERAL(7, 73, 10), // "addHistory"
QT_MOC_LITERAL(8, 84, 3), // "url"
QT_MOC_LITERAL(9, 88, 5) // "title"

    },
    "KidBrowser\0isBlacklisted\0\0domain\0"
    "isWhitelisted\0addBlacklist\0addWhitelist\0"
    "addHistory\0url\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KidBrowser[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x02 /* Public */,
       4,    1,   42,    2, 0x02 /* Public */,
       5,    1,   45,    2, 0x02 /* Public */,
       6,    1,   48,    2, 0x02 /* Public */,
       7,    2,   51,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

       0        // eod
};

void KidBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KidBrowser *_t = static_cast<KidBrowser *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->isBlacklisted((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->isWhitelisted((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->addBlacklist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addWhitelist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->addHistory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject KidBrowser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KidBrowser.data,
      qt_meta_data_KidBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KidBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KidBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KidBrowser.stringdata))
        return static_cast<void*>(const_cast< KidBrowser*>(this));
    return QObject::qt_metacast(_clname);
}

int KidBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
