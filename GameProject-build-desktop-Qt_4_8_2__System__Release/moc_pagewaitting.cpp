/****************************************************************************
** Meta object code from reading C++ file 'pagewaitting.h'
**
** Created: Wed Jun 3 07:15:13 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GameProject/pagewaitting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagewaitting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageWaitting[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   32,   32,   32, 0x08,
      33,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageWaitting[] = {
    "PageWaitting\0nextPagePassWord()\0\0"
    "DiamicImage()\0"
};

void PageWaitting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageWaitting *_t = static_cast<PageWaitting *>(_o);
        switch (_id) {
        case 0: _t->nextPagePassWord(); break;
        case 1: _t->DiamicImage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PageWaitting::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageWaitting::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PageWaitting,
      qt_meta_data_PageWaitting, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageWaitting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageWaitting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageWaitting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageWaitting))
        return static_cast<void*>(const_cast< PageWaitting*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PageWaitting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE