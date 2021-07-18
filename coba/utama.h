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

//    void on_Pow_Ch_1_clicked(bool checked);

    void on_V_Slider_1_valueChanged(int value);

    void on_V_Slider_2_valueChanged(int value);

    void on_V_Slider_3_valueChanged(int value);

    void on_V_Slider_4_valueChanged(int value);

    void on_V_Slider_5_valueChanged(int value);

    void on_V_Slider_6_valueChanged(int value);

    void on_V_Slider_7_valueChanged(int value);

    void on_V_Slider_8_valueChanged(int value);

    void on_I_Slider_1_valueChanged(int value);

    void on_I_Slider_2_valueChanged(int value);

    void on_I_Slider_3_valueChanged(int value);

    void on_I_Slider_4_valueChanged(int value);

    void on_I_Slider_5_valueChanged(int value);

    void on_I_Slider_6_valueChanged(int value);

    void on_I_Slider_7_valueChanged(int value);

    void on_I_Slider_8_valueChanged(int value);

private:
    Ui::Utama *ui;
    Subscribe *mSubscribe;
//    float sliderToSpin(float);
};

#endif // UTAMA_H
