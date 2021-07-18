#ifndef UTAMA_H
#define UTAMA_H
#include "subscribe.h"
#include <QWidget>

namespace Ui {
class Utama;
}

class Utama : public QWidget
{
    Q_OBJECT

public:
    explicit Utama(QWidget *parent = nullptr);
    ~Utama();
public slots:
   void openSubscribe();

private slots:
    void on_upgrade_clicked();

    void on_Pow_Ch_1_toggled(bool checked);

    void on_Pow_Ch_1_clicked(bool checked);

    void on_Pow_Ch_1_clicked();

private:
    Ui::Utama *ui;
    Subscribe *mSubscribe;
//    float sliderToSpin(float);
};

#endif // UTAMA_H
