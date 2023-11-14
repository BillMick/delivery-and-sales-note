#ifndef DIALOGSALE_H
#define DIALOGSALE_H

#include <QDialog>

namespace Ui {
class DialogSale;
}

class DialogSale : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSale(QWidget *parent = nullptr);
    ~DialogSale();

private slots:
    void on_quit_clicked();

private:
    Ui::DialogSale *ui;
};

#endif // DIALOGSALE_H
