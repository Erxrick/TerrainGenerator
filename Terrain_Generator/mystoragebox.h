#ifndef MYSTORAGEBOX_H
#define MYSTORAGEBOX_H

#include <QGroupBox>

class MyStorageBox : public QGroupBox
{
public:
    MyStorageBox(QWidget* parent = nullptr);
    void paintEvent(QPaintEvent *) override;
};

#endif // MYSTORAGEBOX_H
