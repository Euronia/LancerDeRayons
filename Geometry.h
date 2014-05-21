#ifndef GEOMETRY_H
#define GEOMETRY_H
#include "Optic.h"
#include "Rayon.h"
#include "Hit.h"

class Geometry
{

public :
    Geometry();
    virtual bool intersect(const Rayon &rayon, float& dist) const = 0;
    virtual bool intersect(const Rayon &rayon, Hit &hit, float& dist) const = 0;
    virtual ~Geometry();

protected :

private :

};

#endif
