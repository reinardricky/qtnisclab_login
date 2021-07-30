#include "settings.h"
#include "ui_settings.h"
#include "utama.h"
#include "ui_utama.h"
#include <qstylefactory.h>

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    ui->setupUi(this);

    //color for fun
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
}

Settings::~Settings()
{
    delete ui;
}


void Settings::prevRange(double v1,double v2,double v3,double v4,double v5,double v6,double v7,double v8,double i1,double i2,double i3,double i4,double i5,double i6,double i7,double i8)
{
    ui->I_Ch_1->setValue(i1);
    ui->I_Ch_2->setValue(i2);
    ui->I_Ch_3->setValue(i3);
    ui->I_Ch_4->setValue(i4);
    ui->I_Ch_5->setValue(i5);
    ui->I_Ch_6->setValue(i6);
    ui->I_Ch_7->setValue(i7);
    ui->I_Ch_8->setValue(i8);

    ui->V_Ch_1->setValue(v1);
    ui->V_Ch_2->setValue(v2);
    ui->V_Ch_3->setValue(v3);
    ui->V_Ch_4->setValue(v4);
    ui->V_Ch_5->setValue(v5);
    ui->V_Ch_6->setValue(v6);
    ui->V_Ch_7->setValue(v7);
    ui->V_Ch_8->setValue(v8);
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

