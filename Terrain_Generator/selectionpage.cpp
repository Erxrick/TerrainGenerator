#include "selectionpage.h"
#include <iterator>
#include <QDebug>

SelectionPage::SelectionPage(QWidget *parent) : QWidget(parent)
{

}

SelectionPage::LineSegment::LineSegment(const QPoint& leftMost, const QPoint& rightMost)
{
    left = leftMost;
    right = rightMost;
}
SelectionPage::LineSegment::LineSegment(const QPoint& singlePoint)
{
    left = singlePoint;
    right = singlePoint;
}
SelectionPage::LineSegment::LineSegment()
{
    QPoint illegal = QPoint(-1, -1);

    left  = illegal;
    right = illegal;
}
QString SelectionPage::LineSegment::toString()
{
    return QString(PointToString(left) + ", " +PointToString(right));
}

///Used to check the color of the pixel based off of my toelrance value
bool SelectionPage::CheckColorTolerance(QColor* color)
{
    int r, g, b;

    color->QColor::getRgb(&r, &g, &b);

    int tolerance = 60;

    if(r > tolerance || g > tolerance || b > tolerance)
        return false;
    return true;
}


///This is a temporary solution for demonstration that my algorithm is working
void SelectionPage::ColorImageBasedOnPixelMap()
{
    for(auto iter = pixelMap.begin();iter != pixelMap.end();iter++)
    {
//       selectionPaneImage.setPixel(iter.value(), Qt::GlobalColor::white);
        selectionPaneImage.setPixelColor(iter.value(), Qt::GlobalColor::green);
//        qDebug(qUtf8Printable(PointToString(iter.value())));
    }

    qDebug(qUtf8Printable(QString("Size of the pixelMap: ") + QString::number(pixelMap.size())));

}



///Not fully implemented, can use polish as well
void SelectionPage::AddSelectionLine(const QPoint& point)
{
    //reset pixelmap for new line detection **TEMPORARY**
    pixelMap.clear();

    //Check initial point, may want to implement a radius to check around the clicked point to make the program easier
    QColor pCol = selectionPaneImage.pixelColor(point);
    if(CheckColorTolerance(&pCol))
    {
        //make a fresh stack for the lines to be added to
        QStack<LineSegment> lineStack = QStack<LineSegment>();
        //detect first line segment, then add all of these points to a map
        LineSegment line = DetectNewLineSegment(point);
        AddLineToPixelMap(line);
        lineStack.push(line);

        while(!lineStack.isEmpty())
        {
            LineSegment curLine = lineStack.pop();
            //First we walk each integer point on the line segment, checking the points directly above it.
            //if find color within threshold, add line to stack
            QPoint tempPoint = curLine.left;

            tempPoint = CheckYAxisOfLine(curLine, true);
     //       qDebug(qUtf8Printable(QString(PointToString(tempPoint) + ", " + PointToString(curLine.left))));
            while ((PointToString(tempPoint) != PointToString(curLine.left)) && (!pixelMap.contains(PointToString(tempPoint))))
            {
    //            qDebug(qUtf8Printable(QString(PointToString(tempPoint) + ", " + PointToString(curLine.left))));
    //            qDebug("Inside the While of my algorithm");
                LineSegment newLine = DetectNewLineSegment(tempPoint);
                AddLineToPixelMap(newLine);
                lineStack.push(newLine);
                tempPoint = CheckYAxisOfLine(curLine, true);


            }

        //Then First we walk each integer point on the line segment, checking the point directly below it.
        //if find color within threshold, add line to stack
            tempPoint = CheckYAxisOfLine(curLine, false);

            while (PointToString(tempPoint) != PointToString(curLine.left))
            {

                LineSegment newLine = DetectNewLineSegment(tempPoint);
                AddLineToPixelMap(newLine);
                lineStack.push(newLine);
                tempPoint = CheckYAxisOfLine(curLine, false);
            }
        }
    }
}

