#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H

#include <QObject>


class serialCommunication : public QObject
{
    Q_OBJECT
public:
    explicit serialCommunication(QObject *parent = nullptr);

public slots:
    void infoCheck();

};

#endif // SERIALCOMMUNICATION_H
