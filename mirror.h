#ifndef MIRROR_H
#define MIRROR_H
#include <QGraphicsLineItem>

class Game;



class Mirror : public QGraphicsLineItem
{
private:

    int x,y;
    double width,angle; 
    Game* game;
    void createGraphicsItem();
    void keyPressEvent(QKeyEvent* event);

public:
    Mirror(int=0,int=0,double=60);
    friend class Game;
};

#endif // MIRROR_H
