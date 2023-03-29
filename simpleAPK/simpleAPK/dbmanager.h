#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>


class DbManager
{
public:
    DbManager();
    DbManager(const QString& path);
    ~DbManager();

    bool isOpen() const;

    bool createTable();
    bool addPerson(const QString& name, int score);
    void close_connection();



private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
