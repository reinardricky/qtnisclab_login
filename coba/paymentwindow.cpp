#include "paymentwindow.h"
#include "ui_paymentwindow.h"
#include "QMessageBox"
#include "mainwindow.h"

PaymentWindow::PaymentWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaymentWindow)
{
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    ui->setupUi(this);
//    connect(ui->payButton, SIGNAL(click()), this, SLOT(openUtama()));
}

PaymentWindow::~PaymentWindow()
{
    delete ui;
}

//void PaymentWindow::openUtama()
//{
//    mUtama=new Utama();
//    mUtama->show();
//}


QString cardNumberValid = "1111222233334444";
QString nameValid = "Nama Asli";
QString expiryDateValid = "0112";
QString cvvValid = "567";

void PaymentWindow::on_payButton_clicked()
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
//                    openUtama();
                    close();

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

