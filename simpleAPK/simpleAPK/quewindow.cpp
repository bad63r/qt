#include "quewindow.h"
#include "ui_quewindow.h"

#include <QDebug>



queWindow::queWindow(QWidget *parent, DbManager * dbPtr) :
    QDialog(parent),
    ui(new Ui::queWindow)
{
    ui->setupUi(this);

    on_next_pushButton_clicked();

    //db = new DbManager("/home/bad63r/github/qt/simpleAPK/simpleAPK/database/scoreboard.db");
    db = dbPtr;

}

queWindow::~queWindow()
{
    delete ui;
}

void queWindow::SetMoneyTreePicture(int moneyLvl){
    QPixmap pix(MtImgPathList[moneyLvl]);
    int w = ui->labelMoneyTree->width();
    int h = ui->labelMoneyTree->height();
    ui->labelMoneyTree->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

void queWindow::on_next_pushButton_clicked()
{
    QFile questions_list(":/files/sources/questions_list.txt");
    QTextStream pipe(&questions_list);
    QString question;
    QString ans;
    QString readLine1;
    QString readLine2;
    QString var;

    db->addPerson("beta",0);

    if(!questions_list.open(QFile::ReadOnly |
                            QFile::Text))
        {
            QMessageBox::warning(this,"File Error"," Could not open file for writing");
            return;
        }

    counter = 0;
    readLine1 = pipe.readLine();
    readLine2 = pipe.readLine();
    while(!readLine1.isNull()){
        if (counter == lineNum) {
            question = readLine1;
            ans = readLine2;
            break;
        }
        else {
            readLine1 = pipe.readLine();
            readLine2 = pipe.readLine();
        }
        counter = counter + 2;
    }

//    if (readLine1.isNull()) {
//        QApplication::quit();
//    }

    //QMessageBox::information(this,"title",question);
    ui->qTitle_label->setText("Question " + QString::number(q_num));
    ui->question->setText(question);
    SetMoneyTreePicture(q_num-1);
    QStringList ans_list = ans.split(';');
    ui->a1_pushButton->setText(ans_list[0]);
    ui->a2_pushButton->setText(ans_list[1]);
    ui->a3_pushButton->setText(ans_list[2]);
    ui->a4_pushButton->setText(ans_list[3]);
    correctAns = ans_list[0];


    lineNum = lineNum + 2;
    q_num++;
    questions_list.close();

    ui->a1_pushButton->setStyleSheet("");
    ui->a2_pushButton->setStyleSheet("");
    ui->a3_pushButton->setStyleSheet("");
    ui->a4_pushButton->setStyleSheet("");

}

void queWindow::on_a1_pushButton_clicked()
{
    if (ui->a1_pushButton->text() == correctAns) {
         ui->a1_pushButton->setStyleSheet("background-color: green");
    } else {
         ui->a1_pushButton->setStyleSheet("background-color: red");
    }
}

void queWindow::on_a2_pushButton_clicked()
{
    if (ui->a2_pushButton->text() == correctAns) {
         ui->a2_pushButton->setStyleSheet("background-color: green");
    } else {
         ui->a2_pushButton->setStyleSheet("background-color: red");
    }
}

void queWindow::on_a3_pushButton_clicked()
{
    if (ui->a3_pushButton->text() == correctAns) {
         ui->a3_pushButton->setStyleSheet("background-color: green");
    } else {
         ui->a3_pushButton->setStyleSheet("background-color: red");
    }
}

void queWindow::on_a4_pushButton_clicked()
{
    if (ui->a4_pushButton->text() == correctAns) {
         ui->a4_pushButton->setStyleSheet("background-color: green");
    } else {
         ui->a4_pushButton->setStyleSheet("background-color: red");
    }
}
