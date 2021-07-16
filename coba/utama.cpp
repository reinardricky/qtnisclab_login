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
