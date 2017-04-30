#include "scene.h"
#include <QPainter>
#include <cmath>

Scene::Scene(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(600,600);
    n = 0;
}

void Scene::paintEvent(QPaintEvent*){

    double x1,y1,radian;
    QPainter painter(this);
    painter.setPen(QPen(Qt::red,3));
  //  painter.drawLine(5,5,100,100);
    for(int i=0;i<n;i++){

         radian = ( (tab[i].mirror_angle) /360)*2*M_PI;
         x1= tab[i].mirror_width*cos(radian);
         y1= tab[i].mirror_width*sin(radian);
         painter.drawLine(tab[i].x-x1,tab[i].y+y1,tab[i].x+x1,tab[i].y-y1);

    }
}

void Scene::addMirror(Lustro& lustro){

    tab[n]=lustro;
    n++;
    update();
}
