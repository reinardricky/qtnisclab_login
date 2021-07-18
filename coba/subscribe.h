#ifndef SUBSCRIBE_H
#define SUBSCRIBE_H

#include <QWidget>
#include "paymentwindow.h"
//#include "utama.h"

namespace Ui {
class Subscribe;
}

class Subscribe : public QWidget
{
    Q_OBJECT

public:
    explicit Subscribe(QWidget *parent = nullptr);
    ~Subscribe();
public slots:
    void openPayment();
//   void openUtama();

private slots:

    void on_Paysub_clicked();

private:
    Ui::Subscribe *ui;
    PaymentWindow *mPayment;
//    Utama *mUtama;
};

#endif // SUBSCRIBE_H
