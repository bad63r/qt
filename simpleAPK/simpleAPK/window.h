#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "quewindow.h"
#include <QtSql>

#include <QMessageBox>

#include <dbmanager.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

private slots:


    void on_start_pushButton_clicked();

private:
    Ui::Window *ui;
    queWindow *queDialog;
    QString username;
    DbManager *db;
};
#endif // WINDOW_H
