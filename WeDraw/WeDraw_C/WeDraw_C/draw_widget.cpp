#include "draw_widget.h"
#include "ui_draw_widget.h"

Draw_Widget::Draw_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Draw_Widget)
{
    ui->setupUi(this);
    Client=new QTcpSocket();
    Client->connectToHost(QHostAddress(""),20877);
    connect(Client,SIGNAL(readyRead()),this,SLOT(ReadMessage()));


}

Draw_Widget::~Draw_Widget()
{
    delete ui;
}



QString Draw_Widget::ReadMessage(){
    QByteArray A_BA_STR=Client->readAll();
    return QString::fromLocal8Bit(A_BA_STR);
}


void Draw_Widget::SendMessage(QString Send_Data){
    QByteArray B_Data=Send_Data.toLocal8Bit();
    Client->write(B_Data);
}
