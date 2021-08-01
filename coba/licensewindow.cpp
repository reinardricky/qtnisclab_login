#include "licensewindow.h"
#include "ui_licensewindow.h"
#include <QDialog>
#include <QMessageBox>

LicenseWindow::LicenseWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LicenseWindow)
{
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    setWindowFlags(Qt::Window
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    connect(ui->Next, SIGNAL(click()), this, SLOT(openUtama()));
//    connect(ui->Back, SIGNAL(click()), this, SLOT(openPurchaseWindow()));
}

LicenseWindow::~LicenseWindow()
{
    delete ui;
}

void LicenseWindow::openUtama()
{
    mUtama=new Utama();
    mUtama->show();
}

//void LicenseWindow::openPurchaseWindow()
//{
//    mPurchaseWindow=new PurchaseWindow(this);
//    mPurchaseWindow->show();
//}

void LicenseWindow::on_Next_clicked()
{
    QString LKey= ui->LicenseKey->text();

    if(LKey=="KA48-BDR9-Q27BL-RBQ8"){
        openUtama();
        close();
    }else{
        QMessageBox::warning(this,"Warning","Wrong License Key");
   }
}


void LicenseWindow::on_Back_clicked()
{
//    openPurchaseWindow();
    close();
}

