#ifndef SIGN_WIDGET_H
#define SIGN_WIDGET_H

#include <QWidget>
#include <QtNetWork>


namespace Ui {
class Sign_Widget;
}

class Sign_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Sign_Widget(QWidget *parent = 0);
    ~Sign_Widget();
    QTcpServer* Server;
    QTcpSocket* ClientConnect;
    int Start_ORN=0;//1->start
    int Send_Data_Type;//0 is (X,Y,T_IP)  1 is (STR,T_IP)



private slots:
    void readClient_INF();
    void NewConncetUser();
    void on_Start_Stop_BTN_clicked();

private:
    Ui::Sign_Widget *ui;
};

#endif // SIGN_WIDGET_H
