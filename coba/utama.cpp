#include "utama.h"
#include "ui_utama.h"
#include "qdebug.h"
#include "qdatetime.h"
#include "settings.h"
#include <qstylefactory.h>

double setVal;

Utama::Utama(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Utama)
{
    ui->setupUi(this);

    //color for fun; kalau mau pake warna yang sama tinggal copas file window.cpp nya
    qApp->setStyle(QStyleFactory::create("Fusion"));

    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(45,45,45));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Active,QPalette::Base, QColor(75,75,75));
    darkPalette.setColor(QPalette::Disabled,QPalette::Base,QColor(148, 148, 148));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53,53,53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Active,QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Disabled,QPalette::Text,QColor(200,200,200));
    darkPalette.setColor(QPalette::Active,QPalette::Button, QColor(53,53,53));
    darkPalette.setColor(QPalette::Inactive,QPalette::Button,QColor(148, 148, 148));
    darkPalette.setColor(QPalette::Disabled,QPalette::Button,QColor(148, 148, 148));
    darkPalette.setColor(QPalette::Active,QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::Inactive,QPalette::ButtonText,QColor(200,200,200));
    darkPalette.setColor(QPalette::Disabled,QPalette::ButtonText,QColor(200,200,200));
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));

    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::white);

    qApp->setPalette(darkPalette);

    qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");

    ui->mainSwitch->setChecked(false);

    connect(ui->Settings, SIGNAL(click()), this, SLOT(openSettings()));

    setupSliderSpin();
}

Utama::~Utama()
{
    delete ui;
}

