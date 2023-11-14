#include "dialogcustomer.h"
#include "ui_dialogcustomer.h"
#include <QMessageBox>
#include "dialogdelivery.h"

DialogCustomer::DialogCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCustomer)
{
    ui->setupUi(this);
    ui->firstname->setPlaceholderText("Enter firstname");
    ui->surname->setPlaceholderText("Enter surname");
    ui->email->setPlaceholderText("Enter email");
    ui->tel->setPlaceholderText("Enter phone number");
    ui->searchEdit->setPlaceholderText("Enter research indication");
}

DialogCustomer::~DialogCustomer()
{
    delete ui;
}

void DialogCustomer::on_quit_clicked()
{
    int answer = QMessageBox::question(this, "Exit Confirmation",
    "Do you really want to quit App?", QMessageBox::Yes | QMessageBox::No);
    if (answer == QMessageBox::Yes)
    {
        exit(0);
    }
}

void DialogCustomer::on_slip_clicked()
{
    hide();
    DialogDelivery fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}
