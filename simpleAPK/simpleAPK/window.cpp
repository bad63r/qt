#include "window.h"
#include "ui_window.h"

#include <QMessageBox>


Window::Window(QWidget *parent): QWidget(parent)
    , ui(new Ui::Window)
{


    ui->setupUi(this);

    QSqlQueryModel *model = new QSqlQueryModel();
    db_start = new DbManager("/home/bad63r/github/qt/simpleAPK/simpleAPK/database/scoreboard.db");

    if (db_start->isOpen()) {
        QSqlQuery queryDbRead;
        qDebug() << "connection is still open ";
        queryDbRead.prepare("SELECT username,score FROM scoreboard ORDER BY score DESC LIMIT 10");

        if(queryDbRead.exec())
            {
                qDebug() << "Pulling info from database is successfull. ";
                model->setQuery(queryDbRead);
            }
            else
            {
                qDebug() << "Pulling info from database failed. ";
            }
            ui->tableView->setModel(model);
            ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    }

}

Window::~Window()
{
    delete ui;
}


void Window::on_start_pushButton_clicked()
{

    username_data = ui->lineEditUser->text();

    if (!username_data.isEmpty()){
        queDialog = new queWindow(this, username_data, db_start);
        queDialog->show();
        hide();
    }else {
        QMessageBox::warning(this,"Empty Username","You must enter username, before starting the game!");
    }
}


