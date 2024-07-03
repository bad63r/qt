/********************************************************************************
** Form generated from reading UI file 'quewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEWINDOW_H
#define UI_QUEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_queWindow
{
public:
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *qTitle_label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *question;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *a1_pushButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *a3_pushButton;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *a2_pushButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *a4_pushButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *next_pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelMoneyTree;

    void setupUi(QDialog *queWindow)
    {
        if (queWindow->objectName().isEmpty())
            queWindow->setObjectName("queWindow");
        queWindow->resize(720, 420);
        horizontalLayout_6 = new QHBoxLayout(queWindow);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        qTitle_label = new QLabel(queWindow);
        qTitle_label->setObjectName("qTitle_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Purisa")});
        font.setPointSize(26);
        qTitle_label->setFont(font);

        horizontalLayout->addWidget(qTitle_label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        question = new QLabel(queWindow);
        question->setObjectName("question");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Purisa")});
        font1.setPointSize(14);
        question->setFont(font1);

        horizontalLayout_2->addWidget(question);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        a1_pushButton = new QPushButton(queWindow);
        a1_pushButton->setObjectName("a1_pushButton");
        a1_pushButton->setMinimumSize(QSize(130, 30));

        verticalLayout->addWidget(a1_pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        a3_pushButton = new QPushButton(queWindow);
        a3_pushButton->setObjectName("a3_pushButton");
        a3_pushButton->setMinimumSize(QSize(130, 30));

        verticalLayout->addWidget(a3_pushButton);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        a2_pushButton = new QPushButton(queWindow);
        a2_pushButton->setObjectName("a2_pushButton");
        a2_pushButton->setMinimumSize(QSize(130, 30));

        verticalLayout_2->addWidget(a2_pushButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        a4_pushButton = new QPushButton(queWindow);
        a4_pushButton->setObjectName("a4_pushButton");
        a4_pushButton->setMinimumSize(QSize(130, 30));

        verticalLayout_2->addWidget(a4_pushButton);


        horizontalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        next_pushButton = new QPushButton(queWindow);
        next_pushButton->setObjectName("next_pushButton");
        next_pushButton->setFont(font1);

        horizontalLayout_3->addWidget(next_pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_6->addLayout(verticalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        labelMoneyTree = new QLabel(queWindow);
        labelMoneyTree->setObjectName("labelMoneyTree");
        labelMoneyTree->setMinimumSize(QSize(250, 400));

        horizontalLayout_5->addWidget(labelMoneyTree);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        retranslateUi(queWindow);

        QMetaObject::connectSlotsByName(queWindow);
    } // setupUi

    void retranslateUi(QDialog *queWindow)
    {
        queWindow->setWindowTitle(QCoreApplication::translate("queWindow", "Dialog", nullptr));
        qTitle_label->setText(QCoreApplication::translate("queWindow", "QUESTION 1", nullptr));
        question->setText(QCoreApplication::translate("queWindow", "What is my name?", nullptr));
        a1_pushButton->setText(QCoreApplication::translate("queWindow", "a1_pushButton", nullptr));
        a3_pushButton->setText(QCoreApplication::translate("queWindow", "a3_pushButton", nullptr));
        a2_pushButton->setText(QCoreApplication::translate("queWindow", "a2_pushButton", nullptr));
        a4_pushButton->setText(QCoreApplication::translate("queWindow", "a4_pushButton", nullptr));
        next_pushButton->setText(QCoreApplication::translate("queWindow", "NEXT", nullptr));
        labelMoneyTree->setText(QCoreApplication::translate("queWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class queWindow: public Ui_queWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEWINDOW_H
