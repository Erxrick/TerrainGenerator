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
