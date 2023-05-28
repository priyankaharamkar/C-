#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/QtImages/image-1");
    int w=ui->label_3_pic->width();
    int h=ui->label_3_pic->height();
    ui->label_3_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->label_3,1);//permanent on the window ==> this widgets are place on right side of the window permanent
    ui->statusbar->addPermanentWidget(ui->progressBar,3);
}                                                  //strech level

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username= ui->lineEdit_username->text();
    QString password= ui->lineEdit_password->text();
    if(username=="test" && password=="test")
    {                                                            //int timeout=0 in milisec
        ui->statusbar->showMessage("username and password is correct",5000);
        ui->label_3->setText("username and password is correct");
    }
    else{
        ui->statusbar->showMessage("username and password is not correct",5000);
        ui->label_3->setText("username and password is not correct");
    }
}

