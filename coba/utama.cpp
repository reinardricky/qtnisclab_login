#include "utama.h"
#include "ui_utama.h"
#include "qdebug.h"
#include "qdatetime.h"
#include "settings.h"

Utama::Utama(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Utama)
{
    ui->setupUi(this);
    connect(ui->Settings, SIGNAL(click()), this, SLOT(openSettings()));

    setupSlideSpin();

//    connect(ui->V_Slider_1,SIGNAL(valueChanged(int val)),ui->V_Spin_1,SLOT(SlideToSpin(double val)));
//   connect(ui->V_Spin_1,SIGNAL(valueChanged(double arg1)),ui->V_Slider_1,SLOT(setValue(int arg1)));
}

Utama::~Utama()
{
    delete ui;
}

void Utama::setupSlideSpin() //set max range of slider and step size of slider and spin box
{
    ui->V_Slider_1->setRange(0,(128*static_cast<int>(ui->V_Spin_1->maximum())));
    ui->V_Spin_1->setSingleStep((ui->V_Spin_1->maximum())*0.025);
    ui->V_Slider_1->setSingleStep(ui->V_Slider_1->maximum()*0.025);
    ui->V_Slider_2->setRange(0,(128*static_cast<int>(ui->V_Spin_2->maximum())));
    ui->V_Spin_2->setSingleStep((ui->V_Spin_2->maximum())*0.025);
    ui->V_Slider_2->setSingleStep(ui->V_Slider_2->maximum()*0.025);
    ui->V_Slider_3->setRange(0,(128*static_cast<int>(ui->V_Spin_3->maximum())));
    ui->V_Spin_3->setSingleStep((ui->V_Spin_3->maximum())*0.025);
    ui->V_Slider_3->setSingleStep(ui->V_Slider_3->maximum()*0.025);
    ui->V_Slider_4->setRange(0,(128*static_cast<int>(ui->V_Spin_4->maximum())));
    ui->V_Spin_4->setSingleStep((ui->V_Spin_4->maximum())*0.025);
    ui->V_Slider_4->setSingleStep(ui->V_Slider_4->maximum()*0.025);
    ui->V_Slider_5->setRange(0,(128*static_cast<int>(ui->V_Spin_5->maximum())));
    ui->V_Spin_5->setSingleStep((ui->V_Spin_5->maximum())*0.025);
    ui->V_Slider_5->setSingleStep(ui->V_Slider_5->maximum()*0.025);
    ui->V_Slider_6->setRange(0,(128*static_cast<int>(ui->V_Spin_6->maximum())));
    ui->V_Spin_6->setSingleStep((ui->V_Spin_6->maximum())*0.025);
    ui->V_Slider_6->setSingleStep(ui->V_Slider_6->maximum()*0.025);
    ui->V_Slider_7->setRange(0,(128*static_cast<int>(ui->V_Spin_7->maximum())));
    ui->V_Spin_7->setSingleStep((ui->V_Spin_7->maximum())*0.025);
    ui->V_Slider_7->setSingleStep(ui->V_Slider_7->maximum()*0.025);
    ui->V_Slider_8->setRange(0,(128*static_cast<int>(ui->V_Spin_8->maximum())));
    ui->V_Spin_8->setSingleStep((ui->V_Spin_8->maximum())*0.025);
    ui->V_Slider_8->setSingleStep(ui->V_Slider_8->maximum()*0.025);

    ui->I_Slider_1->setRange(0,128*static_cast<int>(ui->I_Spin_1->maximum()));
    ui->I_Spin_1->setSingleStep((ui->I_Spin_1->maximum())*0.025);
    ui->I_Slider_1->setSingleStep(ui->I_Slider_1->maximum()*0.025);
    ui->I_Slider_2->setRange(0,128*static_cast<int>(ui->I_Spin_2->maximum()));
    ui->I_Spin_2->setSingleStep((ui->I_Spin_2->maximum())*0.025);
    ui->I_Slider_2->setSingleStep(ui->I_Slider_2->maximum()*0.025);
    ui->I_Slider_3->setRange(0,128*static_cast<int>(ui->I_Spin_3->maximum()));
    ui->I_Spin_3->setSingleStep((ui->I_Spin_3->maximum())*0.025);
    ui->I_Slider_3->setSingleStep(ui->I_Slider_3->maximum()*0.025);
    ui->I_Slider_4->setRange(0,128*static_cast<int>(ui->I_Spin_4->maximum()));
    ui->I_Spin_4->setSingleStep((ui->I_Spin_4->maximum())*0.025);
    ui->I_Slider_4->setSingleStep(ui->I_Slider_4->maximum()*0.025);
    ui->I_Slider_5->setRange(0,128*static_cast<int>(ui->I_Spin_5->maximum()));
    ui->I_Spin_5->setSingleStep((ui->I_Spin_5->maximum())*0.025);
    ui->I_Slider_5->setSingleStep(ui->I_Slider_5->maximum()*0.025);
    ui->I_Slider_6->setRange(0,128*static_cast<int>(ui->I_Spin_6->maximum()));
    ui->I_Spin_6->setSingleStep((ui->I_Spin_6->maximum())*0.025);
    ui->I_Slider_6->setSingleStep(ui->I_Slider_6->maximum()*0.025);
    ui->I_Slider_7->setRange(0,128*static_cast<int>(ui->I_Spin_7->maximum()));
    ui->I_Spin_7->setSingleStep((ui->I_Spin_7->maximum())*0.025);
    ui->I_Slider_7->setSingleStep(ui->I_Slider_7->maximum()*0.025);
    ui->I_Slider_8->setRange(0,128*static_cast<int>(ui->I_Spin_8->maximum()));
    ui->I_Spin_8->setSingleStep((ui->I_Spin_8->maximum())*0.025);
    ui->I_Slider_8->setSingleStep(ui->I_Slider_8->maximum()*0.025);
}

