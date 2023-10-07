#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H

#include <QObject>
#include <QSerialPort>


class serialCommunication : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString portName READ getPortName WRITE setPortName NOTIFY portNameChanged)
public:
    explicit serialCommunication(QObject *parent = nullptr);

public slots:
    void ledON();
    void ledOff();
    QString getPortName();
    void setPortName(QString entered_name);

signals:
    void portNameChanged();

private:
    QSerialPort* m_serialPort;
    QString m_portName = "/dev/ttyACM0";

};

#endif // SERIALCOMMUNICATION_H
