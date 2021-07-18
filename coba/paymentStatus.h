#ifndef PAYMENTSTATUS_H
#define PAYMENTSTATUS_H

#include <QDialog>

namespace Ui {
class paymentprompt;
}

class paymentprompt : public QDialog
{
    Q_OBJECT

public:
    explicit paymentprompt(QWidget *parent = nullptr);
    ~paymentprompt();

private:
    Ui::paymentprompt *ui;
};

#endif // PAYMENTSTATUS_H
