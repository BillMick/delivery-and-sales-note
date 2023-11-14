#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogdelivery.h"
#include "dialogsale.h"
#include "dialogcustomer.h"
#include "dialogdataplugs.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_delivery_clicked()
{
    DialogDelivery fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}

void MainWindow::on_sale_clicked()
{
    DialogSale fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}

void MainWindow::on_customer_clicked()
{
    DialogCustomer fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}

void MainWindow::on_quit_clicked()
{
    int answer = QMessageBox::question(this, "Exit Confirmation",
    "Do you really want to quit App?", QMessageBox::Yes | QMessageBox::No);
    if (answer == QMessageBox::Yes)
    {
        exit(0);
    }
}

void MainWindow::on_sellingEvolution_clicked()
{
    DialogDataPlugs fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}
