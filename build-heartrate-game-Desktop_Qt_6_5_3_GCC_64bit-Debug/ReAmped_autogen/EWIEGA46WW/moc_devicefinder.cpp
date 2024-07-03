/****************************************************************************
** Meta object code from reading C++ file 'devicefinder.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ReAmped/devicefinder.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicefinder.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDeviceFinderENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDeviceFinderENDCLASS = QtMocHelpers::stringData(
    "DeviceFinder",
    "QML.Element",
    "auto",
    "QML.Creatable",
    "false",
    "QML.UncreatableReason",
    "This class is not intended to be created directly",
    "scanningChanged",
    "",
    "devicesChanged",
    "startSearch",
    "connectToService",
    "address",
    "addDevice",
    "QBluetoothDeviceInfo",
    "device",
    "scanError",
    "QBluetoothDeviceDiscoveryAgent::Error",
    "error",
    "scanFinished",
    "scanning",
    "devices"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDeviceFinderENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[14];
    char stringdata4[6];
    char stringdata5[22];
    char stringdata6[50];
    char stringdata7[16];
    char stringdata8[1];
    char stringdata9[15];
    char stringdata10[12];
    char stringdata11[17];
    char stringdata12[8];
    char stringdata13[10];
    char stringdata14[21];
    char stringdata15[7];
    char stringdata16[10];
    char stringdata17[38];
    char stringdata18[6];
    char stringdata19[13];
    char stringdata20[9];
    char stringdata21[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDeviceFinderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDeviceFinderENDCLASS_t qt_meta_stringdata_CLASSDeviceFinderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "DeviceFinder"
        QT_MOC_LITERAL(13, 11),  // "QML.Element"
        QT_MOC_LITERAL(25, 4),  // "auto"
        QT_MOC_LITERAL(30, 13),  // "QML.Creatable"
        QT_MOC_LITERAL(44, 5),  // "false"
        QT_MOC_LITERAL(50, 21),  // "QML.UncreatableReason"
        QT_MOC_LITERAL(72, 49),  // "This class is not intended to..."
        QT_MOC_LITERAL(122, 15),  // "scanningChanged"
        QT_MOC_LITERAL(138, 0),  // ""
        QT_MOC_LITERAL(139, 14),  // "devicesChanged"
        QT_MOC_LITERAL(154, 11),  // "startSearch"
        QT_MOC_LITERAL(166, 16),  // "connectToService"
        QT_MOC_LITERAL(183, 7),  // "address"
        QT_MOC_LITERAL(191, 9),  // "addDevice"
        QT_MOC_LITERAL(201, 20),  // "QBluetoothDeviceInfo"
        QT_MOC_LITERAL(222, 6),  // "device"
        QT_MOC_LITERAL(229, 9),  // "scanError"
        QT_MOC_LITERAL(239, 37),  // "QBluetoothDeviceDiscoveryAgen..."
        QT_MOC_LITERAL(277, 5),  // "error"
        QT_MOC_LITERAL(283, 12),  // "scanFinished"
        QT_MOC_LITERAL(296, 8),  // "scanning"
        QT_MOC_LITERAL(305, 7)   // "devices"
    },
    "DeviceFinder",
    "QML.Element",
    "auto",
    "QML.Creatable",
    "false",
    "QML.UncreatableReason",
    "This class is not intended to be created directly",
    "scanningChanged",
    "",
    "devicesChanged",
    "startSearch",
    "connectToService",
    "address",
    "addDevice",
    "QBluetoothDeviceInfo",
    "device",
    "scanError",
    "QBluetoothDeviceDiscoveryAgent::Error",
    "error",
    "scanFinished",
    "scanning",
    "devices"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDeviceFinderENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       3,   14, // classinfo
       7,   20, // methods
       2,   75, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   62,    8, 0x06,    3 /* Public */,
       9,    0,   63,    8, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   64,    8, 0x0a,    5 /* Public */,
      11,    1,   65,    8, 0x0a,    6 /* Public */,
      13,    1,   68,    8, 0x08,    8 /* Private */,
      16,    1,   71,    8, 0x08,   10 /* Private */,
      19,    0,   74,    8, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00015001, uint(0), 0,
      21, QMetaType::QVariant, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceFinder::staticMetaObject = { {
    QMetaObject::SuperData::link<BluetoothBaseClass::staticMetaObject>(),
    qt_meta_stringdata_CLASSDeviceFinderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDeviceFinderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'scanning'
        bool,
        // property 'devices'
        QVariant,
        // Q_OBJECT / Q_GADGET
        DeviceFinder,
        // method 'scanningChanged'
        void,
        // method 'devicesChanged'
        void,
        // method 'startSearch'
        void,
        // method 'connectToService'
        void,
        const QString &,
        // method 'addDevice'
        void,
        const QBluetoothDeviceInfo &,
        // method 'scanError'
        void,
        QBluetoothDeviceDiscoveryAgent::Error,
        // method 'scanFinished'
        void
    >,
    nullptr
} };

void DeviceFinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceFinder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scanningChanged(); break;
        case 1: _t->devicesChanged(); break;
        case 2: _t->startSearch(); break;
        case 3: _t->connectToService((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->addDevice((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo>>(_a[1]))); break;
        case 5: _t->scanError((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceDiscoveryAgent::Error>>(_a[1]))); break;
        case 6: _t->scanFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceFinder::*)();
            if (_t _q_method = &DeviceFinder::scanningChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceFinder::*)();
            if (_t _q_method = &DeviceFinder::devicesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeviceFinder *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->scanning(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->devices(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DeviceFinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceFinder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDeviceFinderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return BluetoothBaseClass::qt_metacast(_clname);
}

int DeviceFinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BluetoothBaseClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DeviceFinder::scanningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeviceFinder::devicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
