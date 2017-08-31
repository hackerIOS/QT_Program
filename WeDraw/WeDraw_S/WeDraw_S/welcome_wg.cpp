#include "welcome_wg.h"
#include "ui_welcome_wg.h"

Welcome_WG::Welcome_WG(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Welcome_WG)
{
    ui->setupUi(this);
}

Welcome_WG::~Welcome_WG()
{
    delete ui;
}
