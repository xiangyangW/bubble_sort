#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->bt_clear,SIGNAL(clicked()),this,SLOT(bt_cl_clicked()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void bubble_sort (int *array,int length=4)
{
    int i, j;
    for(i=0; i<length; i++)
    {
        for(j=0; j<length-i; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void MainWindow::on_bt_confirm_clicked()
{
    arr_i[0] = ui->lineEdit_i1->text();
    arr_i[1] = ui->lineEdit_i2->text();
    arr_i[2] = ui->lineEdit_i3->text();
    arr_i[3] = ui->lineEdit_i4->text();


    for(int i=0; i<4; i++)
    {
        QString str1 = arr_i[i];
        bool ok;
        arr_o[i] = str1.toInt(&ok, 10);
    }

    bubble_sort(arr_o);

    ui->lineEdit_o1->setText(QString::number(arr_o[0]));
    ui->lineEdit_o2->setText(QString::number(arr_o[1]));
    ui->lineEdit_o3->setText(QString::number(arr_o[2]));
    ui->lineEdit_o4->setText(QString::number(arr_o[3]));


}

//void MainWindow::on_bt_clear_clicked()
//{
//    ui->lineEdit_i1->setText(" ");
//    ui->lineEdit_i2->setText(" ");
//    ui->lineEdit_i3->setText(" ");
//    ui->lineEdit_i4->setText(" ");

//    ui->lineEdit_o1->setText(" ");
//    ui->lineEdit_o2->setText(" ");
//    ui->lineEdit_o3->setText(" ");
//    ui->lineEdit_o4->setText(" ");
//}

void MainWindow::bt_cl_clicked()
{
        ui->lineEdit_i1->setText(" ");
        ui->lineEdit_i2->setText(" ");
        ui->lineEdit_i3->setText(" ");
        ui->lineEdit_i4->setText(" ");

        ui->lineEdit_o1->setText(" ");
        ui->lineEdit_o2->setText(" ");
        ui->lineEdit_o3->setText(" ");
        ui->lineEdit_o4->setText(" ");
}
