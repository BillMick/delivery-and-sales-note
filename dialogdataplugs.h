#ifndef DIALOGDATAPLUGS_H
#define DIALOGDATAPLUGS_H

#include <QDialog>

namespace Ui {
class DialogDataPlugs;
}

class DialogDataPlugs : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDataPlugs(QWidget *parent = nullptr);
    ~DialogDataPlugs();

private slots:
    void on_quit_clicked();

private:
    Ui::DialogDataPlugs *ui;
};

#endif // DIALOGDATAPLUGS_H
