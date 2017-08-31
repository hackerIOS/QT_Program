#ifndef WELCOME_WG_H
#define WELCOME_WG_H

#include <QWidget>


namespace Ui {
class Welcome_WG;
}

class Welcome_WG : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome_WG(QWidget *parent = 0);
    ~Welcome_WG();

private:
    Ui::Welcome_WG *ui;
};

#endif // WELCOME_WG_H
