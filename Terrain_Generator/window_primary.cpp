#include "window_primary.h"
#include "ui_window_primary.h"
#include "qfiledialog.h"
#include "qmessagebox.h"


#include "mainmenupage.h"
#include "selectionpage.h"
#include "confirmationpage.h"
#include "completionpage.h"



Window_Primary::Window_Primary(QWidget *parent) : QMainWindow(parent), ui(new Ui::Window_Primary)
{
    ui->setupUi(this);

// Main Menu Page Setting of Pointer Stuff for ease of access
    {
        mainMenuPage        = ui->page1;

    }

// Selection Page Setting of Pointer Stuff for ease of access
    {
        selectionPage = ui->page2;
        selectionPage->CurrentImagePage  = ui->CurrentSelectionPage;
        selectionPage->OriginalImagePage = ui->OriginalImage;
    }

// Confirmation Page Setting of Pointer Stuff for ease of access
    {
        confirmationPage    = ui->page3;

    }

// Completion Page Setting of Pointer Stuff for ease of access
    {
        completionPage      = ui->page4;

    }


}

//Window_Primary::~Window_Primary()
//{
//    delete ui;
//}

void Window_Primary::on_btnConfirm_clicked()
{
    //save all the data from the preferences
    //do line jazz
    ui->stackedWidget->setCurrentIndex(2);
    updateImages();

}

void Window_Primary::on_btnContinue_clicked()
{
    if(!primaryImage.isNull())
    {
        ui->stackedWidget->setCurrentIndex(1);
        updateImages();
    }
    else
    {
        QMessageBox::warning(this, tr("Terrain Generator"), tr("An Image must be loaded to continue."));
    }

}

void Window_Primary::on_btnBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    updateImages();

}

void Window_Primary::on_btnImageLoad_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select The Topographical Map"), "", tr("Images (*.png *.xpm *.jpg)"));

    if(fileName != "")
    {
        primaryImage.load(fileName);
        QPixmap scaledImageOG = primaryImage.scaled(ui->OriginalImageP1->size(), Qt::IgnoreAspectRatio);
        QPalette paletteOG;
        paletteOG.setBrush(QPalette::Background, scaledImageOG);
        ui->OriginalImageP1->setAutoFillBackground(true);
        ui->OriginalImageP1->setPalette(paletteOG);

        QPixmap scaledImageForOriginalPanel = primaryImage.scaled(ui->OriginalImage->size(), Qt::IgnoreAspectRatio);
        QPalette paletteForOriginalPanel;
        paletteForOriginalPanel.setBrush(QPalette::Background, scaledImageForOriginalPanel);
        ui->OriginalImage->setPalette(paletteForOriginalPanel);
        ui->OriginalImage->setAutoFillBackground(true);

    }


}

void Window_Primary::on_toolBtnOutputDirectory_clicked()
{
    QString directory = QFileDialog::getExistingDirectory(this, tr("Select Output Directory"), "");
    ui->inputOutputDirectory->setText(directory);
}

void Window_Primary::resizeEvent(QResizeEvent* event)
{
    QMainWindow::resizeEvent(event);
    updateImages();
}

void Window_Primary::updateImages()
{
    if(!primaryImage.isNull())
    {

        QPixmap scaledImageOG = primaryImage.scaled(ui->OriginalImageP1->size(), Qt::IgnoreAspectRatio);
        QPalette paletteOG;
        paletteOG.setBrush(QPalette::Background, scaledImageOG);
        ui->OriginalImageP1->setAutoFillBackground(true);
        ui->OriginalImageP1->setPalette(paletteOG);

        QPixmap scaledImageForOriginalPanel = primaryImage.scaled(ui->OriginalImage->size(), Qt::IgnoreAspectRatio);
        QPalette paletteForOriginalPanel;
        paletteForOriginalPanel.setBrush(QPalette::Background, scaledImageForOriginalPanel);
        ui->OriginalImage->setPalette(paletteForOriginalPanel);
        ui->OriginalImage->setAutoFillBackground(true);

    }
}
