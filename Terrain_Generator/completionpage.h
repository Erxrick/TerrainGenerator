#ifndef COMPLETIONPAGE_H
#define COMPLETIONPAGE_H

#include <QWidget>

class GLWidget;

class CompletionPage : public QWidget
{
    Q_OBJECT
public:
    explicit CompletionPage(QWidget *parent = nullptr);

    GLWidget* glWidget;

signals:

public slots:
};

#endif // COMPLETIONPAGE_H
