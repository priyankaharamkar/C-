#include "mainwindow.h"
#include "ui_mainwindow.h"
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


void MainWindow::on_pushButton_clicked()
{
   if(ui->radioButton_raj->isChecked())
   {
       QMessageBox::information(this,"title","Raj");
   }
   if(ui->radioButton_vicky->isChecked())
   {
       QMessageBox::information(this,"title","Vicky");
   }

}

