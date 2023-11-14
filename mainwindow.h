#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_delivery_clicked();

    void on_sale_clicked();

    void on_customer_clicked();

    void on_quit_clicked();

    void on_sellingEvolution_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
