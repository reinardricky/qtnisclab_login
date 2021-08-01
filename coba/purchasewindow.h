#ifndef PURCHASEWINDOW_H
#define PURCHASEWINDOW_H

#include <QWidget>
#include "licensewindow.h"

namespace Ui {
class PurchaseWindow;
}

class PurchaseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PurchaseWindow(QWidget *parent = nullptr);
    ~PurchaseWindow();

public slots:
    void openLicenseWindow();

private slots:
    void on_Buy_clicked();

    void on_AlreadyPur_clicked();

private:
    Ui::PurchaseWindow *ui;
    LicenseWindow *mLicenseWindow;
};

#endif // PURCHASEWINDOW_H