///Check to the left and right of this point and select the left most and right most points that are valid and make a line segment
SelectionPage::LineSegment SelectionPage::DetectNewLineSegment(const QPoint& point)
{
    LineSegment returnLine = LineSegment(point);
    //for finding the most left point in the line
    QPoint currentPoint = point;
    bool moreLeft = true;
    while(moreLeft && selectionPaneImage.valid(currentPoint))
    {
        currentPoint = QPoint(currentPoint.x()-1, currentPoint.y());
        if(selectionPaneImage.valid(currentPoint) && !pixelMap.contains(PointToString(currentPoint)))
        {
            QColor pCol = selectionPaneImage.pixelColor(currentPoint);
            if(CheckColorTolerance(&pCol))
            {
                returnLine.left = currentPoint;
            }
            else moreLeft = false;
        }
        else moreLeft = false;
    }
    //for finding the most right point in the line
    currentPoint = point;
    bool moreRight = true;
    while(moreRight && selectionPaneImage.valid(currentPoint))
    {
        currentPoint = QPoint(currentPoint.x()+1, currentPoint.y());
        if(selectionPaneImage.valid(currentPoint) && !pixelMap.contains(PointToString(currentPoint)))
        {
            QColor pCol = selectionPaneImage.pixelColor(currentPoint);
            if(CheckColorTolerance(&pCol))
            {
                returnLine.right = currentPoint;
            }
            else moreRight = false;
        }
        else moreRight = false;
    }
  //  qDebug(qUtf8Printable("This is the line that was detected: " + PointToString(returnLine.left) + ", " + PointToString(returnLine.right)));
    return returnLine;
}

///The bool is used to determine if checking above or below the line.
///Returns the line's leftmost point if it does not detect anything or if it goes outside the bounds of the image.
///Will return on the first point detected that is considered valid.
QPoint SelectionPage::CheckYAxisOfLine(const LineSegment& line, bool above)
{

    //SET UP A FUCKING DEBUGGER AND DEBUG THIS SHIT CAUSE ITS BEING A BITCH


    //useful things to shorten the code
    int yOffSet = (above) ? 1 : -1;
    int x = line.left.x();
    int y = line.left.y();
    int length = line.right.x() - x;
    int rightX = line.right.x();



    //qDebug("Beginning of Check Y Axis");

    //Check to make sure I stay within bounds of the image
    if(!selectionPaneImage.valid(QPoint(line.left.x(), line.left.y() + yOffSet)))
        return line.left;


  //  qDebug(qUtf8Printable(QString(PointToString(line.left) + ", + length: " + QString::number(length) + " = "+ PointToString(line.right))));

    QPoint curPoint = QPoint(x, y + yOffSet);
    for(int i = 0;(i + x) < (rightX) ;++i)
    {
    //    qDebug(qUtf8Printable(QString::number(i+x)));
        curPoint.setX(x+i);
    //    qDebug(qUtf8Printable("Checking point: " + PointToString(curPoint)));
        //Check to make sure the current point isn't already in the pixelmap
        if(!pixelMap.contains(PointToString(curPoint)))
        {
            QColor pCol = selectionPaneImage.pixelColor(curPoint);
            if(CheckColorTolerance(&pCol))
            {
                return curPoint;
            }
        }
    }

    return line.left;
}
void SelectionPage::AddLineToPixelMap(const LineSegment& line)
{
    QPoint currentPoint = line.left;

//    if(PointToString(line.left) == PointToString(line.right))
//    {
//        pixelMap.insert(PointToString(currentPoint), currentPoint);

//        return;
//    }

    while(PointToString(currentPoint) != PointToString(line.right))
    {
        pixelMap.insert(PointToString(currentPoint), currentPoint);


        currentPoint.setX(currentPoint.x()+1);
    }
    //THIS MIGHT NOT WORK
    pixelMap.insert(PointToString(line.right), line.right);

 //  qDebug();
}

QString SelectionPage::PointToString(const QPoint& point)
{
    return QString("(" + QString::number(point.x()) +", " + QString::number(point.y()) + ")");
}



