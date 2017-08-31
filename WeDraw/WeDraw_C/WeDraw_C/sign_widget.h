#ifndef SIGN_WIDGET_H
#define SIGN_WIDGET_H

#include <QWidget>
#include <QtNetwork>
namespace Ui {
class Sign_Widget;
}

class Sign_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Sign_Widget(QWidget *parent = 0);
    ~Sign_Widget();

private slots:
    void on_Sign_BTN_clicked();

private:
    Ui::Sign_Widget *ui;
};

#endif // SIGN_WIDGET_H
