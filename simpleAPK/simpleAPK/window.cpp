#include "window.h"
#include "ui_window.h"

#include <QMessageBox>


Window::Window(QWidget *parent): QWidget(parent)
    , ui(new Ui::Window)
{


    ui->setupUi(this);

}

Window::~Window()
{
    delete ui;
}


void Window::on_start_pushButton_clicked()
{

    username_data = ui->lineEditUser->text();

    if (!username_data.isEmpty()){
        queDialog = new queWindow(this, username_data);
        queDialog->show();
        hide();
    }else {
        QMessageBox::warning(this,"Empty Username","You must enter username, before starting the game!");
    }
}


