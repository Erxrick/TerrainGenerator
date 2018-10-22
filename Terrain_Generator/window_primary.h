#ifndef WINDOW_PRIMARY_H
#define WINDOW_PRIMARY_H

#include <QMainWindow>


//----------------------
//#include "mainmenupage.h"
//#include "selectionpage.h"
//#include "confirmationpage.h"
//#include "completionpage.h"
//-----------------------
class MainMenuPage;
class SelectionPage;
class ConfirmationPage;
class CompletionPage;

namespace Ui {
class Window_Primary;
}

class Window_Primary : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window_Primary(QWidget *parent = nullptr);


    void resizeEvent(QResizeEvent* event) override;

    MainMenuPage*       mainMenuPage;
    SelectionPage*      selectionPage;
    ConfirmationPage*   confirmationPage;
    CompletionPage*     completionPage;


  //  QObjectList children;

private slots:
    void on_btnConfirm_clicked();

    void on_btnContinue_clicked();

    void on_btnBack_clicked();

    void on_btnImageLoad_clicked();

    void on_toolBtnOutputDirectory_clicked();

private:
    Ui::Window_Primary *ui;

    void updateImages();
    QPixmap primaryImage;
};

#endif // WINDOW_PRIMARY_H
