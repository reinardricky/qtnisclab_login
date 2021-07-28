#include "mainwindow.h"
#include "paymentwindow.h"
#include "settings.h"
#include "subscribe.h"
#include "utama.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QLabel *label = new QLabel("Hello World");
//    label ->setWindowTitle("ANJAY");
//    label ->resize(400,400);
//    label ->show();

    //uncomment to open which window first
    MainWindow w; //login window
//    PaymentWindow w; //credit card window
//    Settings w; //settings window
//    Subscribe w; //subscription choice window
//    Utama w; //main menu

    w.show();
    return a.exec();
}
