#ifndef QUEWINDOW_H
#define QUEWINDOW_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>

#include <dbmanager.h>

namespace Ui {
class queWindow;
}

class queWindow : public QDialog
{
    Q_OBJECT

public:
    explicit queWindow(QWidget *parent = nullptr, DbManager *dbPtr = nullptr);
    ~queWindow();
    void SetMoneyTreePicture(int moneyLvl);

private slots:

    void on_next_pushButton_clicked();

    void on_a1_pushButton_clicked();

    void on_a2_pushButton_clicked();

    void on_a3_pushButton_clicked();

    void on_a4_pushButton_clicked();

private:
    Ui::queWindow *ui;
    int lineNum = 0;
    int counter = 0;
    int q_num = 1;
    QString correctAns;
    QStringList MtImgPathList = {":/files/sources/treeL1.png",
                                 ":/files/sources/treeL2.png",
                                 ":/files/sources/treeL3.png",
                                 ":/files/sources/treeL4.png",
                                 ":/files/sources/treeL5.png",
                                 ":/files/sources/treeL6.png",
                                 ":/files/sources/treeL7.png",
                                 ":/files/sources/treeL8.png",
                                 ":/files/sources/treeL9.png",
                                 ":/files/sources/treeL10.png",
                                 ":/files/sources/treeL11.png",
                                 ":/files/sources/treeL12.png",
                                 ":/files/sources/treeL13.png",
                                 ":/files/sources/treeL14.png",
                                 ":/files/sources/treeL15.png",};
    DbManager *db;

};



#endif // QUEWINDOW_H
