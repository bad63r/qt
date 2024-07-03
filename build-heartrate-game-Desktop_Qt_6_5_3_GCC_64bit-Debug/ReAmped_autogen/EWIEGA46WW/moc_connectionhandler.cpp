/****************************************************************************
** Meta object code from reading C++ file 'connectionhandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ReAmped/connectionhandler.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSConnectionHandlerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSConnectionHandlerENDCLASS = QtMocHelpers::stringData(
    "ConnectionHandler",
    "QML.Element",
    "auto",
    "deviceChanged",
    "",
    "hostModeChanged",
    "QBluetoothLocalDevice::HostMode",
    "mode",
    "alive",
    "name",
    "address",
    "requiresAddressType"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSConnectionHandlerENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[18];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[14];
    char stringdata4[1];
    char stringdata5[16];
    char stringdata6[32];
    char stringdata7[5];
    char stringdata8[6];
    char stringdata9[5];
    char stringdata10[8];
    char stringdata11[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSConnectionHandlerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSConnectionHandlerENDCLASS_t qt_meta_stringdata_CLASSConnectionHandlerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "ConnectionHandler"
        QT_MOC_LITERAL(18, 11),  // "QML.Element"
        QT_MOC_LITERAL(30, 4),  // "auto"
        QT_MOC_LITERAL(35, 13),  // "deviceChanged"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 15),  // "hostModeChanged"
        QT_MOC_LITERAL(66, 31),  // "QBluetoothLocalDevice::HostMode"
        QT_MOC_LITERAL(98, 4),  // "mode"
        QT_MOC_LITERAL(103, 5),  // "alive"
        QT_MOC_LITERAL(109, 4),  // "name"
        QT_MOC_LITERAL(114, 7),  // "address"
        QT_MOC_LITERAL(122, 19)   // "requiresAddressType"
    },
    "ConnectionHandler",
    "QML.Element",
    "auto",
    "deviceChanged",
    "",
    "hostModeChanged",
    "QBluetoothLocalDevice::HostMode",
    "mode",
    "alive",
    "name",
    "address",
    "requiresAddressType"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSConnectionHandlerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   28,    4, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   29,    4, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00015001, uint(0), 0,
       9, QMetaType::QString, 0x00015001, uint(0), 0,
      10, QMetaType::QString, 0x00015001, uint(0), 0,
      11, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ConnectionHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSConnectionHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSConnectionHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'alive'
        bool,
        // property 'name'
        QString,
        // property 'address'
        QString,
        // property 'requiresAddressType'
        bool,
        // Q_OBJECT / Q_GADGET
        ConnectionHandler,
        // method 'deviceChanged'
        void,
        // method 'hostModeChanged'
        void,
        QBluetoothLocalDevice::HostMode
    >,
    nullptr
} };

void ConnectionHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectionHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deviceChanged(); break;
        case 1: _t->hostModeChanged((*reinterpret_cast< std::add_pointer_t<QBluetoothLocalDevice::HostMode>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothLocalDevice::HostMode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConnectionHandler::*)();
            if (_t _q_method = &ConnectionHandler::deviceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ConnectionHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->alive(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->address(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->requiresAddressType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ConnectionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSConnectionHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConnectionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ConnectionHandler::deviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
