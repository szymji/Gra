#include "game.h"
#include "mirror.h"
#include <cmath>


Game::Game()
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    n1 = 0;

    setFixedSize(800,600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(scene);
}

void Game::addMirror(Mirror *l)
{

    scene->addItem(l);
    l->game = this;
    l->setFocus(); n2=n1;   // mozna poruszac tym obiektem
    container[n1] = l; n1++; // dodanie go do osobnej tablicy


}

void Game::changeFocus()
{
    if( n2==(n1-1) ) { n2 = 0; }
    else { n2+=1; }
    container[n2]->setFocus();
    qDebug("Kontrolujesz lustro nr %d",n2);
}

Game &Game::operator=(const Game &g)
{
    scene = g.scene;
    for(int i=0;i<n1;i++){ container[i]=g.container[i]; }
    n1=g.n1; n2=g.n2;
    setScene(scene);


    return *this;
}

