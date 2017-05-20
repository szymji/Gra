#include "game.h"
#include "mirror.h"
#include<QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Game g;

    Mirror lustro(100,100);
    Mirror lusterko(300,300);
    Mirror zwierciadlo(130,140,20);
    Mirror lustro2(100,100,50);
    g.addMirror(&lustro);
    g.addMirror(&lusterko);
    g.addMirror(&zwierciadlo);
    g.addMirror(&lustro2);

    g.show();

    return a.exec();
}
