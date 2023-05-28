#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/QtImages/image-1");
    //int w =ui->label_pic->width();
   // int h =ui->label_pic->height();

                                       //width,height
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
        QMessageBox::information(this,"Login","Username and Password is Correct");
        secDialog =new SecDialog(this);
        secDialog->show();
    }
    else{
        QMessageBox::warning(this,"Login","Username and Password is not Correct");
    }
}