void Utama::openSettings()
{
    msettings=new Settings();
    msettings->show();
}

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
        ui->Lock_1->setDisabled(false);
        ui->Lock_1->setChecked(false);
    }
    else{
        ui->Pow_Ch_1->setText("OFF");
        ui->V_Slider_1->setValue(0);
        ui->V_Spin_1->setValue(0);
        ui->I_Slider_1->setValue(0);
        ui->I_Spin_1->setValue(0);

        ui->Lock_1->setChecked(true);
        ui->Lock_1->setDisabled(true);
    }
}

void Utama::on_Pow_Ch_2_clicked()
{
    if(ui->Pow_Ch_2->text()=="OFF"){
        ui->Pow_Ch_2->setText("ON");
        ui->Lock_2->setDisabled(false);
        ui->Lock_2->setChecked(false);
    }
    else{
        ui->Pow_Ch_2->setText("OFF");
        ui->V_Slider_2->setValue(0);
        ui->V_Spin_2->setValue(0);
        ui->I_Slider_2->setValue(0);
        ui->I_Spin_2->setValue(0);

        ui->Lock_2->setChecked(true);
        ui->Lock_2->setDisabled(true);
    }
}

void Utama::on_Pow_Ch_3_clicked()
{
    if(ui->Pow_Ch_3->text()=="OFF"){
        ui->Pow_Ch_3->setText("ON");
        ui->Lock_3->setDisabled(false);
        ui->Lock_3->setChecked(false);
    }
    else{
        ui->Pow_Ch_3->setText("OFF");
        ui->V_Slider_3->setValue(0);
        ui->V_Spin_3->setValue(0);
        ui->I_Slider_3->setValue(0);
        ui->I_Spin_3->setValue(0);

        ui->Lock_3->setChecked(true);
        ui->Lock_3->setDisabled(true);
    }
}

void Utama::on_Pow_Ch_4_clicked()
{
    if(ui->Pow_Ch_4->text()=="OFF"){
        ui->Pow_Ch_4->setText("ON");
        ui->Lock_4->setDisabled(false);
        ui->Lock_4->setChecked(false);
    }
    else{
        ui->Pow_Ch_4->setText("OFF");
        ui->V_Slider_4->setValue(0);
        ui->V_Spin_4->setValue(0);
        ui->I_Slider_4->setValue(0);
        ui->I_Spin_4->setValue(0);

        ui->Lock_4->setChecked(true);
        ui->Lock_4->setDisabled(true);
    }
}

void Utama::on_Pow_Ch_5_clicked()
{
    if(ui->Pow_Ch_5->text()=="OFF"){
        ui->Pow_Ch_5->setText("ON");
        ui->Lock_5->setDisabled(false);
        ui->Lock_5->setChecked(false);
    }
    else{
        ui->Pow_Ch_5->setText("OFF");
        ui->V_Slider_5->setValue(0);
        ui->V_Spin_5->setValue(0);
        ui->I_Slider_5->setValue(0);
        ui->I_Spin_5->setValue(0);

        ui->Lock_5->setChecked(true);
        ui->Lock_5->setDisabled(true);
    }
}

void Utama::on_Pow_Ch_6_clicked()
{
    if(ui->Pow_Ch_6->text()=="OFF"){
        ui->Pow_Ch_6->setText("ON");
        ui->Lock_6->setDisabled(false);
        ui->Lock_6->setChecked(false);
    }
    else{
        ui->Pow_Ch_6->setText("OFF");
        ui->V_Slider_6->setValue(0);
        ui->V_Spin_6->setValue(0);
        ui->I_Slider_6->setValue(0);
        ui->I_Spin_6->setValue(0);

        ui->Lock_6->setChecked(true);
        ui->Lock_6->setDisabled(true);
    }
}

