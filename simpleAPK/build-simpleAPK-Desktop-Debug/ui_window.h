/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelUsername;
    QLineEdit *lineEditUser;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *start_pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListView *listView;

    void setupUi(QWidget *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(720, 386);
        horizontalLayout_4 = new QHBoxLayout(Window);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(Window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Purisa"));
        font.setPointSize(26);
        font.setItalic(true);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        labelUsername = new QLabel(Window);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Purisa"));
        font1.setPointSize(14);
        labelUsername->setFont(font1);

        horizontalLayout_3->addWidget(labelUsername);

        lineEditUser = new QLineEdit(Window);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));

        horizontalLayout_3->addWidget(lineEditUser);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        start_pushButton = new QPushButton(Window);
        start_pushButton->setObjectName(QString::fromUtf8("start_pushButton"));
        start_pushButton->setMinimumSize(QSize(100, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Purisa"));
        font2.setItalic(false);
        start_pushButton->setFont(font2);

        horizontalLayout->addWidget(start_pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Purisa"));
        font3.setPointSize(24);
        font3.setItalic(true);
        label_2->setFont(font3);

        verticalLayout_2->addWidget(label_2);

        listView = new QListView(Window);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_2->addWidget(listView);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QWidget *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Window", nullptr));
        label->setText(QApplication::translate("Window", "QUIZ", nullptr));
        labelUsername->setText(QApplication::translate("Window", "Username:", nullptr));
        start_pushButton->setText(QApplication::translate("Window", "START", nullptr));
        label_2->setText(QApplication::translate("Window", "scoreboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
