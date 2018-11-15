#include "imageholder.h"
#include <QMouseEvent>

ImageHolder::ImageHolder(QWidget * parent, Qt::WindowFlags f) : QLabel( parent )
{

}

ImageHolder::~ImageHolder()
{

}



void ImageHolder::mousePressEvent(QMouseEvent* event) {

    ///I want to look into if I can implement a mouse down and
    /// a mouse released to draw a line
    /// and then everything under the line is checked

//    QEvent::Type typeOfPress = event->type();
    emit clicked(event);
}

//void ImageHolder::paintEvent(QPaintEvent* event)
//{

//}

