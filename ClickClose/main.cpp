#include "mywindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //these two lins of code is responsive to show the gui
    MyWindow w; //mainwindow.h has a class called MyWindow that is automatically created
    w.show();

    return a.exec();
}
