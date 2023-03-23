#include "window.h"
#include "ui_window.h"

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

    queDialog = new queWindow(this);
    queDialog->show();
    hide();
}
