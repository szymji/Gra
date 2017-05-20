#include "mirror.h"
#include "game.h"
#include <QPen>
#include <QKeyEvent>

Mirror::Mirror(int xx,int yy,double anglee):x(xx),y(yy),angle(anglee),game(NULL)
{
    width = 50;
    setFlag(QGraphicsItem::ItemIsFocusable); // by mozna bylo nim ruszac

    createGraphicsItem();
}

void Mirror::createGraphicsItem()
{

    // ustawianie pozycji
    double x1,y1,radian;
    radian =(angle/360)*2*M_PI;
    x1= width*cos(radian);
    y1= width*sin(radian);
    setLine(x+x1,y-y1,x-x1,y+y1);

    //wygląd lustra
    QPen pen;
    pen.setWidth(8);
    pen.setColor(Qt::red);
    setPen(pen);
}

void Mirror::keyPressEvent(QKeyEvent *event)
{
    if( event->key()==Qt::Key_Space ){ game->changeFocus();  }
    if( event->key()==Qt::Key_Down ){ angle-=5; createGraphicsItem();  }
    if( event->key()==Qt::Key_Up ){ angle+=5; createGraphicsItem();  }
}
