#ifndef SUBSCRIBE_H
#define SUBSCRIBE_H

#include <QWidget>

namespace Ui {
class Subscribe;
}

class Subscribe : public QWidget
{
    Q_OBJECT

public:
    explicit Subscribe(QWidget *parent = nullptr);
    ~Subscribe();

private:
    Ui::Subscribe *ui;
};

#endif // SUBSCRIBE_H
