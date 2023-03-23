#ifndef QUEWINDOW_H
#define QUEWINDOW_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>

namespace Ui {
class queWindow;
}

class queWindow : public QDialog
{
    Q_OBJECT

public:
    explicit queWindow(QWidget *parent = nullptr);
    ~queWindow();
    void qMenu_init();

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
};

#endif // QUEWINDOW_H
