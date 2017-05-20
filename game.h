#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QGraphicsScene>
class Mirror;

class Game: public QGraphicsView
{
public:
    QGraphicsScene *scene;
    Mirror* container[100];
    int n1,n2;  // ile jest luster w tablicy i ktore jest sfocusowane
public:
    Game();
    void addMirror(Mirror*);
    void changeFocus();
    Game& operator=(const Game&);
};

#endif // GAME_H
