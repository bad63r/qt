/****************************************************************************
** Meta object code from reading C++ file 'devicehandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ReAmped/devicehandler.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicehandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDeviceHandlerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDeviceHandlerENDCLASS = QtMocHelpers::stringData(
    "DeviceHandler",
    "QML.Element",
    "auto",
    "measuringChanged",
    "",
    "aliveChanged",
    "statsChanged",
    "startMeasurement",
    "stopMeasurement",
    "disconnectService",
    "moveForword",
    "moveBackword",
    "measuring",
    "alive",
    "hr",
    "maxHR",
    "minHR",
    "average",
    "time",
    "calories",
    "addressType",
    "AddressType",
    "PublicAddress",
    "RandomAddress"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDeviceHandlerENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[17];
    char stringdata4[1];
    char stringdata5[13];
    char stringdata6[13];
    char stringdata7[17];
    char stringdata8[16];
    char stringdata9[18];
    char stringdata10[12];
    char stringdata11[13];
    char stringdata12[10];
    char stringdata13[6];
    char stringdata14[3];
    char stringdata15[6];
    char stringdata16[6];
    char stringdata17[8];
    char stringdata18[5];
    char stringdata19[9];
    char stringdata20[12];
    char stringdata21[12];
    char stringdata22[14];
    char stringdata23[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDeviceHandlerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDeviceHandlerENDCLASS_t qt_meta_stringdata_CLASSDeviceHandlerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "DeviceHandler"
        QT_MOC_LITERAL(14, 11),  // "QML.Element"
        QT_MOC_LITERAL(26, 4),  // "auto"
        QT_MOC_LITERAL(31, 16),  // "measuringChanged"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 12),  // "aliveChanged"
        QT_MOC_LITERAL(62, 12),  // "statsChanged"
        QT_MOC_LITERAL(75, 16),  // "startMeasurement"
        QT_MOC_LITERAL(92, 15),  // "stopMeasurement"
        QT_MOC_LITERAL(108, 17),  // "disconnectService"
        QT_MOC_LITERAL(126, 11),  // "moveForword"
        QT_MOC_LITERAL(138, 12),  // "moveBackword"
        QT_MOC_LITERAL(151, 9),  // "measuring"
        QT_MOC_LITERAL(161, 5),  // "alive"
        QT_MOC_LITERAL(167, 2),  // "hr"
        QT_MOC_LITERAL(170, 5),  // "maxHR"
        QT_MOC_LITERAL(176, 5),  // "minHR"
        QT_MOC_LITERAL(182, 7),  // "average"
        QT_MOC_LITERAL(190, 4),  // "time"
        QT_MOC_LITERAL(195, 8),  // "calories"
        QT_MOC_LITERAL(204, 11),  // "addressType"
        QT_MOC_LITERAL(216, 11),  // "AddressType"
        QT_MOC_LITERAL(228, 13),  // "PublicAddress"
        QT_MOC_LITERAL(242, 13)   // "RandomAddress"
    },
    "DeviceHandler",
    "QML.Element",
    "auto",
    "measuringChanged",
    "",
    "aliveChanged",
    "statsChanged",
    "startMeasurement",
    "stopMeasurement",
    "disconnectService",
    "moveForword",
    "moveBackword",
    "measuring",
    "alive",
    "hr",
    "maxHR",
    "minHR",
    "average",
    "time",
    "calories",
    "addressType",
    "AddressType",
    "PublicAddress",
    "RandomAddress"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDeviceHandlerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       9,   72, // properties
       1,  117, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   64,    4, 0x06,   10 /* Public */,
       5,    0,   65,    4, 0x06,   11 /* Public */,
       6,    0,   66,    4, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   67,    4, 0x0a,   13 /* Public */,
       8,    0,   68,    4, 0x0a,   14 /* Public */,
       9,    0,   69,    4, 0x0a,   15 /* Public */,
      10,    0,   70,    4, 0x0a,   16 /* Public */,
      11,    0,   71,    4, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00015001, uint(0), 0,
      13, QMetaType::Bool, 0x00015001, uint(1), 0,
      14, QMetaType::Int, 0x00015001, uint(2), 0,
      15, QMetaType::Int, 0x00015001, uint(2), 0,
      16, QMetaType::Int, 0x00015001, uint(2), 0,
      17, QMetaType::Float, 0x00015001, uint(2), 0,
      18, QMetaType::Int, 0x00015001, uint(2), 0,
      19, QMetaType::Float, 0x00015001, uint(2), 0,
      20, 0x80000000 | 21, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      21,   21, 0x2,    2,  122,

 // enum data: key, value
      22, uint(DeviceHandler::AddressType::PublicAddress),
      23, uint(DeviceHandler::AddressType::RandomAddress),

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<BluetoothBaseClass::staticMetaObject>(),
    qt_meta_stringdata_CLASSDeviceHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDeviceHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'measuring'
        bool,
        // property 'alive'
        bool,
        // property 'hr'
        int,
        // property 'maxHR'
        int,
        // property 'minHR'
        int,
        // property 'average'
        float,
        // property 'time'
        int,
        // property 'calories'
        float,
        // property 'addressType'
        AddressType,
        // Q_OBJECT / Q_GADGET
        DeviceHandler,
        // method 'measuringChanged'
        void,
        // method 'aliveChanged'
        void,
        // method 'statsChanged'
        void,
        // method 'startMeasurement'
        void,
        // method 'stopMeasurement'
        void,
        // method 'disconnectService'
        void,
        // method 'moveForword'
        void,
        // method 'moveBackword'
        void
    >,
    nullptr
} };

void DeviceHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->measuringChanged(); break;
        case 1: _t->aliveChanged(); break;
        case 2: _t->statsChanged(); break;
        case 3: _t->startMeasurement(); break;
        case 4: _t->stopMeasurement(); break;
        case 5: _t->disconnectService(); break;
        case 6: _t->moveForword(); break;
        case 7: _t->moveBackword(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceHandler::*)();
            if (_t _q_method = &DeviceHandler::measuringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceHandler::*)();
            if (_t _q_method = &DeviceHandler::aliveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceHandler::*)();
            if (_t _q_method = &DeviceHandler::statsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeviceHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->measuring(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->alive(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->hr(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->maxHR(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->minHR(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->average(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->time(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->calories(); break;
        case 8: *reinterpret_cast< AddressType*>(_v) = _t->addressType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DeviceHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setAddressType(*reinterpret_cast< AddressType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *DeviceHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDeviceHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return BluetoothBaseClass::qt_metacast(_clname);
}

int DeviceHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BluetoothBaseClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DeviceHandler::measuringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeviceHandler::aliveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeviceHandler::statsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