void Utama::setupSliderSpin() //set max range of slider and step size of slider and spin box
{
    ui->V_Slider_1->setRange(0,(128*static_cast<int>(ui->V_Spin_1->maximum())));
    ui->V_Spin_1->setValue(ui->V_Spin_1->value());
    ui->V_Spin_1->setSingleStep((ui->V_Spin_1->maximum())*0.025);
    ui->V_Slider_1->setSingleStep(ui->V_Slider_1->maximum()*0.025);

    ui->V_Slider_2->setRange(0,(128*static_cast<int>(ui->V_Spin_2->maximum())));
    ui->V_Spin_2->setValue(ui->V_Spin_2->value());
    ui->V_Spin_2->setSingleStep((ui->V_Spin_2->maximum())*0.025);
    ui->V_Slider_2->setSingleStep(ui->V_Slider_2->maximum()*0.025);

    ui->V_Slider_3->setRange(0,(128*static_cast<int>(ui->V_Spin_3->maximum())));
    ui->V_Spin_3->setValue(ui->V_Spin_3->value());
    ui->V_Spin_3->setSingleStep((ui->V_Spin_3->maximum())*0.025);
    ui->V_Slider_3->setSingleStep(ui->V_Slider_3->maximum()*0.025);

    ui->V_Slider_4->setRange(0,(128*static_cast<int>(ui->V_Spin_4->maximum())));
    ui->V_Spin_4->setValue(ui->V_Spin_4->value());
    ui->V_Spin_4->setSingleStep((ui->V_Spin_4->maximum())*0.025);
    ui->V_Slider_4->setSingleStep(ui->V_Slider_4->maximum()*0.025);

    ui->V_Slider_5->setRange(0,(128*static_cast<int>(ui->V_Spin_5->maximum())));
    ui->V_Spin_5->setValue(ui->V_Spin_5->value());
    ui->V_Spin_5->setSingleStep((ui->V_Spin_5->maximum())*0.025);
    ui->V_Slider_5->setSingleStep(ui->V_Slider_5->maximum()*0.025);

    ui->V_Slider_6->setRange(0,(128*static_cast<int>(ui->V_Spin_6->maximum())));
    ui->V_Spin_6->setValue(ui->V_Spin_6->value());
    ui->V_Spin_6->setSingleStep((ui->V_Spin_6->maximum())*0.025);
    ui->V_Slider_6->setSingleStep(ui->V_Slider_6->maximum()*0.025);

    ui->V_Slider_7->setRange(0,(128*static_cast<int>(ui->V_Spin_7->maximum())));
    ui->V_Spin_7->setValue(ui->V_Spin_7->value());
    ui->V_Spin_7->setSingleStep((ui->V_Spin_7->maximum())*0.025);
    ui->V_Slider_7->setSingleStep(ui->V_Slider_7->maximum()*0.025);

    ui->V_Slider_8->setRange(0,(128*static_cast<int>(ui->V_Spin_8->maximum())));
    ui->V_Spin_8->setValue(ui->V_Spin_8->value());
    ui->V_Spin_8->setSingleStep((ui->V_Spin_8->maximum())*0.025);
    ui->V_Slider_8->setSingleStep(ui->V_Slider_8->maximum()*0.025);


    ui->I_Slider_1->setRange(0,128*static_cast<int>(ui->I_Spin_1->maximum()));
    ui->I_Spin_1->setValue(ui->I_Spin_1->value());
    ui->I_Spin_1->setSingleStep((ui->I_Spin_1->maximum())*0.025);
    ui->I_Slider_1->setSingleStep(ui->I_Slider_1->maximum()*0.025);

    ui->I_Slider_2->setRange(0,128*static_cast<int>(ui->I_Spin_2->maximum()));
    ui->I_Spin_2->setValue(ui->I_Spin_2->value());
    ui->I_Spin_2->setSingleStep((ui->I_Spin_2->maximum())*0.025);
    ui->I_Slider_2->setSingleStep(ui->I_Slider_2->maximum()*0.025);

    ui->I_Slider_3->setRange(0,128*static_cast<int>(ui->I_Spin_3->maximum()));
    ui->I_Spin_3->setValue(ui->I_Spin_3->value());
    ui->I_Spin_3->setSingleStep((ui->I_Spin_3->maximum())*0.025);
    ui->I_Slider_3->setSingleStep(ui->I_Slider_3->maximum()*0.025);

    ui->I_Slider_4->setRange(0,128*static_cast<int>(ui->I_Spin_4->maximum()));
    ui->I_Spin_4->setValue(ui->I_Spin_4->value());
    ui->I_Spin_4->setSingleStep((ui->I_Spin_4->maximum())*0.025);
    ui->I_Slider_4->setSingleStep(ui->I_Slider_4->maximum()*0.025);

    ui->I_Slider_5->setRange(0,128*static_cast<int>(ui->I_Spin_5->maximum()));
    ui->I_Spin_5->setValue(ui->I_Spin_5->value());
    ui->I_Spin_5->setSingleStep((ui->I_Spin_5->maximum())*0.025);
    ui->I_Slider_5->setSingleStep(ui->I_Slider_5->maximum()*0.025);

    ui->I_Slider_6->setRange(0,128*static_cast<int>(ui->I_Spin_6->maximum()));
    ui->I_Spin_6->setValue(ui->I_Spin_6->value());
    ui->I_Spin_6->setSingleStep((ui->I_Spin_6->maximum())*0.025);
    ui->I_Slider_6->setSingleStep(ui->I_Slider_6->maximum()*0.025);

    ui->I_Slider_7->setRange(0,128*static_cast<int>(ui->I_Spin_7->maximum()));
    ui->I_Spin_7->setValue(ui->I_Spin_7->value());
    ui->I_Spin_7->setSingleStep((ui->I_Spin_7->maximum())*0.025);
    ui->I_Slider_7->setSingleStep(ui->I_Slider_7->maximum()*0.025);

    ui->I_Slider_8->setRange(0,128*static_cast<int>(ui->I_Spin_8->maximum()));
    ui->I_Spin_8->setValue(ui->I_Spin_8->value());
    ui->I_Spin_8->setSingleStep((ui->I_Spin_8->maximum())*0.025);
    ui->I_Slider_8->setSingleStep(ui->I_Slider_8->maximum()*0.025);
}

