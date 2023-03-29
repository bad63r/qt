#include <dbmanager.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>

DbManager::DbManager()
{

}

DbManager::DbManager(const QString &path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}

DbManager::~DbManager()
{
    if (m_db.isOpen())
    {
        m_db.close();
    }
}

bool DbManager::isOpen() const
{
    return m_db.isOpen();
}

bool DbManager::addPerson(const QString& name, int score)
{
    bool success = false;

    if (!name.isEmpty())
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO scoreboard (username,score) VALUES (:name,:score)");
        queryAdd.bindValue(":name", name);
        queryAdd.bindValue(":score", score);

        if(queryAdd.exec())
        {
            success = true;
            qDebug() << "Add person is successfull. ";
        }
        else
        {
            qDebug() << "Add person failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "Add person failed: name cannot be empty";
    }

    return success;
}

void DbManager::close_connection()
{
    m_db.close();
}
