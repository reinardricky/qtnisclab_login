#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Login, SIGNAL(click()), this, SLOT(openSubscribe()));
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


void MainWindow::on_Login_clicked()
{
    openSubscribe();
    close();
}