//-------------------------connecting main to settings-------------------------
void Utama::openSettings() //function to open the settings window
{
    msettings=new Settings(this);
    connect(this,SIGNAL(prevRange(double,double,double,double,double,double,double,double,double,double,double,double,double,double,double,double)),
            msettings,SLOT(prevRange(double,double,double,double,double,double,double,double,double,double,double,double,double,double,double,double)));
    storeRange();//function to store current settings

    msettings->show();


    //connect all ranges to settings
    connect(msettings,SIGNAL(v1_range_changed(double)),this,SLOT(v1_range_changed(double)));
    connect(msettings,SIGNAL(v2_range_changed(double)),this,SLOT(v2_range_changed(double)));
    connect(msettings,SIGNAL(v3_range_changed(double)),this,SLOT(v3_range_changed(double)));
    connect(msettings,SIGNAL(v4_range_changed(double)),this,SLOT(v4_range_changed(double)));
    connect(msettings,SIGNAL(v5_range_changed(double)),this,SLOT(v5_range_changed(double)));
    connect(msettings,SIGNAL(v6_range_changed(double)),this,SLOT(v6_range_changed(double)));
    connect(msettings,SIGNAL(v7_range_changed(double)),this,SLOT(v7_range_changed(double)));
    connect(msettings,SIGNAL(v8_range_changed(double)),this,SLOT(v8_range_changed(double)));

    connect(msettings,SIGNAL(i1_range_changed(double)),this,SLOT(i1_range_changed(double)));
    connect(msettings,SIGNAL(i2_range_changed(double)),this,SLOT(i2_range_changed(double)));
    connect(msettings,SIGNAL(i3_range_changed(double)),this,SLOT(i3_range_changed(double)));
    connect(msettings,SIGNAL(i4_range_changed(double)),this,SLOT(i4_range_changed(double)));
    connect(msettings,SIGNAL(i5_range_changed(double)),this,SLOT(i5_range_changed(double)));
    connect(msettings,SIGNAL(i6_range_changed(double)),this,SLOT(i6_range_changed(double)));
    connect(msettings,SIGNAL(i7_range_changed(double)),this,SLOT(i7_range_changed(double)));
    connect(msettings,SIGNAL(i8_range_changed(double)),this,SLOT(i8_range_changed(double)));
}

void Utama::storeRange() //to show correct values in settings window everytime it's opened
{
    emit prevRange(ui->V_Spin_1->maximum(), ui->V_Spin_2->maximum(), ui->V_Spin_3->maximum(),
                   ui->V_Spin_4->maximum(), ui->V_Spin_5->maximum(), ui->V_Spin_6->maximum(),ui->V_Spin_7->maximum(),
                   ui->V_Spin_8->maximum(), ui->I_Spin_1->maximum(), ui->I_Spin_2->maximum(),ui->I_Spin_3->maximum(),
                   ui->I_Spin_4->maximum(),ui->I_Spin_5->maximum(),ui->I_Spin_6->maximum(),ui->I_Spin_7->maximum(),ui->I_Spin_8->maximum());

}

