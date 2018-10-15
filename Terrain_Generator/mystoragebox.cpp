#include "mystoragebox.h"
#include "QStylePainter"
#include "QStyleOptionFrame"

MyStorageBox::MyStorageBox(QWidget* parent) : QGroupBox (parent)
{

}
void MyStorageBox::paintEvent(QPaintEvent *)
{
    QStylePainter paint(this);
    QStyleOptionGroupBox option;
    initStyleOption(&option);

    // This should disable frame painting.
    option.features =
    QStyleOptionFrame::Rounded;
    //QStyleOptionFrame::None;

   // paint.drawComplexControl(QStyle::CC_GroupBox, option);
}
