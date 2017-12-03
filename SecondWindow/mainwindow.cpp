#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "seconddialog.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//create an object
//SecondDialog sec;
//sec.setModal(true);
//sec.exec();
hide();
sec = new SecondDialog(this);
sec->show();
}
