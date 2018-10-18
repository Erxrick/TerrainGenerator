#include "window_primary.h"
#include "ui_window_primary.h"

Window_Primary::Window_Primary(QWidget *parent) : QMainWindow(parent), ui(new Ui::Window_Primary)
{
    ui->setupUi(this);
}

Window_Primary::~Window_Primary()
{
    delete ui;
}

void Window_Primary::on_btnConfirm_clicked()
{
    //save all the data from the preferences
    //do line jazz
    ui->stackedWidget->setCurrentIndex(2);
}

void Window_Primary::on_btnContinue_clicked()
{

    ui->stackedWidget->setCurrentIndex(1);
}

void Window_Primary::on_btnBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Window_Primary::on_btnImageLoad_clicked()
{

}
