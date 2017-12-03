#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/stock-photo-man-and-woman-hold-hands-holding-hands-couple-sketch-back-view-upper-body-guy-and-girl-standing-627903560.jpg");
    ui->labelPic->setPixmap(pix.scaled(ui->labelPic->width(),ui->labelPic->height(),Qt::KeepAspectRatio));
    ui->statusBar->addPermanentWidget(ui->label_5);
    ui->statusBar->addPermanentWidget(ui->progressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();
    if(username == "test" && password == "test"){
        //QMessageBox::information(this,"Login","Username and password is correct");
        //hide();
//        sec = new SecondDialog(this);
//        sec->show();
        ui->statusBar->showMessage("Username and password is correct",5000);
    }
    else{
           // QMessageBox::warning(this,"Login","Username and password is incorrect");
        ui->statusBar->showMessage("Username and password is incorrect",5000);
    }
}
