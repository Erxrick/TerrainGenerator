#ifndef WINDOW_PRIMARY_H
#define WINDOW_PRIMARY_H

#include <QMainWindow>

namespace Ui {
class Window_Primary;
}

class Window_Primary : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window_Primary(QWidget *parent = nullptr);
    ~Window_Primary();

private:
    Ui::Window_Primary *ui;
};

#endif // WINDOW_PRIMARY_H
