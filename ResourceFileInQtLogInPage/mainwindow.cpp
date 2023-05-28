#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  ui->statusbar->addPermanentWidget(ui->label_3,1);
  //  ui->statusbar->addPermanentWidget(ui->progressBar,1);
    QPixmap pix(":/resources/img/image-1.jpg");
    ui->label_pic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if(username=="test" && password=="test")
    {
      //  QMessageBox::information(this,"Login","username and password is correct");
        ui->statusbar->showMessage("username and password is correct",1000);
        ui->label_3->setText("username and password is correct");
       // hide();
        secDialog =new SecDialog(this);
        secDialog->show();
    }
    else{
      //  QMessageBox::warning(this,"Login","username and password is not correct");
        ui->statusbar->showMessage("username and password is not correct",1000);
        ui->label_3->setText("username and password is not correct");
    }
}

