#include "subscribe.h"
#include "ui_subscribe.h"

Subscribe::Subscribe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Subscribe)
{
    ui->setupUi(this);
//    connect(ui->Paysub, SIGNAL(click()), this, SLOT(openUtama()));
}

Subscribe::~Subscribe()
{
    delete ui;
}

//void Subscribe::openUtama()
//{
//    mUtama=new Utama();
//    mUtama->show();
//}

void Subscribe::on_Paysub_clicked()
{
//    openUtama();
    close();
}

