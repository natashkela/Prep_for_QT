#include "mywindow.h"
#include "ui_mywindow.h"

MyWindow::MyWindow(QWidget *parent) :
    QMainWindow(parent),//constructor initializing ui object
    ui(new Ui::MyWindow)
{
    ui->setupUi(this);//responsible to open the window
}

MyWindow::~MyWindow()
{
    delete ui;//destructor
}

//When Display Status is clicked this function is executed
void MyWindow::on_pushButton_clicked()
{
    ui->label->setText("Approved");
}
