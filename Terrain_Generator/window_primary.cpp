#include "window_primary.h"
#include "ui_window_primary.h"
#include "qfiledialog.h"
#include "qmessagebox.h"

#include "mainmenupage.h"
#include "selectionpage.h"
#include "confirmationpage.h"
#include "completionpage.h"

#include "imageholder.h"


#include <QDebug>
#include <QMouseEvent>

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
        selectionPage->OriginalImagePage = ui->OriginalImageSelection;

    }

// Confirmation Page Setting of Pointer Stuff for ease of access
    {
        confirmationPage    = ui->page3;
        confirmationPage->CurrentImagePage  = ui->CurrentConfirmationPanel;
        confirmationPage->OriginalImagePage = ui->OriginalImageConfirmation;
    }

// Completion Page Setting of Pointer Stuff for ease of access
    {
        completionPage              = ui->page4;
        completionPage->glWidget    = ui->openGlWidget;

    }


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

        QPixmap scaledImageForOriginalPanel = primaryImage.scaled(ui->OriginalImageSelection->size(), Qt::IgnoreAspectRatio);
        QPalette paletteForOriginalPanel;
        paletteForOriginalPanel.setBrush(QPalette::Background, scaledImageForOriginalPanel);
        ui->OriginalImageSelection->setPalette(paletteForOriginalPanel);
        ui->OriginalImageSelection->setAutoFillBackground(true);

        QPixmap scaledImageForConfirmationPanel = primaryImage.scaled(ui->OriginalImageConfirmation->size(), Qt::IgnoreAspectRatio);
        QPalette paletteForOriginalConfirmationPanel;
        paletteForOriginalConfirmationPanel.setBrush(QPalette::Background, scaledImageForConfirmationPanel);
        ui->OriginalImageConfirmation->setPalette(paletteForOriginalConfirmationPanel);
        ui->OriginalImageConfirmation->setAutoFillBackground(true);


        //Get the first SelectionPage set up with the stack
        selectionPage->EditedImages.clear();
        selectionPage->selectionPaneImage = primaryImage.toImage();
        selectionPage->EditedImages.push_front(selectionPage->selectionPaneImage);



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

        QPixmap scaledImageForOriginalPanel = primaryImage.scaled(ui->OriginalImageSelection->size(), Qt::IgnoreAspectRatio);
        QPalette paletteForOriginalPanel;
        paletteForOriginalPanel.setBrush(QPalette::Background, scaledImageForOriginalPanel);
        ui->OriginalImageSelection->setPalette(paletteForOriginalPanel);
        ui->OriginalImageSelection->setAutoFillBackground(true);

        QPixmap scaledImageForConfirmationPanel = primaryImage.scaled(ui->OriginalImageConfirmation->size(), Qt::IgnoreAspectRatio);
        QPalette paletteForOriginalConfirmationPanel;
        paletteForOriginalConfirmationPanel.setBrush(QPalette::Background, scaledImageForConfirmationPanel);
        ui->OriginalImageConfirmation->setPalette(paletteForOriginalConfirmationPanel);
        ui->OriginalImageConfirmation->setAutoFillBackground(true);



        //Grab the top Image from the stack and then resize it for the panel
        selectionPage->selectionPaneImage = selectionPage->EditedImages.top();
        selectionPage->selectionPaneImage = selectionPage->selectionPaneImage.scaled(ui->CurrentSelectionPage->size(), Qt::IgnoreAspectRatio);
        selectionPage->selectionPaneImage = selectionPage->selectionPaneImage.convertToFormat(QImage::Format::Format_RGB32); //setting it to be a 32 bit image
//        QPalette paletteForCurrentSelectionPanel;
//        paletteForCurrentSelectionPanel.setBrush(QPalette::Background, selectionPage->selectionPaneImage);
//        ui->CurrentSelectionPage->setPalette(paletteForCurrentSelectionPanel);
//        ui->CurrentSelectionPage->setAutoFillBackground(true);

        ui->lblSelectionImage->setPixmap(QPixmap::fromImage(selectionPage->selectionPaneImage));


    }
    else
    {
        ui->OriginalImageP1->setAutoFillBackground(false);
    }
}


