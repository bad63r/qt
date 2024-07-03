#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H

#include <QObject>
#include <QSerialPort>


class serialCommunication : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString portName READ getPortName WRITE setPortName NOTIFY portNameChanged)
    Q_PROPERTY(QString dataBits READ getDataBits WRITE setDataBits NOTIFY dataBitsChanged)
    Q_PROPERTY(QString baudRate READ getBaudRate WRITE setBaudRate  NOTIFY baudRateChanged)

    Q_PROPERTY(int bits READ getBits WRITE setBits NOTIFY bitsChanged)
public:
    explicit serialCommunication(QObject *parent = nullptr);

public slots:
    void ledON();
    void ledOff();
    //port name
    QString getPortName();
    void setPortName(QString entered_name);
    //data bits
    int getDataBits();
    void setDataBits(int entered_bits);
    //baud bits
    int getBaudRate();
    void setBaudRate(int data);


signals:
    void portNameChanged();
    void dataBitsChanged();
    void baudRateChanged();

private:
    QSerialPort* m_serialPort;
    QString m_portName = "/dev/ttyACM0";
    int m_dataBits = 8;
    int m_baudRate = 9600;

};

#endif // SERIALCOMMUNICATION_H
