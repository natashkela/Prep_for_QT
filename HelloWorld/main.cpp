//include some libraries and most important one is below
#include <QApplication>
//needed to ne able to create QLabel object
#include <QLabel>
int main(int argc, char* argv[]){
    //object of QApplcation
    QApplication app(argc,argv);
    QLabel *label=new QLabel("Hello World!");
    //adds title to the window
    label->setWindowTitle("Hello World Window");
    //makes the window be 400px by 400px
    label->resize(400,400);
    //Shows a window with the text in it
    label->show();
    return app.exec();
}
