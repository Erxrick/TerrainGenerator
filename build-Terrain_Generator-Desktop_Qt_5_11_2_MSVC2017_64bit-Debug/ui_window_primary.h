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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
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
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    MyStorageBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnImageLoad;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnContinue;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    MyStorageBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QFrame *line;
    MyStorageBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    SelectionPage *page2;
    QGridLayout *gridLayout_7;
    MyStorageBox *groupBox_7;
    QGridLayout *gridLayout_5;
    MyStorageBox *groupBox_8;
    QVBoxLayout *verticalLayout_5;
    MyStorageBox *groupBox_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QLabel *label_6;
    MyStorageBox *groupBox_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnAutoDetect;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line_2;
    MyStorageBox *groupBox_13;
    QGridLayout *gridLayout1;
    QLabel *label_14;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *inputMeshName;
    QLineEdit *inputOutputDirectory;
    QSpinBox *inputMaxWidth;
    QSpinBox *inputMaxHeight;
    QSpinBox *inputMaxVertices;
    QSpinBox *inputMaxDepth;
    QToolButton *toolBtnOutputDirectory;
    MyStorageBox *inputQuality;
    QGridLayout *gridLayout_8;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_15;
    MyStorageBox *groupBox_11;
    QGridLayout *gridLayout_6;
    QPushButton *btnBack;
    QPushButton *btnConfirm;
    MyStorageBox *groupBox_12;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_2;
    QWidget *page3;

    void setupUi(QMainWindow *Window_Primary)
    {
        if (Window_Primary->objectName().isEmpty())
            Window_Primary->setObjectName(QStringLiteral("Window_Primary"));
        Window_Primary->resize(800, 600);
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
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
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
        QFont font;
        font.setPointSize(20);
        font.setUnderline(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        label_2->setMargin(6);

        verticalLayout_3->addWidget(label_2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);

        verticalSpacer_5 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        groupBox_4 = new MyStorageBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnImageLoad = new QPushButton(groupBox_4);
        btnImageLoad->setObjectName(QStringLiteral("btnImageLoad"));
        btnImageLoad->setFont(font1);

        horizontalLayout_2->addWidget(btnImageLoad);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnContinue = new QPushButton(groupBox_4);
        btnContinue->setObjectName(QStringLiteral("btnContinue"));
        btnContinue->setFont(font1);

        horizontalLayout_2->addWidget(btnContinue);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(groupBox_4);


        verticalLayout_4->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer);

        groupBox = new MyStorageBox(groupBox_6);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 10, 0, 10);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setMargin(6);

        gridLayout->addWidget(label, 1, 0, 1, 2);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 0, 1, 2);


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
        widget->setAutoFillBackground(false);

        verticalLayout_2->addWidget(widget);


        gridLayout_3->addWidget(groupBox_5, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page1);
        page2 = new SelectionPage();
        page2->setObjectName(QStringLiteral("page2"));
        sizePolicy1.setHeightForWidth(page2->sizePolicy().hasHeightForWidth());
        page2->setSizePolicy(sizePolicy1);
        gridLayout_7 = new QGridLayout(page2);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        groupBox_7 = new MyStorageBox(page2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setMinimumSize(QSize(800, 600));
        gridLayout_5 = new QGridLayout(groupBox_7);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox_8 = new MyStorageBox(groupBox_7);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_5 = new QVBoxLayout(groupBox_8);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
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

        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        groupBox_10 = new MyStorageBox(groupBox_9);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_10);
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(80, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        btnAutoDetect = new QPushButton(groupBox_10);
        btnAutoDetect->setObjectName(QStringLiteral("btnAutoDetect"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnAutoDetect->sizePolicy().hasHeightForWidth());
        btnAutoDetect->setSizePolicy(sizePolicy3);
        btnAutoDetect->setFont(font1);

        horizontalLayout_3->addWidget(btnAutoDetect);

        horizontalSpacer_8 = new QSpacerItem(80, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_6->addWidget(groupBox_10);


        verticalLayout_5->addWidget(groupBox_9);

        line_2 = new QFrame(groupBox_8);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        groupBox_13 = new MyStorageBox(groupBox_8);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        gridLayout1 = new QGridLayout(groupBox_13);
        gridLayout1->setSpacing(0);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(groupBox_13);
        label_14->setObjectName(QStringLiteral("label_14"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy4);
        label_14->setMargin(0);

        gridLayout1->addWidget(label_14, 0, 0, 1, 1);

        scrollArea = new QScrollArea(groupBox_13);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -188, 367, 290));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setPointSize(10);
        label_4->setFont(font2);
        label_4->setFocusPolicy(Qt::ClickFocus);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_13);

        inputMeshName = new QLineEdit(scrollAreaWidgetContents);
        inputMeshName->setObjectName(QStringLiteral("inputMeshName"));
        inputMeshName->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, inputMeshName);

        inputOutputDirectory = new QLineEdit(scrollAreaWidgetContents);
        inputOutputDirectory->setObjectName(QStringLiteral("inputOutputDirectory"));
        inputOutputDirectory->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, inputOutputDirectory);

        inputMaxWidth = new QSpinBox(scrollAreaWidgetContents);
        inputMaxWidth->setObjectName(QStringLiteral("inputMaxWidth"));
        inputMaxWidth->setFont(font2);
        inputMaxWidth->setMaximum(5000);

        formLayout->setWidget(5, QFormLayout::FieldRole, inputMaxWidth);

        inputMaxHeight = new QSpinBox(scrollAreaWidgetContents);
        inputMaxHeight->setObjectName(QStringLiteral("inputMaxHeight"));
        inputMaxHeight->setFont(font2);
        inputMaxHeight->setMaximum(5000);

        formLayout->setWidget(6, QFormLayout::FieldRole, inputMaxHeight);

        inputMaxVertices = new QSpinBox(scrollAreaWidgetContents);
        inputMaxVertices->setObjectName(QStringLiteral("inputMaxVertices"));
        inputMaxVertices->setFont(font2);
        inputMaxVertices->setMaximum(5000);

        formLayout->setWidget(4, QFormLayout::FieldRole, inputMaxVertices);

        inputMaxDepth = new QSpinBox(scrollAreaWidgetContents);
        inputMaxDepth->setObjectName(QStringLiteral("inputMaxDepth"));
        inputMaxDepth->setFont(font2);
        inputMaxDepth->setMaximum(5000);

        formLayout->setWidget(7, QFormLayout::FieldRole, inputMaxDepth);

        toolBtnOutputDirectory = new QToolButton(scrollAreaWidgetContents);
        toolBtnOutputDirectory->setObjectName(QStringLiteral("toolBtnOutputDirectory"));
        toolBtnOutputDirectory->setFont(font2);
        toolBtnOutputDirectory->setPopupMode(QToolButton::InstantPopup);
        toolBtnOutputDirectory->setArrowType(Qt::NoArrow);

        formLayout->setWidget(3, QFormLayout::FieldRole, toolBtnOutputDirectory);

        inputQuality = new MyStorageBox(scrollAreaWidgetContents);
        inputQuality->setObjectName(QStringLiteral("inputQuality"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(inputQuality->sizePolicy().hasHeightForWidth());
        inputQuality->setSizePolicy(sizePolicy5);
        inputQuality->setFont(font2);
        inputQuality->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        inputQuality->setFlat(false);
        inputQuality->setCheckable(false);
        gridLayout_8 = new QGridLayout(inputQuality);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(inputQuality);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_8->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(inputQuality);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_8->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(inputQuality);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout_8->addWidget(radioButton_3, 0, 2, 1, 1);


        formLayout->setWidget(8, QFormLayout::FieldRole, inputQuality);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout1->addWidget(scrollArea, 2, 0, 1, 1);

        label_15 = new QLabel(groupBox_13);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font3;
        font3.setPointSize(3);
        label_15->setFont(font3);

        gridLayout1->addWidget(label_15, 1, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_13);

        groupBox_11 = new MyStorageBox(groupBox_8);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        sizePolicy4.setHeightForWidth(groupBox_11->sizePolicy().hasHeightForWidth());
        groupBox_11->setSizePolicy(sizePolicy4);
        gridLayout_6 = new QGridLayout(groupBox_11);
        gridLayout_6->setSpacing(9);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(10, 10, 10, 10);
        btnBack = new QPushButton(groupBox_11);
        btnBack->setObjectName(QStringLiteral("btnBack"));

        gridLayout_6->addWidget(btnBack, 0, 0, 1, 1);

        btnConfirm = new QPushButton(groupBox_11);
        btnConfirm->setObjectName(QStringLiteral("btnConfirm"));

        gridLayout_6->addWidget(btnConfirm, 0, 1, 1, 1);


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


        gridLayout_7->addWidget(groupBox_7, 0, 0, 1, 1);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        sizePolicy1.setHeightForWidth(page3->sizePolicy().hasHeightForWidth());
        page3->setSizePolicy(sizePolicy1);
        stackedWidget->addWidget(page3);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        Window_Primary->setCentralWidget(centralwidget);
#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(inputMeshName);
        label_7->setBuddy(inputOutputDirectory);
        label_8->setBuddy(inputMaxVertices);
        label_9->setBuddy(inputMaxWidth);
        label_10->setBuddy(inputMaxHeight);
        label_11->setBuddy(inputMaxDepth);
        label_12->setBuddy(inputQuality);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(btnImageLoad, btnContinue);
        QWidget::setTabOrder(btnContinue, btnAutoDetect);
        QWidget::setTabOrder(btnAutoDetect, scrollArea);
        QWidget::setTabOrder(scrollArea, inputMeshName);
        QWidget::setTabOrder(inputMeshName, inputOutputDirectory);
        QWidget::setTabOrder(inputOutputDirectory, toolBtnOutputDirectory);
        QWidget::setTabOrder(toolBtnOutputDirectory, inputMaxVertices);
        QWidget::setTabOrder(inputMaxVertices, inputMaxWidth);
        QWidget::setTabOrder(inputMaxWidth, inputMaxHeight);
        QWidget::setTabOrder(inputMaxHeight, inputMaxDepth);
        QWidget::setTabOrder(inputMaxDepth, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, radioButton_3);
        QWidget::setTabOrder(radioButton_3, btnBack);
        QWidget::setTabOrder(btnBack, btnConfirm);

        retranslateUi(Window_Primary);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Window_Primary);
    } // setupUi

    void retranslateUi(QMainWindow *Window_Primary)
    {
        Window_Primary->setWindowTitle(QApplication::translate("Window_Primary", "Terrain Generator V0.1", nullptr));
        groupBox_6->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("Window_Primary", "Instructions", nullptr));
        label_5->setText(QApplication::translate("Window_Primary", "<html><head/><body><p>-Load topographical map in supported file type to get started.</p><p>-Once proper image is loaded, press continue.</p><p><br/></p><p>-More will get added later but this is good enough for now</p></body></html>", nullptr));
        groupBox_4->setTitle(QString());
        btnImageLoad->setText(QApplication::translate("Window_Primary", "Load Image", nullptr));
        btnContinue->setText(QApplication::translate("Window_Primary", "Continue", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("Window_Primary", "Created by Zachery Anderson", nullptr));
        groupBox_5->setTitle(QString());
        groupBox_8->setTitle(QString());
        groupBox_9->setTitle(QString());
        label_3->setText(QApplication::translate("Window_Primary", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; text-decoration: underline;\">Selection</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Window_Primary", "<html><head/><body><p><span style=\" font-size:12pt;\">-Click image to start detecting contour lines.</span></p><p><span style=\" font-size:12pt;\">-When a line is detected, it will become highlighted.</span></p><p><span style=\" font-size:12pt;\">-Select at least one line before attempting auto-detect.</span></p><p><br/></p><p><span style=\" font-size:12pt;\">-More can be added here as needed</span></p></body></html>", nullptr));
        groupBox_10->setTitle(QString());
        btnAutoDetect->setText(QApplication::translate("Window_Primary", "Auto-Detect Lines", nullptr));
        groupBox_13->setTitle(QString());
        label_14->setText(QApplication::translate("Window_Primary", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; text-decoration: underline;\">Preferences</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Window_Primary", "Mesh Name", nullptr));
        label_7->setText(QApplication::translate("Window_Primary", "Output Directory", nullptr));
        label_8->setText(QApplication::translate("Window_Primary", "Max Vertices", nullptr));
        label_9->setText(QApplication::translate("Window_Primary", "Max Width", nullptr));
        label_10->setText(QApplication::translate("Window_Primary", "Max Height", nullptr));
        label_11->setText(QApplication::translate("Window_Primary", "Max Depth", nullptr));
        label_12->setText(QApplication::translate("Window_Primary", "Quality", nullptr));
        label_13->setText(QString());
        toolBtnOutputDirectory->setText(QApplication::translate("Window_Primary", "...", nullptr));
        inputQuality->setTitle(QString());
        radioButton->setText(QApplication::translate("Window_Primary", "Low", nullptr));
        radioButton_2->setText(QApplication::translate("Window_Primary", "Medium", nullptr));
        radioButton_3->setText(QApplication::translate("Window_Primary", "High", nullptr));
        label_15->setText(QString());
        groupBox_11->setTitle(QString());
        btnBack->setText(QApplication::translate("Window_Primary", "Back", nullptr));
        btnConfirm->setText(QApplication::translate("Window_Primary", "Confirm", nullptr));
        groupBox_12->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Window_Primary: public Ui_Window_Primary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_PRIMARY_H
