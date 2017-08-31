#include "sign_widget.h"
#include "ui_sign_widget.h"

Sign_Widget::Sign_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sign_Widget)
{
    ui->setupUi(this);
}

Sign_Widget::~Sign_Widget()
{
    delete ui;
}

void Sign_Widget::on_Start_Stop_BTN_clicked()
{
    if(Start_ORN==0){
        ui->Start_Stop_BTN->setText("Close Server");
        Server=new QTcpServer();
        Server->listen(QHostAddress::Any,2129);
        connect(Server,SIGNAL(newConnection()),this,SLOT(NewConncetUser()));


    }else if(Start_ORN==1){
        ui->Start_Stop_BTN->setText("Open Server");
        Server->close();
    }
}


void Sign_Widget::NewConncetUser(){
    ClientConnect=Server->nextPendingConnection();
    ui->Sign_List->insertItem(0,ClientConnect->peerAddress());

    connect(ClientConnect,SIGNAL(readyRead()),this,SLOT(readClient_INF()));

}


void Sign_Widget::readClient_INF(){
    QString Accept_STR;
    QByteArray A_BA_STR=ClientConnect->readAll();
    Accept_STR=QString::fromLocal8Bit(A_BA_STR);

    if(Send_Data_Type==0){

    }

}
