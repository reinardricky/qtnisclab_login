#include "subscribe.h"
#include "ui_subscribe.h"

Subscribe::Subscribe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Subscribe)
{
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    setWindowFlags(Qt::Window
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
//    connect(ui->Paysub, SIGNAL(click()), this, SLOT(openUtama()))
    connect(ui->Paysub, SIGNAL(click()), this, SLOT(openPayment()));
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

void Subscribe::openPayment()
{
    mPayment=new PaymentWindow();
    mPayment->show();
}

void Subscribe::on_Paysub_clicked()
{
//    openUtama();
    openPayment();
    close();
}

