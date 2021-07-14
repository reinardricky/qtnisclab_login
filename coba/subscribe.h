#ifndef SUBSCRIBE_H
#define SUBSCRIBE_H

#include <QWidget>
#include "utama.h"

namespace Ui {
class Subscribe;
}

class Subscribe : public QWidget
{
    Q_OBJECT

public:
    explicit Subscribe(QWidget *parent = nullptr);
    ~Subscribe();
public slots:
   void openUtama();

private slots:

    void on_Paysub_clicked();

private:
    Ui::Subscribe *ui;
    Utama *mUtama;
};

#endif // SUBSCRIBE_H
