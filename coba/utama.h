#ifndef UTAMA_H
#define UTAMA_H

#include <QWidget>

namespace Ui {
class Utama;
}

class Utama : public QWidget
{
    Q_OBJECT

public:
    explicit Utama(QWidget *parent = nullptr);
    ~Utama();

private:
    Ui::Utama *ui;
//    float sliderToSpin(float);
};

#endif // UTAMA_H
