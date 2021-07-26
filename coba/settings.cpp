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

