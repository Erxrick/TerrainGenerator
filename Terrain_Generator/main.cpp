#include "mainwindow.h"
#include "window_primary.h"
#include <QApplication>
#include <QOpenGLWidget>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Window_Primary w;
    w.show();


    return a.exec();
}