void Utama::on_Pow_Ch_7_clicked()
{
    if(ui->Pow_Ch_7->text()=="OFF"){
        ui->Pow_Ch_7->setText("ON");
        ui->Lock_7->setDisabled(false);
        ui->Lock_7->setChecked(false);
    }
    else{
        ui->Pow_Ch_7->setText("OFF");
        ui->V_Slider_7->setValue(0);
        ui->V_Spin_7->setValue(0);
        ui->I_Slider_7->setValue(0);
        ui->I_Spin_7->setValue(0);

        ui->Lock_7->setChecked(true);
        ui->Lock_7->setDisabled(true);
    }
}

void Utama::on_Pow_Ch_8_clicked()
{
    if(ui->Pow_Ch_8->text()=="OFF"){
        ui->Pow_Ch_8->setText("ON");
        ui->Lock_8->setDisabled(false);
        ui->Lock_8->setChecked(false);
    }
    else{
        ui->Pow_Ch_8->setText("OFF");
        ui->V_Slider_8->setValue(0);
        ui->V_Spin_8->setValue(0);
        ui->I_Slider_8->setValue(0);
        ui->I_Spin_8->setValue(0);

        ui->Lock_8->setChecked(true);
        ui->Lock_8->setDisabled(true);
    }
}

//lock buttons
void Utama::on_Lock_1_stateChanged(int arg1)
{
    ui->V_Slider_1->setDisabled(ui->V_Slider_1->isEnabled());
    ui->V_Spin_1->setDisabled(ui->V_Spin_1->isEnabled());
    ui->I_Slider_1->setDisabled(ui->I_Slider_1->isEnabled());
    ui->I_Spin_1->setDisabled(ui->I_Spin_1->isEnabled());

}

void Utama::on_Lock_2_stateChanged(int arg1)
{
    ui->V_Slider_2->setDisabled(ui->V_Slider_2->isEnabled());
    ui->V_Spin_2->setDisabled(ui->V_Spin_2->isEnabled());
    ui->I_Slider_2->setDisabled(ui->I_Slider_2->isEnabled());
    ui->I_Spin_2->setDisabled(ui->I_Spin_2->isEnabled());
}

void Utama::on_Lock_3_stateChanged(int arg1)
{
    ui->V_Slider_3->setDisabled(ui->V_Slider_3->isEnabled());
    ui->V_Spin_3->setDisabled(ui->V_Spin_3->isEnabled());
    ui->I_Slider_3->setDisabled(ui->I_Slider_3->isEnabled());
    ui->I_Spin_3->setDisabled(ui->I_Spin_3->isEnabled());
}

void Utama::on_Lock_4_stateChanged(int arg1)
{
    ui->V_Slider_4->setDisabled(ui->V_Slider_4->isEnabled());
    ui->V_Spin_4->setDisabled(ui->V_Spin_4->isEnabled());
    ui->I_Slider_4->setDisabled(ui->I_Slider_4->isEnabled());
    ui->I_Spin_4->setDisabled(ui->I_Spin_4->isEnabled());
}

void Utama::on_Lock_5_stateChanged(int arg1)
{
    ui->V_Slider_5->setDisabled(ui->V_Slider_5->isEnabled());
    ui->V_Spin_5->setDisabled(ui->V_Spin_5->isEnabled());
    ui->I_Slider_5->setDisabled(ui->I_Slider_5->isEnabled());
    ui->I_Spin_5->setDisabled(ui->I_Spin_5->isEnabled());
}

void Utama::on_Lock_6_stateChanged(int arg1)
{
    ui->V_Slider_6->setDisabled(ui->V_Slider_6->isEnabled());
    ui->V_Spin_6->setDisabled(ui->V_Spin_6->isEnabled());
    ui->I_Slider_6->setDisabled(ui->I_Slider_6->isEnabled());
    ui->I_Spin_6->setDisabled(ui->I_Spin_6->isEnabled());
}

void Utama::on_Lock_7_stateChanged(int arg1)
{
    ui->V_Slider_7->setDisabled(ui->V_Slider_7->isEnabled());
    ui->V_Spin_7->setDisabled(ui->V_Spin_7->isEnabled());
    ui->I_Slider_7->setDisabled(ui->I_Slider_7->isEnabled());
    ui->I_Spin_7->setDisabled(ui->I_Spin_7->isEnabled());
}

void Utama::on_Lock_8_stateChanged(int arg1)
{
    ui->V_Slider_8->setDisabled(ui->V_Slider_8->isEnabled());
    ui->V_Spin_8->setDisabled(ui->V_Spin_8->isEnabled());
    ui->I_Slider_8->setDisabled(ui->I_Slider_8->isEnabled());
    ui->I_Spin_8->setDisabled(ui->I_Spin_8->isEnabled());
}

