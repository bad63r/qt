#include "serialcommunication.h"
#include <QDebug>

serialCommunication::serialCommunication(QObject *parent)
    : QObject{parent}
{

}

void serialCommunication::infoCheck()
{
    qDebug()<<"Hi Tomislav, your test is working :)";
}
