#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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
    if(ui->radioButton->isChecked()){
        if(ui->radioButton_3->isChecked()){
            QMessageBox::information(this,"title","User prefers Mark and Cat");
        }
        if(ui->radioButton_4->isChecked()){
            QMessageBox::information(this,"title","User prefers Mark and Dog");
        }
    }
    if(ui->radioButton_2->isChecked()){
        if(ui->radioButton_3->isChecked()){
            QMessageBox::information(this,"title","User prefers John and Cat");
        }
        if(ui->radioButton_4->isChecked()){
            QMessageBox::information(this,"title","User prefers John and Dog");
        }
    }
}
