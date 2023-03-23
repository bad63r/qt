#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "quewindow.h"

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
};
#endif // WINDOW_H
