#ifndef CONFIRMATIONPAGE_H
#define CONFIRMATIONPAGE_H

#include <QWidget>



class ConfirmationPage : public QWidget
{
    Q_OBJECT
public:
    explicit ConfirmationPage(QWidget *parent = nullptr);

    QWidget* OriginalImagePage;
    QWidget* CurrentImagePage;
signals:

public slots:
};

#endif // CONFIRMATIONPAGE_H
