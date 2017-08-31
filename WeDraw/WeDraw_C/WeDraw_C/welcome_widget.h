#ifndef WELCOME_WIDGET_H
#define WELCOME_WIDGET_H

#include <QWidget>

namespace Ui {
class Welcome_Widget;
}

class Welcome_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome_Widget(QWidget *parent = 0);
    ~Welcome_Widget();

private:
    Ui::Welcome_Widget *ui;
};

#endif // WELCOME_WIDGET_H
