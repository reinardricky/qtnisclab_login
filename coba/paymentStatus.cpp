#include "paymentStatus.h"
#include "ui_paymentStatus.h"

paymentStatus::paymentStatus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paymentStatus)
{
    ui->setupUi(this);
}

paymentprompt::~paymentStatus()
{
    delete ui;
}
