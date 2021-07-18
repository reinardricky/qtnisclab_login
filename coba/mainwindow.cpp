#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Login, SIGNAL(click()), this, SLOT(openSubscribe()));
    connect(ui->Login, SIGNAL(click()), this, SLOT(openUtama()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openSubscribe()
{
    mSubscribe=new Subscribe();
    mSubscribe->show();
}

void MainWindow::openUtama()
{
    mUtama=new Utama();
    mUtama->show();
}

void MainWindow::on_Login_clicked()
{
    QString username= ui->LineEdit_username->text();
    QString password= ui->LineEdit_password->text();

    if(username=="orangsudahsubs" && password=="12345"){
        openUtama();
        close();

    }else if (username=="tidaksubs" && password=="54321") {
        openUtama();
        openSubscribe();
        close();
    }else if(username=="" && password==""){
        QMessageBox::warning(this,"Login","Username and password is empty");
    }else if(username==""){
        QMessageBox::warning(this,"Login","Username is empty");
    }else if(password==""){
        QMessageBox::warning(this,"Login","Password is empty");
    }else{
        QMessageBox::warning(this,"Login","Username and password didn't match");
    }

}

