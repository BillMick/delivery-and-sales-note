#include "dialogsale.h"
#include "ui_dialogsale.h"
#include <QMessageBox>

DialogSale::DialogSale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSale)
{
    ui->setupUi(this);
    ui->searchEdit->setPlaceholderText("Enter research indication");
    ui->designation->setPlaceholderText("Enter designation/id");
}

DialogSale::~DialogSale()
{
    delete ui;
}

void DialogSale::on_quit_clicked()
{
    int answer = QMessageBox::question(this, "Exit Confirmation",
    "Do you really want to quit App?", QMessageBox::Yes | QMessageBox::No);
    if (answer == QMessageBox::Yes)
    {
        exit(0);
    }
}
