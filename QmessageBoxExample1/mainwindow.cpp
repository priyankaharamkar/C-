#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
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
{             //standard buttons
    //QMessageBox::about(this,"My Title","This is my custom message"); //simple title and message print on page
    //QMessageBox::aboutQt(this,"My Title");    // information about QT Application
    //QMessageBox::critical(this,"My Title","This is my custom message"); //quit button means exit "X" button icon
    //QMessageBox::information(this,"My Title","This is my custom page"); //information icon like as "i"
    //QMessageBox::warning(this,"My Title","This is my custom message");  //warning icon "!"
    QMessageBox::StandardButton reply = QMessageBox::question(this,"My Title","This is my custom message",QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
    QApplication::quit();
    }
    else{
        qDebug() <<"No is clicked"; //qDebug() is like as cout in cpp
    }
}

