#include "mainwindow.h"
#include "lustro.h"
#include "scene.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Scene scena(&w);
    Lustro lustro(300,300);
    Lustro lusterko(100,100);
    scena.addMirror(lustro);
    scena.addMirror(lusterko);
    w.show();
    return a.exec();
}
