#include "purchasewindow.h"
#include "ui_purchasewindow.h"
#include <QDesktopServices>
#include <QUrl>

PurchaseWindow::PurchaseWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PurchaseWindow)
{
    ui->setupUi(this);
    connect(ui->AlreadyPur, SIGNAL(click()), this, SLOT(openLicenseWindow()));

}

PurchaseWindow::~PurchaseWindow()
{
    delete ui;
}

void PurchaseWindow::openLicenseWindow()
{
    mLicenseWindow=new LicenseWindow(this);
    mLicenseWindow->show();
}

void PurchaseWindow::on_Buy_clicked()
{
    QString link="http://www.nicslab.com";
    QDesktopServices::openUrl(QUrl(link));
}


void PurchaseWindow::on_AlreadyPur_clicked()
{
    openLicenseWindow();
//    close();
}

