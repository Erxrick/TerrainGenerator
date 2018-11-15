#ifndef IMAGEHOLDER_H
#define IMAGEHOLDER_H

#include <QLabel>
#include <QImage>
#include <Qt>

class ImageHolder : public QLabel
{
    Q_OBJECT
public:
    explicit ImageHolder(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~ImageHolder();


signals:
    void clicked(QMouseEvent* event);

protected:
    void mousePressEvent(QMouseEvent* event);
//    void paintEvent(QPaintEvent* event);

//    QImage* image;

};

#endif // IMAGEHOLDER_H
