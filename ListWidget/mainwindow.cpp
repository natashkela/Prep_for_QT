#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem("Mark");
     QListWidgetItem *item1 = new QListWidgetItem("John");
      QListWidgetItem *item2 = new QListWidgetItem("Tyler");
    ui->listWidget->addItem(item);
     ui->listWidget->addItem(item1);
      ui->listWidget->addItem(item2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"title",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::red);
}
