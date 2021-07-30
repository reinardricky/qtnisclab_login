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

    void on_V_Spin_1_valueChanged(double arg1);

    void on_V_Spin_2_valueChanged(double arg1);

    void on_V_Spin_3_valueChanged(double arg1);

    void on_V_Spin_4_valueChanged(double arg1);

    void on_V_Spin_5_valueChanged(double arg1);

    void on_V_Spin_6_valueChanged(double arg1);

    void on_V_Spin_7_valueChanged(double arg1);

    void on_V_Spin_8_valueChanged(double arg1);

    void on_I_Spin_1_valueChanged(double arg1);

    void on_I_Spin_2_valueChanged(double arg1);

    void on_I_Spin_3_valueChanged(double arg1);

    void on_I_Spin_4_valueChanged(double arg1);

    void on_I_Spin_5_valueChanged(double arg1);

    void on_I_Spin_6_valueChanged(double arg1);

    void on_I_Spin_7_valueChanged(double arg1);

    void on_I_Spin_8_valueChanged(double arg1);

    void v1_range_changed(double arg1);

    void v2_range_changed(double arg1);

    void v3_range_changed(double arg1);

    void v4_range_changed(double arg1);

    void v5_range_changed(double arg1);

    void v6_range_changed(double arg1);

    void v7_range_changed(double arg1);

    void v8_range_changed(double arg1);

    void i1_range_changed(double arg1);

    void i2_range_changed(double arg1);

    void i3_range_changed(double arg1);

    void i4_range_changed(double arg1);

    void i5_range_changed(double arg1);

    void i6_range_changed(double arg1);

    void i7_range_changed(double arg1);

    void i8_range_changed(double arg1);


    void on_mainSwitch_toggled(bool checked);

private:
    Ui::Utama *ui;
    Settings *msettings;

    double v1temp,v2temp,v3temp,v4temp,v5temp,v6temp,v7temp,v8temp;
    double i1temp,i2temp,i3temp,i4temp,i5temp,i6temp,i7temp,i8temp;

    void setupSliderSpin();

    void storeRange();

signals:
    void prevRange(double v1,double v2,double v3,double v4,double v5,double v6,double v7,double v8,double i1,double i2,double i3,double i4,double i5,double i6,double i7,double i8);
};

#endif // UTAMA_H
