#include "mainwindow.h"
#include "utama.h"
#include "subscribe.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QLabel *label = new QLabel("Hello World");
//    label ->setWindowTitle("ANJAY");
//    label ->resize(400,400);
//    label ->show();
    MainWindow w;
    w.show();
    return a.exec();
}
