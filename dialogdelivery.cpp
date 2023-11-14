#include "dialogdelivery.h"
#include "ui_dialogdelivery.h"
#include <QMessageBox>
#include "dialogcustomer.h"
#include "dialogsale.h"
#include "dialogdataplugs.h"

DialogDelivery::DialogDelivery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDelivery)
{
    ui->setupUi(this);
    ui->searchEdit->setPlaceholderText("Enter research indication");
    ui->designation->setPlaceholderText("Enter designation/id");
}

DialogDelivery::~DialogDelivery()
{
    delete ui;
}

void DialogDelivery::on_quit_clicked()
{
    int answer = QMessageBox::question(this, "Exit Confirmation",
    "Do you really want to quit App?", QMessageBox::Yes | QMessageBox::No);
    if (answer == QMessageBox::Yes)
    {
        exit(0);
    }
}

void DialogDelivery::on_customersInterface_clicked()
{
    hide();
    DialogCustomer fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}

void DialogDelivery::on_sale_clicked()
{
    hide();
    DialogSale fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}

void DialogDelivery::on_sellingEvolution_clicked()
{
    hide();
    DialogDataPlugs fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}
