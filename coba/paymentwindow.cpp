#include "paymentwindow.h"
#include "ui_paymentwindow.h"
#include "paymentStatus.h"
#include "QMessageBox"


PaymentWindow::PaymentWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaymentWindow)
{
    ui->setupUi(this);
}

PaymentWindow::~PaymentWindow()
{
    delete ui;
}


QString cardNumberValid = "1111222233334444";
QString nameValid = "Nama Asli";
QString expiryDateValid = "0112";
QString cvvValid = "567";

void PaymentWindow::on_pushButton_clicked()
{
    QString cardNumber = ui->lineEdit_number->text();
    QString name = ui->lineEdit_name->text();
    QString expiryDate = ui->lineEdit_date->text();
    QString cvv = ui->lineEdit_cvv->text();

    if(cardNumber == cardNumberValid){
        if(name == nameValid){
            if(expiryDate == expiryDateValid){
                if(cvv == cvvValid){
                    QMessageBox::information(this, "Payment Status", "Payment Success");

                }else{
                    QMessageBox::information(this, "Payment Status", "Payment Failed");
                }
            }else{
                QMessageBox::information(this, "Payment Status", "Payment Failed");
            }
        }else{
            QMessageBox::information(this, "Payment Status", "Payment Failed");
        }
    }else{
        QMessageBox::information(this, "Payment Status", "Payment Failed");
    }
}

