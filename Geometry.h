#ifndef GEOMETRY_H
#define GEOMETRY_H
#include "Optic.h"

class Geometry
{

public :
    Geometry();
    Geometry(const Optic& o);
    Color getColor (float posX,float posY) const;
    virtual bool intersect(const Rayon &rayon, float dist) const = 0;
    virtual bool intersect(const Rayon &rayon, Hit &hit, float dist) const = 0;

protected :
    Optic o;

private :

};

#endif
