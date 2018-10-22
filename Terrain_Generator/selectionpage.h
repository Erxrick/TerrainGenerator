#ifndef SELECTIONPAGE_H
#define SELECTIONPAGE_H

#include <QWidget>

class SelectionPage : public QWidget
{
    Q_OBJECT
public:
    explicit SelectionPage(QWidget *parent = nullptr);

    QWidget* OriginalImagePage;
    QWidget* CurrentImagePage;
signals:

public slots:
};

#endif // SELECTIONPAGE_H
