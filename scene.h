#ifndef SCENE_H
#define SCENE_H


#include <QWidget>
#include <QPaintEvent>

#include "lustro.h"

class Scene : public QWidget
{
     Q_OBJECT
private:
    int n;
    Lustro tab[4];  // dodac dynamiczna tablice

    void paintEvent(QPaintEvent*);

public:
    Scene(QWidget *parent = 0);
    void addMirror(Lustro&);
  //  ~Scene();
};


#endif
