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

private slots:
    void on_btnConfirm_clicked();

    void on_btnContinue_clicked();

    void on_btnBack_clicked();

    void on_btnImageLoad_clicked();

private:
    Ui::Window_Primary *ui;
};

#endif // WINDOW_PRIMARY_H
