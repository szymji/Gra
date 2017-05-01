#include "lustro.h"
#include <cmath>

Lustro::Lustro(int xx,int yy):
    x(xx),y(yy)
{
    mirror_angle = 60;
    mirror_width = 50;
}

double Lustro::getSlope()
{

    return tan(mirror_angle);
}
