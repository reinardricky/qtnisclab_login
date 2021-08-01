#ifndef LICENSEWINDOW_H
#define LICENSEWINDOW_H

#include <QWidget>
#include <QDialog>
#include "utama.h"
//#include "purchasewindow.h"

namespace Ui {
class LicenseWindow;
}

class LicenseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LicenseWindow(QWidget *parent = nullptr);
    ~LicenseWindow();
public slots:
   void openUtama();


private slots:
    void on_Next_clicked();

    void on_Back_clicked();

private:
    Ui::LicenseWindow *ui;
    Utama *mUtama;
//    PurchaseWindow *mPurchaseWindow;

};

#endif // LICENSEWINDOW_H
