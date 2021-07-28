#include "settings.h"
#include "ui_settings.h"
#include "utama.h"
#include "ui_utama.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}



//void Settings::on_V_Ch_1_valueChanged(double arg1)
//{

//}

void Settings::prevRange(double v1,double v2,double v3,double v4,double v5,double v6,double v7,double v8,double i1,double i2,double i3,double i4,double i5,double i6,double i7,double i8){
    v1temp = v1;
    v2temp = v2;
    v3temp = v3;
    v4temp = v4;
    v5temp = v5;
    v6temp = v6;
    v7temp = v7;
    v8temp = v8;

    i1temp = i1;
    i2temp = i2;
    i3temp = i3;
    i4temp = i4;
    i5temp = i5;
    i6temp = i6;
    i7temp = i7;
    i8temp = i8;

    ui->I_Ch_1->setValue(i1temp);
    ui->I_Ch_2->setValue(i2temp);
    ui->I_Ch_3->setValue(i3temp);
    ui->I_Ch_4->setValue(i4temp);
    ui->I_Ch_5->setValue(i5temp);
    ui->I_Ch_6->setValue(i6temp);
    ui->I_Ch_7->setValue(i7temp);
    ui->I_Ch_8->setValue(i8temp);

    ui->V_Ch_1->setValue(v1temp);
    ui->V_Ch_2->setValue(v2temp);
    ui->V_Ch_3->setValue(v3temp);
    ui->V_Ch_4->setValue(v4temp);
    ui->V_Ch_5->setValue(v5temp);
    ui->V_Ch_6->setValue(v6temp);
    ui->V_Ch_7->setValue(v7temp);
    ui->V_Ch_8->setValue(v8temp);
}

void Settings::on_defaultButton_clicked()
{
    setDefault();
}

void Settings::setDefault()
{
    ui->I_Ch_1->setValue(500);
    ui->I_Ch_2->setValue(500);
    ui->I_Ch_3->setValue(500);
    ui->I_Ch_4->setValue(500);
    ui->I_Ch_5->setValue(500);
    ui->I_Ch_6->setValue(500);
    ui->I_Ch_7->setValue(500);
    ui->I_Ch_8->setValue(500);

    ui->V_Ch_1->setValue(12);
    ui->V_Ch_2->setValue(12);
    ui->V_Ch_3->setValue(12);
    ui->V_Ch_4->setValue(12);
    ui->V_Ch_5->setValue(12);
    ui->V_Ch_6->setValue(12);
    ui->V_Ch_7->setValue(12);
    ui->V_Ch_8->setValue(12);

    ui->defaultButton->setDefault(true);
}

void Settings::checkDefault()
{
    ui->defaultButton->setDisabled(ui->I_Ch_1->value() == 100&&ui->I_Ch_2->value() == 100&&
                                   ui->I_Ch_3->value() == 100&&ui->I_Ch_4->value() == 100&&
                                   ui->I_Ch_5->value() == 100&&ui->I_Ch_6->value() == 100&&
                                   ui->I_Ch_7->value() == 100&&ui->I_Ch_8->value() == 100&&
                                   ui->V_Ch_1->value() == 12&&ui->V_Ch_2->value() == 12&&
                                   ui->V_Ch_3->value() == 12&&ui->V_Ch_4->value() == 12&&
                                   ui->V_Ch_5->value() == 12&&ui->V_Ch_6->value() == 12&&
                                   ui->V_Ch_7->value() == 12&&ui->V_Ch_8->value() == 12);

}


void Settings::on_buttonBox_accepted()
{
    emit v1_range_changed(ui->V_Ch_1->value());
    emit v2_range_changed(ui->V_Ch_2->value());
    emit v3_range_changed(ui->V_Ch_3->value());
    emit v4_range_changed(ui->V_Ch_4->value());
    emit v5_range_changed(ui->V_Ch_5->value());
    emit v6_range_changed(ui->V_Ch_6->value());
    emit v7_range_changed(ui->V_Ch_7->value());
    emit v8_range_changed(ui->V_Ch_8->value());
    emit i1_range_changed(ui->I_Ch_1->value());
    emit i2_range_changed(ui->I_Ch_2->value());
    emit i3_range_changed(ui->I_Ch_3->value());
    emit i4_range_changed(ui->I_Ch_4->value());
    emit i5_range_changed(ui->I_Ch_5->value());
    emit i6_range_changed(ui->I_Ch_6->value());
    emit i7_range_changed(ui->I_Ch_7->value());
    emit i8_range_changed(ui->I_Ch_8->value());
}