// Page Transition Events Below----------------------------------------------


///This is for the main page to go to the selection
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

///This is for the Selection Page to go back to the Main Menu Page
void Window_Primary::on_btnBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    updateImages();

}

///This is for the selection page to go to the Confirmation Page
void Window_Primary::on_btnConfirm_clicked()
{
    //save all the data from the preferences
    //do line jazz
    ui->stackedWidget->setCurrentIndex(2);
    updateImages();

}

///This is for the Confirmation Page to go to the Selection Page
void Window_Primary::on_btnBackToSelection_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    updateImages();
}

///This is for the Confirmation Page to go to the Completion Page
void Window_Primary::on_btnConfirmOnConfirmation_clicked()
{
    QMessageBox::StandardButtons response = QMessageBox::question(this, tr("Confirmation of Generation"), tr("Are you sure you would like to begine generation? This may take some time depending on your settings."), (QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No), QMessageBox::StandardButton::Yes);
    if(response.testFlag(QMessageBox::StandardButton::Yes))
    {
        ui->stackedWidget->setCurrentIndex(3);
        updateImages();
        //TODO
        //Build the model from extracted data

        completionPage->glWidget->SetActive(true);
    }

}

/////This is for the Final Page to go back to the Confirmation Page
void Window_Primary::on_btnBackToConfirmation_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    updateImages();
    completionPage->glWidget->SetActive(false);
}

/////This is for the Final Page to restart the program
void Window_Primary::on_btnRestart_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    //reset everything here
    primaryImage = QPixmap();
    updateImages();
    completionPage->glWidget->SetActive(false);

}

///This is for the final program to finish and close the application
void Window_Primary::on_btnFinish_clicked()
{
    close();

}

///This is for when the tabs are swapped on the Selection Page
void Window_Primary::on_tabWidget_2_currentChanged(int index)
{
    updateImages();
}

///This is for when the tabs are swapped on the Confirmation Page
void Window_Primary::on_tabWidget_3_currentChanged(int index)
{
    updateImages();
}

///This detects where on the lbl was clicked on the Selection page
void Window_Primary::on_lblSelectionImage_clicked(QMouseEvent * event)
{

    if(!selectionPage->InProgress)
    {
        selectionPage->InProgress = true;
        //this method took 2 hours to figure out how to get working cause im bad & dumb
       // qDebug("thing");
        QString s1 = QString::number(event->x());
        QString s2 = QString::number(event->y());
        QString literal1 = "x:";
        QString literal2 = " y:";


        qDebug(qUtf8Printable(literal1 + s1 + literal2 + s2));

        if(!selectionPage->selectionPaneImage.isNull())
        {
            QPoint point = QPoint(event->x(), event->y());

            //Testing creating a tolerance threshold for pixel analysiss
            int red, green, blue;

            QColor pixelColor = selectionPage->selectionPaneImage.pixelColor(event->x(), event->y());
            pixelColor.QColor::getRgb(&red, &green, &blue);

            bool returnVal = selectionPage->CheckColorTolerance(&pixelColor);

            qDebug(qUtf8Printable(QString::number(returnVal)));

            qDebug(qUtf8Printable(QString::number(true) + "= true"));

            qDebug(qUtf8Printable("Red:" + QString::number(red) + " Green:" + QString::number(green) + " Blue:" + QString::number(blue)));
            qDebug(qUtf8Printable(pixelColor.name()));


            ///Code that is being developed for the magic wand tool
            selectionPage->AddSelectionLine(point);
            selectionPage->ColorImageBasedOnPixelMap();

            selectionPage->EditedImages.push(selectionPage->selectionPaneImage);

            ui->lblSelectionImage->setPixmap(QPixmap::fromImage(selectionPage->selectionPaneImage));
            selectionPage->InProgress = false;
        }

    }
    else
    {
        QMessageBox::warning(this, tr("Terrain Generator"), tr("There is already a process ocurring."));
    }

}
