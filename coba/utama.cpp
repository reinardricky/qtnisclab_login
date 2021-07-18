#include "utama.h"
#include "ui_utama.h"

Utama::Utama(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Utama)
{
    ui->setupUi(this);
    connect(ui->upgrade, SIGNAL(click()), this, SLOT(openSubscribe()));
//    connect(ui->V_Slider_1,SIGNAL(valueChanged(int)),ui->V_Spin_1,SLOT(SlideToSpin(double)));
//    connect(ui->V_Spin_1,SIGNAL(valueChanged(double)),ui->V_Slider_1,SLOT(SpinToSlide(int)));
}

void Utama::openSubscribe()
{
    mSubscribe=new Subscribe();
    mSubscribe->show();
}

Utama::~Utama()
{
    delete ui;
}

void Utama::on_upgrade_clicked()
{
    openSubscribe();
}



void Utama::on_Pow_Ch_1_clicked()
{

}

