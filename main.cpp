#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    if(1){
    printf("Tuto");
    printf("Test2")
    }
    return a.exec();
}
