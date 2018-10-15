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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "completionpage.h"
#include "confirmationpage.h"
#include "mainmenupage.h"
#include "selectionpage.h"

QT_BEGIN_NAMESPACE

class Ui_Window_Primary
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    MainMenuPage *page1;
    SelectionPage *page2;
    ConfirmationPage *page3;
    CompletionPage *page4;

    void setupUi(QMainWindow *Window_Primary)
    {
        if (Window_Primary->objectName().isEmpty())
            Window_Primary->setObjectName(QStringLiteral("Window_Primary"));
        Window_Primary->resize(800, 600);
        centralwidget = new QWidget(Window_Primary);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(120, 0));
        page1 = new MainMenuPage();
        page1->setObjectName(QStringLiteral("page1"));
        stackedWidget->addWidget(page1);
        page2 = new SelectionPage();
        page2->setObjectName(QStringLiteral("page2"));
        stackedWidget->addWidget(page2);
        page3 = new ConfirmationPage();
        page3->setObjectName(QStringLiteral("page3"));
        stackedWidget->addWidget(page3);
        page4 = new CompletionPage();
        page4->setObjectName(QStringLiteral("page4"));
        stackedWidget->addWidget(page4);
        Window_Primary->setCentralWidget(centralwidget);

        retranslateUi(Window_Primary);

        QMetaObject::connectSlotsByName(Window_Primary);
    } // setupUi

    void retranslateUi(QMainWindow *Window_Primary)
    {
        Window_Primary->setWindowTitle(QApplication::translate("Window_Primary", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_Primary: public Ui_Window_Primary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_PRIMARY_H
