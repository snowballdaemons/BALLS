/****************************************************************************
** Meta object code from reading C++ file 'sendcoinsentry.h'
**
** Created: Thu Dec 11 19:57:00 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendcoinsentry.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcoinsentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendCoinsEntry[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   44,   50,   50, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   74,   50,   50, 0x0a,
      82,   50,   50,   50, 0x0a,
      90,   50,   50,   50, 0x08,
     116,  146,   50,   50, 0x08,
     154,   50,   50,   50, 0x08,
     185,   50,   50,   50, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SendCoinsEntry[] = {
    "SendCoinsEntry\0removeEntry(SendCoinsEntry*)\0"
    "entry\0\0setRemoveEnabled(bool)\0enabled\0"
    "clear()\0on_deleteButton_clicked()\0"
    "on_payTo_textChanged(QString)\0address\0"
    "on_addressBookButton_clicked()\0"
    "on_pasteButton_clicked()\0"
};

void SendCoinsEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SendCoinsEntry *_t = static_cast<SendCoinsEntry *>(_o);
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< SendCoinsEntry*(*)>(_a[1]))); break;
        case 1: _t->setRemoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_payTo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_addressBookButton_clicked(); break;
        case 6: _t->on_pasteButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SendCoinsEntry::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SendCoinsEntry::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SendCoinsEntry,
      qt_meta_data_SendCoinsEntry, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendCoinsEntry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendCoinsEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendCoinsEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendCoinsEntry))
        return static_cast<void*>(const_cast< SendCoinsEntry*>(this));
    return QFrame::qt_metacast(_clname);
}

int SendCoinsEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SendCoinsEntry::removeEntry(SendCoinsEntry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
