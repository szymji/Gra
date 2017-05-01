#ifndef SCENE_H
#define SCENE_H


#include <QWidget>
#include <QPaintEvent>

#include "lustro.h"

class Scene : public QWidget
{
     Q_OBJECT
private:
    int n,nmax;
    Lustro* tab;  // bedzie rozszerzajaca sie tablica

    void paintEvent(QPaintEvent*);

public:
    Scene(QWidget *parent = 0);
    void addMirror(Lustro);
    ~Scene(){ delete tab; }
};


#endif
