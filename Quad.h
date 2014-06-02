#ifndef QUAD_H
#define QUAD_H
#include "Geometry.h"
#include "Vector.h"
#include "Point.h"

class Quad : public Geometry
{
public :
    Quad();
    ~Quad();
    Quad(const Point& a, const Point& b, const Point& c, const Point& d);
    bool intersect(const Rayon &rayon, float& dist) const;
    bool intersect(const Rayon& rayon, Hit &hit, float& dist) const;

protected :

private :
    Point a;
    Point b;
    Point c;
    Point d;
};
#endif
