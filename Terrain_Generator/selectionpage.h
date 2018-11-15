#ifndef SELECTIONPAGE_H
#define SELECTIONPAGE_H

#include <QWidget>
#include <QImage>
#include <QStack>
#include <QColor>
#include <QMap>


class SelectionPage : public QWidget
{
    Q_OBJECT
public:
    explicit SelectionPage(QWidget *parent = nullptr);

    void AddSelectionLine(const QPoint& point);



    QWidget* OriginalImagePage;
    QWidget* CurrentImagePage;
    bool InProgress = false;
    QImage selectionPaneImage;



    QStack<QImage> EditedImages;

    bool CheckColorTolerance(QColor* color);
    QList<QPoint> CheckForSelection(const QPoint& point);
    void PushMapToStorage();
    void UndoLastLine();

    void ColorImageBasedOnPixelMap(const QColor& color);


signals:

public slots:


private:

    QMap<QString, QPoint> pixelMap;

    QList<QMap<QString, QPoint>> pixelStorage;

    struct LineSegment
    {
        QPoint left;
        QPoint right;
        LineSegment(const QPoint& leftMost, const QPoint& rightMost);
        LineSegment(const QPoint& singlePoint);
        LineSegment();
        QString toString();
    };


    LineSegment DetectNewLineSegment(const QPoint& point);
    void AddLineToPixelMap(const LineSegment& line);
    static QString PointToString(const QPoint& point);
    QPoint CheckYAxisOfLine(const LineSegment& line, bool above);

};

#endif // SELECTIONPAGE_H
