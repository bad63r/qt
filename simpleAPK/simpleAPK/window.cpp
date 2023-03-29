#include "window.h"
#include "ui_window.h"

#include <QMessageBox>


Window::Window(QWidget *parent): QWidget(parent)
    , ui(new Ui::Window)
{


    ui->setupUi(this);

    db = new DbManager("/home/bad63r/github/qt/simpleAPK/simpleAPK/database/scoreboard.db");

}

Window::~Window()
{
    delete ui;
}


void Window::on_start_pushButton_clicked()
{

    username = ui->lineEditUser->text();
    if (db->isOpen()) {
        db->addPerson(username,0);
    }
    //db->close_connection();

    queDialog = new queWindow(this);
    queDialog->show();
    hide();

}


