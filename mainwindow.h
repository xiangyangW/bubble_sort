#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

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
    void on_bt_confirm_clicked();

    //void on_bt_clear_clicked();
    void bt_cl_clicked();

private:
    Ui::MainWindow *ui;

    QString arr_i[4]={0};
    int arr_o[4]={0};

};
#endif // MAINWINDOW_H
