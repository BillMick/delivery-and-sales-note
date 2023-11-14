#include "dialogdataplugs.h"
#include "ui_dialogdataplugs.h"
#include <QMessageBox>

DialogDataPlugs::DialogDataPlugs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDataPlugs)
{
    ui->setupUi(this);
}

DialogDataPlugs::~DialogDataPlugs()
{
    delete ui;
}

void DialogDataPlugs::on_quit_clicked()
{
    int answer = QMessageBox::question(this, "Exit Confirmation",
    "Do you really want to quit App?", QMessageBox::Yes | QMessageBox::No);
    if (answer == QMessageBox::Yes)
    {
        exit(0);
    }
}
