#include <QGuiApplication>
#include <QQmlApplicationEngine>
//#include <QQmlContext>

#include "serialcommunication.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

//    serialCommunication mySerial;
    qmlRegisterType< serialCommunication>("SerialCommunication",1,0, "SerialCommunicationType");

    QQmlApplicationEngine engine;
    const QUrl url("qrc:/Main.qml");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
