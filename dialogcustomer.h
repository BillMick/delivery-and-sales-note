#ifndef DIALOGCUSTOMER_H
#define DIALOGCUSTOMER_H

#include <QDialog>

namespace Ui {
class DialogCustomer;
}

class DialogCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCustomer(QWidget *parent = nullptr);
    ~DialogCustomer();

private slots:
    void on_quit_clicked();

    void on_slip_clicked();

private:
    Ui::DialogCustomer *ui;
};

#endif // DIALOGCUSTOMER_H
