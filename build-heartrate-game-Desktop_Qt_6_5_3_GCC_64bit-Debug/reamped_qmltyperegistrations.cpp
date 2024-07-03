/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <connectionhandler.h>
#include <devicefinder.h>
#include <devicehandler.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_HeartRateGame()
{
    QMetaType::fromType<BluetoothBaseClass *>().id();
    qmlRegisterTypesAndRevisions<ConnectionHandler>("HeartRateGame", 1);
    qmlRegisterTypesAndRevisions<DeviceFinder>("HeartRateGame", 1);
    qmlRegisterTypesAndRevisions<DeviceHandler>("HeartRateGame", 1);
    qmlRegisterModule("HeartRateGame", 1, 0);
}

static const QQmlModuleRegistration registration("HeartRateGame", qml_register_types_HeartRateGame);
