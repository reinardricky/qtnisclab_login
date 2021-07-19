#ifndef UTAMA_H
#define UTAMA_H
#include "settings.h"
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
   void openSettings();

private slots:

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

    void on_Pow_Ch_1_clicked();

    void on_Pow_Ch_2_clicked();

    void on_Pow_Ch_3_clicked();

    void on_Pow_Ch_4_clicked();

    void on_Pow_Ch_5_clicked();

    void on_Pow_Ch_6_clicked();

    void on_Pow_Ch_7_clicked();

    void on_Pow_Ch_8_clicked();

    void on_Lock_1_stateChanged(int arg1);

    void on_Lock_2_stateChanged(int arg1);

    void on_Lock_3_stateChanged(int arg1);

    void on_Lock_4_stateChanged(int arg1);

    void on_Lock_5_stateChanged(int arg1);

    void on_Lock_6_stateChanged(int arg1);

    void on_Lock_7_stateChanged(int arg1);

    void on_Lock_8_stateChanged(int arg1);

    void on_Settings_clicked();

private:
    Ui::Utama *ui;
    Settings *msettings;
//    float sliderToSpin(float);
};

#endif // UTAMA_H
