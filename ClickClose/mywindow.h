#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>
//telling the UI file to include MyWindow
namespace Ui {
class MyWindow;
}
//main window template will be used for the class
class MyWindow : public QMainWindow
{
    Q_OBJECT //Meta object compiler that takes all ehaders files into equivalent c++ code
    //we are going to use the qt application with signals and slots

public:
    explicit MyWindow(QWidget *parent = 0); //constructor
    ~MyWindow();//destructor deletes all the pointer objects

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyWindow *ui;
};

#endif // MYWINDOW_H
