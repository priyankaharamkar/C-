#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //third process first we have put message then window open
    ui->checkBox->setChecked(true);//this method show only boolean values
}

MainWindow::~MainWindow()
{
    delete ui;
}

//first process we need to click push button in this case
void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"title","Yes user likes mangoes");
    }
    else{
        QMessageBox::information(this,"title","No user do not  likes mangoes");
    }
}

//second process in this case we not need to use push button directly click on checkbox then we get message on window
void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"title","Yes user likes mangoes");
    }
    else{
        QMessageBox::information(this,"title","No user do not likes mangoes");
    }
}

