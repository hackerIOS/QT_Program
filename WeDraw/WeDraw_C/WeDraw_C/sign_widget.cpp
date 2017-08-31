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

void Sign_Widget::on_Sign_BTN_clicked()
{

}
