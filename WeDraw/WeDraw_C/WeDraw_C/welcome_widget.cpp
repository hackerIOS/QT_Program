#include "welcome_widget.h"
#include "ui_welcome_widget.h"
Welcome_Widget::Welcome_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Welcome_Widget)
{
    ui->setupUi(this);
}

Welcome_Widget::~Welcome_Widget()
{
    delete ui;
}
