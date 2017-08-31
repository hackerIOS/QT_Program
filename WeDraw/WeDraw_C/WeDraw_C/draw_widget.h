#ifndef DRAW_WIDGET_H
#define DRAW_WIDGET_H

#include <QWidget>
#include <QtNetwork>
namespace Ui {
class Draw_Widget;
}

class Draw_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Draw_Widget(QWidget *parent = 0);
    ~Draw_Widget();
    QTcpSocket* Client;

    void SendMessage(QString Send_Data);



private slots:
    QString ReadMessage();


private:
    Ui::Draw_Widget *ui;
};

#endif // DRAW_WIDGET_H
