/********************************************************************************
** Form generated from reading UI file 'window_primary.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_PRIMARY_H
#define UI_WINDOW_PRIMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mainmenupage.h"
#include "mystoragebox.h"
#include "selectionpage.h"

QT_BEGIN_NAMESPACE

class Ui_Window_Primary
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    MainMenuPage *page1;
    QGridLayout *gridLayout_4;
    MyStorageBox *groupBox_3;
    QGridLayout *gridLayout_3;
    MyStorageBox *groupBox_6;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    MyStorageBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    MyStorageBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    MyStorageBox *groupBox;
    QGridLayout *gridLayout;
    QFrame *line;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;
    MyStorageBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    SelectionPage *page2;
    MyStorageBox *groupBox_7;
    QGridLayout *gridLayout_5;
    MyStorageBox *groupBox_8;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    MyStorageBox *groupBox_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    MyStorageBox *groupBox_10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_4;
    MyStorageBox *groupBox_11;
    QGridLayout *gridLayout_6;
    QFrame *line_2;
    QPushButton *pushButton_7;
    QLabel *label_4;
    QPushButton *pushButton_8;
    MyStorageBox *groupBox_12;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_2;
    QWidget *page3;

    void setupUi(QMainWindow *Window_Primary)
    {
        if (Window_Primary->objectName().isEmpty())
            Window_Primary->setObjectName(QStringLiteral("Window_Primary"));
        Window_Primary->resize(818, 618);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Window_Primary->sizePolicy().hasHeightForWidth());
        Window_Primary->setSizePolicy(sizePolicy);
        Window_Primary->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(Window_Primary);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(800, 600));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(800, 600));
        stackedWidget->setFrameShadow(QFrame::Plain);
        stackedWidget->setLineWidth(0);
        page1 = new MainMenuPage();
        page1->setObjectName(QStringLiteral("page1"));
        sizePolicy1.setHeightForWidth(page1->sizePolicy().hasHeightForWidth());
        page1->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(page1);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new MyStorageBox(page1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(800, 600));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_6 = new MyStorageBox(groupBox_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_4 = new QVBoxLayout(groupBox_6);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer_2);

        groupBox_2 = new MyStorageBox(groupBox_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(9);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        label_2->setMargin(6);

        verticalLayout_3->addWidget(label_2);

        groupBox_4 = new MyStorageBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_3->addWidget(groupBox_4);


        verticalLayout_4->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer);

        groupBox = new MyStorageBox(groupBox_6);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setMargin(6);

        gridLayout->addWidget(label, 2, 0, 1, 2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);


        gridLayout_3->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_5 = new MyStorageBox(groupBox_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(groupBox_5);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(widget);


        gridLayout_3->addWidget(groupBox_5, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page1);
        page2 = new SelectionPage();
        page2->setObjectName(QStringLiteral("page2"));
        sizePolicy1.setHeightForWidth(page2->sizePolicy().hasHeightForWidth());
        page2->setSizePolicy(sizePolicy1);
        groupBox_7 = new MyStorageBox(page2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 0, 800, 636));
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setMinimumSize(QSize(800, 600));
        gridLayout_5 = new QGridLayout(groupBox_7);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new MyStorageBox(groupBox_7);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_5 = new QVBoxLayout(groupBox_8);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_5->addItem(verticalSpacer_3);

        groupBox_9 = new MyStorageBox(groupBox_8);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_6 = new QVBoxLayout(groupBox_9);
        verticalLayout_6->setSpacing(9);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(groupBox_9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);
        label_3->setMargin(6);

        verticalLayout_6->addWidget(label_3);

        groupBox_10 = new MyStorageBox(groupBox_9);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_10);
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(groupBox_10);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(groupBox_10);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_3->addWidget(pushButton_6);


        verticalLayout_6->addWidget(groupBox_10);


        verticalLayout_5->addWidget(groupBox_9);

        verticalSpacer_4 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        groupBox_11 = new MyStorageBox(groupBox_8);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        gridLayout_6 = new QGridLayout(groupBox_11);
        gridLayout_6->setSpacing(9);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(groupBox_11);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_2, 1, 0, 1, 2);

        pushButton_7 = new QPushButton(groupBox_11);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_6->addWidget(pushButton_7, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_11);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        label_4->setMargin(6);

        gridLayout_6->addWidget(label_4, 2, 0, 1, 2);

        pushButton_8 = new QPushButton(groupBox_11);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_6->addWidget(pushButton_8, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_11);


        gridLayout_5->addWidget(groupBox_8, 0, 0, 1, 1);

        groupBox_12 = new MyStorageBox(groupBox_7);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setFlat(false);
        verticalLayout_7 = new QVBoxLayout(groupBox_12);
        verticalLayout_7->setSpacing(9);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(groupBox_12);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(widget_2);


        gridLayout_5->addWidget(groupBox_12, 0, 1, 1, 1);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        stackedWidget->addWidget(page3);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        Window_Primary->setCentralWidget(centralwidget);

        retranslateUi(Window_Primary);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Window_Primary);
    } // setupUi

    void retranslateUi(QMainWindow *Window_Primary)
    {
        Window_Primary->setWindowTitle(QApplication::translate("Window_Primary", "Terrain Generator V0.1", nullptr));
        groupBox_6->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("Window_Primary", "These are the instructions for my program", nullptr));
        groupBox_4->setTitle(QString());
        pushButton_4->setText(QApplication::translate("Window_Primary", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("Window_Primary", "PushButton", nullptr));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("Window_Primary", "PushButton", nullptr));
        label->setText(QApplication::translate("Window_Primary", "Created by Zachery Anderson", nullptr));
        pushButton->setText(QApplication::translate("Window_Primary", "PushButton", nullptr));
        groupBox_5->setTitle(QString());
        groupBox_8->setTitle(QString());
        groupBox_9->setTitle(QString());
        label_3->setText(QApplication::translate("Window_Primary", "These are the instructions for my program", nullptr));
        groupBox_10->setTitle(QString());
        pushButton_5->setText(QApplication::translate("Window_Primary", "PushButton", nullptr));
        pushButton_6->setText(QApplication::translate("Window_Primary", "PushButton", nullptr));
        groupBox_11->setTitle(QString());
        pushButton_7->setText(QApplication::translate("Window_Primary", "PushButton", nullptr));
        label_4->setText(QApplication::translate("Window_Primary", "Created by Zachery Anderson", nullptr));
        pushButton_8->setText(QApplication::translate("Window_Primary", "PushButton", nullptr));
        groupBox_12->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_Primary: public Ui_Window_Primary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_PRIMARY_H