//-------------------------sync settings changed (V)-------------------------
void Utama::v1_range_changed(double arg1)
{
    ui->V_Spin_1->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::v2_range_changed(double arg1)
{
    ui->V_Spin_2->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::v3_range_changed(double arg1)
{
    ui->V_Spin_3->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::v4_range_changed(double arg1)
{
    ui->V_Spin_4->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::v5_range_changed(double arg1)
{
    ui->V_Spin_5->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::v6_range_changed(double arg1)
{
    ui->V_Spin_6->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::v7_range_changed(double arg1)
{
    ui->V_Spin_7->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::v8_range_changed(double arg1)
{
    ui->V_Spin_8->setRange(0,arg1);
    setupSliderSpin();
}

//-------------------------sync settings changed (I)-------------------------
void Utama::i1_range_changed(double arg1)
{
    ui->I_Spin_1->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::i2_range_changed(double arg1)
{
    ui->I_Spin_2->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::i3_range_changed(double arg1)
{
    ui->I_Spin_3->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::i4_range_changed(double arg1)
{
    ui->I_Spin_4->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::i5_range_changed(double arg1)
{
    ui->I_Spin_5->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::i6_range_changed(double arg1)
{
    ui->I_Spin_6->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::i7_range_changed(double arg1)
{
    ui->I_Spin_7->setRange(0,arg1);
    setupSliderSpin();
}

void Utama::i8_range_changed(double arg1)
{
    ui->I_Spin_8->setRange(0,arg1);
    setupSliderSpin();
}


//UI components
//-------------------------Max Voltage Sliders-------------------------
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

//-------------------------max Current Sliders-------------------------
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

//-------------------------pow buttons-------------------------
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

//-------------------------lock buttons-------------------------
void Utama::on_Lock_1_stateChanged(int arg1)
{
    qDebug()<<"lock 1 = "<<arg1;
    ui->V_Slider_1->setDisabled(arg1);
    ui->V_Spin_1->setDisabled(arg1);
    ui->I_Slider_1->setDisabled(arg1);
    ui->I_Spin_1->setDisabled(arg1);

}

void Utama::on_Lock_2_stateChanged(int arg1)
{
    qDebug()<<"lock 2 = "<<arg1;
    ui->V_Slider_2->setDisabled(arg1);
    ui->V_Spin_2->setDisabled(arg1);
    ui->I_Slider_2->setDisabled(arg1);
    ui->I_Spin_2->setDisabled(arg1);
}

void Utama::on_Lock_3_stateChanged(int arg1)
{
    qDebug()<<"lock 3 = "<<arg1;
    ui->V_Slider_3->setDisabled(arg1);
    ui->V_Spin_3->setDisabled(arg1);
    ui->I_Slider_3->setDisabled(arg1);
    ui->I_Spin_3->setDisabled(arg1);
}

void Utama::on_Lock_4_stateChanged(int arg1)
{
    qDebug()<<"lock 4 = "<<arg1;
    ui->V_Slider_4->setDisabled(arg1);
    ui->V_Spin_4->setDisabled(arg1);
    ui->I_Slider_4->setDisabled(arg1);
    ui->I_Spin_4->setDisabled(arg1);
}

void Utama::on_Lock_5_stateChanged(int arg1)
{
    qDebug()<<"lock 5 = "<<arg1;
    ui->V_Slider_5->setDisabled(arg1);
    ui->V_Spin_5->setDisabled(arg1);
    ui->I_Slider_5->setDisabled(arg1);
    ui->I_Spin_5->setDisabled(arg1);
}

void Utama::on_Lock_6_stateChanged(int arg1)
{
    qDebug()<<"lock 6 = "<<arg1;
    ui->V_Slider_6->setDisabled(arg1);
    ui->V_Spin_6->setDisabled(arg1);
    ui->I_Slider_6->setDisabled(arg1);
    ui->I_Spin_6->setDisabled(arg1);
}

void Utama::on_Lock_7_stateChanged(int arg1)
{
    qDebug()<<"lock 7 = "<<arg1;
    ui->V_Slider_7->setDisabled(arg1);
    ui->V_Spin_7->setDisabled(arg1);
    ui->I_Slider_7->setDisabled(arg1);
    ui->I_Spin_7->setDisabled(arg1);
}

void Utama::on_Lock_8_stateChanged(int arg1)
{
    qDebug()<<"lock 8 = "<<arg1;
    ui->V_Slider_8->setDisabled(arg1);
    ui->V_Spin_8->setDisabled(arg1);
    ui->I_Slider_8->setDisabled(arg1);
    ui->I_Spin_8->setDisabled(arg1);
}

void Utama::on_Settings_clicked()
{
    openSettings();
}

//-------------------------spinbox to slider (Voltage)-------------------------
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

//-------------------------Spin box to slider (Current)-------------------------
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

//-------------------------Main Power Switch-------------------------
void Utama::on_mainSwitch_toggled(bool checked)
{
    bool b = checked;
    qDebug() << "switch" << b;

    QPalette onSwitch;
    onSwitch.setColor(QPalette::Button,Qt::green);

    QPalette offSwitch;
    offSwitch.setColor(QPalette::Button,QColor(53,53,53));

    if(checked)
    {
        ui->mainSwitch->setPalette(onSwitch);
    }
    else
    {
        ui->mainSwitch->setPalette(offSwitch);
    }
}

