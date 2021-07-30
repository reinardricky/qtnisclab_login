#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

//    Ui::Settings *ui;

private slots:


    void on_defaultButton_clicked();

    void prevRange(double v1,double v2,double v3,double v4,double v5,double v6,double v7,double v8,double i1,double i2,double i3,double i4,double i5,double i6,double i7,double i8);

    void on_buttonBox_accepted();

private:
    Ui::Settings *ui;

    void setDefault();

    void checkDefault();

signals:
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
};



#endif // SETTINGS_H
