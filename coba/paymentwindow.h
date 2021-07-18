#ifndef PAYMENTWINDOW_H
#define PAYMENTWINDOW_H

#include <QWidget>

namespace Ui {
class PaymentWindow;
}

class PaymentWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PaymentWindow(QWidget *parent = nullptr);
    ~PaymentWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PaymentWindow *ui;
};

#endif // PAYMENTWINDOW_H
