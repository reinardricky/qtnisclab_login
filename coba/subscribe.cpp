#include "subscribe.h"
#include "ui_subscribe.h"

Subscribe::Subscribe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Subscribe)
{
    ui->setupUi(this);
}

Subscribe::~Subscribe()
{
    delete ui;
}
