#include "dialogsudo.h"
#include "ui_dialogsudo.h"

DialogSudo::DialogSudo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSudo)
{
    ui->setupUi(this);
    ui->pseudo->setPlaceholderText("Enter your pseudo");
    ui->passwd->setPlaceholderText("Enter your password");
}

DialogSudo::~DialogSudo()
{
    delete ui;
}
