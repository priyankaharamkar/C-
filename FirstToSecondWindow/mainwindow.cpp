#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "secdialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()  //main window destroy
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    //two ways of first to second dialog open


    //first way
//    SecDialog secDeialog;
//    secDeialog.setModal(true); //call setModal() method
//    secDeialog.exec();

    //Second way : first we create pointer in mainwindow.h file in private section and also include header file
                //   of "secdialog.h"
    hide(); //by using in this method we can hide the first main window
    secDialog=new SecDialog(this); //this will be also destroy
    secDialog->show();
}

