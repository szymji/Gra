#include "mainwindow.h"
#include "lustro.h"
#include "scene.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    Scene scena(&w);

    for(int i=0;i<10;i++){

        scena.addMirror(Lustro(10*i+70,10*i+70));

    }

    w.show();
    return a.exec();
}
