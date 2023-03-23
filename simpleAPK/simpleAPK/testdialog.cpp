#include "testdialog.h"
#include "ui_testdialog.h"

testDialog::testDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testDialog)
{
    ui->setupUi(this);
}

testDialog::~testDialog()
{
    delete ui;
}
