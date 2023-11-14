#ifndef DIALOGSUDO_H
#define DIALOGSUDO_H

#include <QDialog>

namespace Ui {
class DialogSudo;
}

class DialogSudo : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSudo(QWidget *parent = nullptr);
    ~DialogSudo();

private:
    Ui::DialogSudo *ui;
};

#endif // DIALOGSUDO_H
