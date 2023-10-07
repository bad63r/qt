#include "serialcommunication.h"
#include <QDebug>

serialCommunication::serialCommunication(QObject *parent)
    : QObject{parent}
{
    m_serialPort = new QSerialPort();
    //m_serialPort->setPortName("/dev/ttyACM0");
    m_serialPort->setPortName(m_portName);
    m_serialPort->setBaudRate(QSerialPort::BaudRate::Baud9600);
    m_serialPort->setParity(QSerialPort::Parity::NoParity);
    m_serialPort->setDataBits(QSerialPort::DataBits::Data8);
    m_serialPort->setStopBits(QSerialPort::StopBits::OneStop);
    m_serialPort->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
    m_serialPort->open(QIODevice::ReadWrite);

}

void serialCommunication::ledON()
{
    if (m_serialPort->isOpen()) {
         qDebug() << "Serial Port is connected!";
         m_serialPort->write("Hi there my friend 120");
         m_serialPort->write("\n"); // this lane send enter/new line to UART. Without it won't work as Arduino side expects new line to finish transaciton.
    } else {
         qDebug() << "Serial Port is NOT connected!";
    }

    //m_serialPort->close();
}

void serialCommunication::ledOff()
{
    if (m_serialPort->isOpen()) {
         qDebug() << "Serial Port is connected!";
         m_serialPort->write("Hi there my friend 160");
         m_serialPort->write("\n"); // this lane send enter/new line to UART. Without it won't work as Arduino side expects new line to finish transaciton.
    } else {
         qDebug() << "Serial Port is NOT connected!";
    }

    //m_serialPort->close();
}

QString serialCommunication::getPortName()
{
    return m_portName;
}

void serialCommunication::setPortName(QString entered_name)
{
    if (entered_name != m_portName) {
         m_portName = entered_name;
         emit portNameChanged();
    }
}
