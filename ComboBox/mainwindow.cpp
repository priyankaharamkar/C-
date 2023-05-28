#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // ui->comboBox->addItem("Raj");
   //  ui->comboBox->addItem("Vicky");
    //  ui->comboBox->addItem("Ravi");

//      ui->comboBox->addItem(QIcon(":/res/img/New.jpg"),"Raj");
//       ui->comboBox->addItem(QIcon(":/res/img/Open-File.jpg"),"Vicky");
//        ui->comboBox->addItem(QIcon(":/res/img/Exit.jpg"),"Ravi");

        for(int i=0;i<10;i++)
        {
            ui->comboBox->addItem(QIcon(":/res/img/Exit.jpg"),QString::number(i)+"name");
        }
        ui->comboBox->insertItem(3,QIcon(":/res/img/Exit.jpg"),"New text");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  //  QMessageBox::information(this,"title",ui->comboBox->currentText());
    QMessageBox::information(this,"title",QString::number(ui->comboBox->currentIndex()));//only show number of index
}

