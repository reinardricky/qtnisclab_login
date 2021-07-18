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

//pow buttons
void Utama::on_Pow_Ch_1_clicked()
{
    if(ui->Pow_Ch_1->text()=="OFF"){
        ui->Pow_Ch_1->setText("ON");
    }
    else{
        ui->Pow_Ch_1->setText("OFF");
    }
}

void Utama::on_Pow_Ch_2_clicked()
{
    if(ui->Pow_Ch_2->text()=="OFF"){
        ui->Pow_Ch_2->setText("ON");
    }
    else{
        ui->Pow_Ch_2->setText("OFF");
    }
}

void Utama::on_Pow_Ch_3_clicked()
{
    if(ui->Pow_Ch_3->text()=="OFF"){
        ui->Pow_Ch_3->setText("ON");
    }
    else{
        ui->Pow_Ch_3->setText("OFF");
    }
}

void Utama::on_Pow_Ch_4_clicked()
{
    if(ui->Pow_Ch_4->text()=="OFF"){
        ui->Pow_Ch_4->setText("ON");
    }
    else{
        ui->Pow_Ch_4->setText("OFF");
    }
}

void Utama::on_Pow_Ch_5_clicked()
{
    if(ui->Pow_Ch_5->text()=="OFF"){
        ui->Pow_Ch_5->setText("ON");
    }
    else{
        ui->Pow_Ch_5->setText("OFF");
    }
}

void Utama::on_Pow_Ch_6_clicked()
{
    if(ui->Pow_Ch_6->text()=="OFF"){
        ui->Pow_Ch_6->setText("ON");
    }
    else{
        ui->Pow_Ch_6->setText("OFF");
    }
}

void Utama::on_Pow_Ch_7_clicked()
{
    if(ui->Pow_Ch_7->text()=="OFF"){
        ui->Pow_Ch_7->setText("ON");
    }
    else{
        ui->Pow_Ch_7->setText("OFF");
    }
}

void Utama::on_Pow_Ch_8_clicked()
{
    if(ui->Pow_Ch_8->text()=="OFF"){
        ui->Pow_Ch_8->setText("ON");
    }
    else{
        ui->Pow_Ch_8->setText("OFF");
    }
}

//lock buttons
void Utama::on_Lock_1_stateChanged(int arg1)
{
    ui->V_Slider_1->setDisabled(ui->V_Slider_1->isEnabled());
    ui->V_Spin_1->setReadOnly(ui->V_Spin_1->isReadOnly());
    ui->I_Slider_1->setDisabled(ui->I_Slider_1->isEnabled());
    ui->I_Spin_1->setReadOnly(ui->I_Spin_1->isReadOnly());
}

void Utama::on_Lock_2_stateChanged(int arg1)
{
    ui->V_Slider_2->setDisabled(ui->V_Slider_2->isEnabled());
    ui->V_Spin_2->setReadOnly(ui->V_Spin_2->isReadOnly());
    ui->I_Slider_2->setDisabled(ui->I_Slider_2->isEnabled());
    ui->I_Spin_2->setReadOnly(ui->I_Spin_2->isReadOnly());
}

void Utama::on_Lock_3_stateChanged(int arg1)
{
    ui->V_Slider_3->setDisabled(ui->V_Slider_3->isEnabled());
    ui->V_Spin_3->setReadOnly(ui->V_Spin_3->isReadOnly());
    ui->I_Slider_3->setDisabled(ui->I_Slider_3->isEnabled());
    ui->I_Spin_3->setReadOnly(ui->I_Spin_3->isReadOnly());
}

void Utama::on_Lock_4_stateChanged(int arg1)
{
    ui->V_Slider_4->setDisabled(ui->V_Slider_4->isEnabled());
    ui->V_Spin_4->setReadOnly(ui->V_Spin_4->isReadOnly());
    ui->I_Slider_4->setDisabled(ui->I_Slider_4->isEnabled());
    ui->I_Spin_4->setReadOnly(ui->I_Spin_4->isReadOnly());
}

void Utama::on_Lock_5_stateChanged(int arg1)
{
    ui->V_Slider_5->setDisabled(ui->V_Slider_5->isEnabled());
    ui->V_Spin_5->setReadOnly(ui->V_Spin_5->isReadOnly());
    ui->I_Slider_5->setDisabled(ui->I_Slider_5->isEnabled());
    ui->I_Spin_5->setReadOnly(ui->I_Spin_5->isReadOnly());
}

void Utama::on_Lock_6_stateChanged(int arg1)
{
    ui->V_Slider_6->setDisabled(ui->V_Slider_6->isEnabled());
    ui->V_Spin_6->setReadOnly(ui->V_Spin_6->isReadOnly());
    ui->I_Slider_6->setDisabled(ui->I_Slider_6->isEnabled());
    ui->I_Spin_6->setReadOnly(ui->I_Spin_6->isReadOnly());
}

void Utama::on_Lock_7_stateChanged(int arg1)
{
    ui->V_Slider_7->setDisabled(ui->V_Slider_7->isEnabled());
    ui->V_Spin_7->setReadOnly(ui->V_Spin_7->isReadOnly());
    ui->I_Slider_7->setDisabled(ui->I_Slider_7->isEnabled());
    ui->I_Spin_7->setReadOnly(ui->I_Spin_7->isReadOnly());
}

void Utama::on_Lock_8_stateChanged(int arg1)
{
    ui->V_Slider_8->setDisabled(ui->V_Slider_8->isEnabled());
    ui->V_Spin_8->setReadOnly(ui->V_Spin_8->isReadOnly());
    ui->I_Slider_8->setDisabled(ui->I_Slider_8->isEnabled());
    ui->I_Spin_8->setReadOnly(ui->I_Spin_8->isReadOnly());
}
