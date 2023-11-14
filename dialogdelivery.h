#ifndef DIALOGDELIVERY_H
#define DIALOGDELIVERY_H

#include <QDialog>

namespace Ui {
class DialogDelivery;
}

class DialogDelivery : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDelivery(QWidget *parent = nullptr);
    ~DialogDelivery();

private slots:
    void on_quit_clicked();

    void on_customersInterface_clicked();

    void on_sale_clicked();

    void on_sellingEvolution_clicked();

private:
    Ui::DialogDelivery *ui;
};

#endif // DIALOGDELIVERY_H
