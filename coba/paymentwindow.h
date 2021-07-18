#ifndef PAYMENTWINDOW_H
#define PAYMENTWINDOW_H

#include <QWidget>
//#include "utama.h"

namespace Ui {
class PaymentWindow;
}

class PaymentWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PaymentWindow(QWidget *parent = nullptr);
    ~PaymentWindow();

public slots:
//   void openUtama();

private slots:

    void on_payButton_clicked();

private:
    Ui::PaymentWindow *ui;
//    Utama *mUtama;
};

#endif // PAYMENTWINDOW_H
