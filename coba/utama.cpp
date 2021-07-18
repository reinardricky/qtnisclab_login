#include "utama.h"
#include "ui_utama.h"

Utama::Utama(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Utama)
{
    ui->setupUi(this);
//    connect(ui->V_Slider_1,SIGNAL(valueChanged(int)),ui->V_Spin_1,SLOT(SlideToSpin(double)));
//    connect(ui->V_Spin_1,SIGNAL(valueChanged(double)),ui->V_Slider_1,SLOT(SpinToSlide(int)));
}



Utama::~Utama()
{
    delete ui;
}





//void Utama::on_Pow_Ch_1_clicked()
//{

//}

//spinbox to slider: for some reason gabisa kehubung kyk slider
//void Utama::on_V_Spin_1_valueChanged(double arg1)
//{
//    float temp = arg1+0.5;
//    int newVal = static_cast<int>(temp);
//    int sVal = newVal/(ui->V_Spin_1->maximum())*(ui->V_Slider_1->maximum());
//    ui->V_Slider_1->setValue(sVal);
//}

//slider to spinbox

void Utama::on_V_Slider_1_valueChanged(int value)
{
    double sVal = (double)value/(ui->V_Slider_1->maximum())*(ui->V_Spin_1->maximum());
    ui->V_Spin_1->setValue(sVal);
}


void Utama::on_V_Slider_2_valueChanged(int value)
{
    double sVal = (double)value/(ui->V_Slider_2->maximum())*(ui->V_Spin_2->maximum());
    ui->V_Spin_2->setValue(sVal);
}


void Utama::on_V_Slider_3_valueChanged(int value)
{
    double sVal = (double)value/(ui->V_Slider_3->maximum())*(ui->V_Spin_3->maximum());
    ui->V_Spin_3->setValue(sVal);
}


void Utama::on_V_Slider_4_valueChanged(int value)
{
    double sVal = (double)value/(ui->V_Slider_4->maximum())*(ui->V_Spin_4->maximum());
    ui->V_Spin_4->setValue(sVal);
}


void Utama::on_V_Slider_5_valueChanged(int value)
{
    double sVal = (double)value/(ui->V_Slider_5->maximum())*(ui->V_Spin_5->maximum());
    ui->V_Spin_5->setValue(sVal);
}


void Utama::on_V_Slider_6_valueChanged(int value)
{
    double sVal = (double)value/(ui->V_Slider_6->maximum())*(ui->V_Spin_6->maximum());
    ui->V_Spin_6->setValue(sVal);
}


void Utama::on_V_Slider_7_valueChanged(int value)
{
    double sVal = (double)value/(ui->V_Slider_7->maximum())*(ui->V_Spin_7->maximum());
    ui->V_Spin_7->setValue(sVal);
}


void Utama::on_V_Slider_8_valueChanged(int value)
{
    double sVal = (double)value/(ui->V_Slider_8->maximum())*(ui->V_Spin_8->maximum());
    ui->V_Spin_8->setValue(sVal);
}

void Utama::on_I_Slider_1_valueChanged(int value)
{
    double sVal = (double)value/(ui->I_Slider_1->maximum())*(ui->I_Spin_1->maximum());
    ui->I_Spin_1->setValue(sVal);
}


void Utama::on_I_Slider_2_valueChanged(int value)
{
    double sVal = (double)value/(ui->I_Slider_2->maximum())*(ui->I_Spin_2->maximum());
    ui->I_Spin_2->setValue(sVal);
}


void Utama::on_I_Slider_3_valueChanged(int value)
{
    double sVal = (double)value/(ui->I_Slider_3->maximum())*(ui->I_Spin_3->maximum());
    ui->I_Spin_3->setValue(sVal);
}


void Utama::on_I_Slider_4_valueChanged(int value)
{
    double sVal = (double)value/(ui->I_Slider_4->maximum())*(ui->I_Spin_4->maximum());
    ui->I_Spin_4->setValue(sVal);
}


void Utama::on_I_Slider_5_valueChanged(int value)
{
    double sVal = (double)value/(ui->I_Slider_5->maximum())*(ui->I_Spin_5->maximum());
    ui->I_Spin_5->setValue(sVal);
}


void Utama::on_I_Slider_6_valueChanged(int value)
{
    double sVal = (double)value/(ui->I_Slider_6->maximum())*(ui->I_Spin_6->maximum());
    ui->I_Spin_6->setValue(sVal);
}


void Utama::on_I_Slider_7_valueChanged(int value)
{
    double sVal = (double)value/(ui->I_Slider_7->maximum())*(ui->I_Spin_7->maximum());
    ui->I_Spin_7->setValue(sVal);
}


void Utama::on_I_Slider_8_valueChanged(int value)
{
    double sVal = (double)value/(ui->I_Slider_8->maximum())*(ui->I_Spin_8->maximum());
    ui->I_Spin_8->setValue(sVal);
}