void Utama::on_Settings_clicked()
{
    openSettings();
}

//spinbox to slider
void Utama::on_V_Spin_1_valueChanged(double arg1)
{
    double s = arg1;
//    qDebug()<<"s = "<< s;

    int t = static_cast<int>(round(s/ui->V_Spin_1->maximum()*ui->V_Slider_1->maximum()));
    ui->V_Slider_1->setValue(t);
}

void Utama::on_V_Spin_2_valueChanged(double arg1)
{
    double s = arg1;
//    qDebug()<<"s = "<< s;

    int t = static_cast<int>(round(s/ui->V_Spin_2->maximum()*ui->V_Slider_2->maximum()));
    ui->V_Slider_2->setValue(t);
}


void Utama::on_V_Spin_3_valueChanged(double arg1)
{
    double s = arg1;
//    qDebug()<<"s = "<< s;

    int t = static_cast<int>(round(s/ui->V_Spin_3->maximum()*ui->V_Slider_3->maximum()));
    ui->V_Slider_3->setValue(t);
}


void Utama::on_V_Spin_4_valueChanged(double arg1)
{
    double s = arg1;
//    qDebug()<<"s = "<< s;

    int t = static_cast<int>(round(s/ui->V_Spin_4->maximum()*ui->V_Slider_4->maximum()));
    ui->V_Slider_4->setValue(t);
}


void Utama::on_V_Spin_5_valueChanged(double arg1)
{
    double s = arg1;
//    qDebug()<<"s = "<< s;

    int t = static_cast<int>(round(s/ui->V_Spin_5->maximum()*ui->V_Slider_5->maximum()));
    ui->V_Slider_5->setValue(t);
}


void Utama::on_V_Spin_6_valueChanged(double arg1)
{
    double s = arg1;
//    qDebug()<<"s = "<< s;

    int t = static_cast<int>(round(s/ui->V_Spin_6->maximum()*ui->V_Slider_6->maximum()));
    ui->V_Slider_6->setValue(t);
}


void Utama::on_V_Spin_7_valueChanged(double arg1)
{
    double s = arg1;
//    qDebug()<<"s = "<< s;

    int t = static_cast<int>(round(s/ui->V_Spin_7->maximum()*ui->V_Slider_7->maximum()));
    ui->V_Slider_7->setValue(t);
}


void Utama::on_V_Spin_8_valueChanged(double arg1)
{
    double s = arg1;
//    qDebug()<<"s = "<< s;

    int t = static_cast<int>(round(s/ui->V_Spin_8->maximum()*ui->V_Slider_8->maximum()));
    ui->V_Slider_8->setValue(t);
}


void Utama::on_I_Spin_1_valueChanged(double arg1)
{
    double s = arg1;

    int t = static_cast<int>(round(s/ui->I_Spin_1->maximum()*ui->I_Slider_1->maximum()));
    ui->I_Slider_1->setValue(t);
}


void Utama::on_I_Spin_2_valueChanged(double arg1)
{
    double s = arg1;

    int t = static_cast<int>(round(s/ui->I_Spin_2->maximum()*ui->I_Slider_2->maximum()));
    ui->I_Slider_2->setValue(t);
}


void Utama::on_I_Spin_3_valueChanged(double arg1)
{
    double s = arg1;

    int t = static_cast<int>(round(s/ui->I_Spin_3->maximum()*ui->I_Slider_3->maximum()));
    ui->I_Slider_3->setValue(t);
}


void Utama::on_I_Spin_4_valueChanged(double arg1)
{
    double s = arg1;

    int t = static_cast<int>(round(s/ui->I_Spin_4->maximum()*ui->I_Slider_4->maximum()));
    ui->I_Slider_4->setValue(t);
}


void Utama::on_I_Spin_5_valueChanged(double arg1)
{
    double s = arg1;

    int t = static_cast<int>(round(s/ui->I_Spin_5->maximum()*ui->I_Slider_5->maximum()));
    ui->I_Slider_5->setValue(t);
}


void Utama::on_I_Spin_6_valueChanged(double arg1)
{
    double s = arg1;

    int t = static_cast<int>(round(s/ui->I_Spin_6->maximum()*ui->I_Slider_6->maximum()));
    ui->I_Slider_6->setValue(t);
}


void Utama::on_I_Spin_7_valueChanged(double arg1)
{
    double s = arg1;

    int t = static_cast<int>(round(s/ui->I_Spin_7->maximum()*ui->I_Slider_7->maximum()));
    ui->I_Slider_7->setValue(t);
}


void Utama::on_I_Spin_8_valueChanged(double arg1)
{
    double s = arg1;

    int t = static_cast<int>(round(s/ui->I_Spin_8->maximum()*ui->I_Slider_8->maximum()));
    ui->I_Slider_8->setValue(t);
}

