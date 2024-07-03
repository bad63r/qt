/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QListView *listView;
    QListView *listView_2;

    void setupUi(QDialog *testDialog)
    {
        if (testDialog->objectName().isEmpty())
            testDialog->setObjectName("testDialog");
        testDialog->resize(743, 386);
        widget = new QWidget(testDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 60, 520, 194));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(widget);
        listView->setObjectName("listView");

        horizontalLayout->addWidget(listView);

        listView_2 = new QListView(widget);
        listView_2->setObjectName("listView_2");

        horizontalLayout->addWidget(listView_2);


        retranslateUi(testDialog);

        QMetaObject::connectSlotsByName(testDialog);
    } // setupUi

    void retranslateUi(QDialog *testDialog)
    {
        testDialog->setWindowTitle(QCoreApplication::translate("testDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testDialog: public Ui_testDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
