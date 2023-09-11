#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H

#include <QObject>
#include <QSerialPort>


class serialCommunication : public QObject
{
    Q_OBJECT
public:
    explicit serialCommunication(QObject *parent = nullptr);

public slots:
    void ledON();
    void ledOff();

private:
    QSerialPort* m_serialPort;

};

#endif // SERIALCOMMUNICATION_H
