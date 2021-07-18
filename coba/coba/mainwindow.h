#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "subscribe.h"
#include "utama.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
   void openSubscribe();
   void openUtama();

private slots:

    void on_Login_clicked();

private:
    Ui::MainWindow *ui;
    Subscribe *mSubscribe;
    Utama *mUtama;
};
#endif // MAINWINDOW_H
