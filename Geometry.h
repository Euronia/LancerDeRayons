#ifndef GEOMETRY_H
#define GEOMETRY_H
#include "Optic.h"

class Geometry
{

public :
    Geometry();
    Geometry(const Optic& o);
    Color getColor (float posX,float posY);

protected :
    Optic o;

private :

};

#endif
