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
    setWindowFlags(Qt::Window
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint);
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


QString cardNumberValid = "1111 2222 3333 4444";
QString nameValid = "Nama Asli";
QString expiryDateValid = "01/12";
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

