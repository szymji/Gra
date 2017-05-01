#ifndef LUSTRO_H
#define LUSTRO_H
#include <QWidget>


class Scene;

class Lustro
{
private:
    double mirror_width;
    double mirror_angle;
    int x,y;  // docelowo w klasie obiekt
    friend class Scene;
public:
    Lustro(int=0,int=0);
    double getSlope();

};

#endif // LUSTRO_H
