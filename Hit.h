#ifndef HIT_H
#define HIT_H
#include "Vector.h"
#include "Point.h"

class Hit
{

public:
    Hit(const Point& impactPoint, const Vector& normal, float u, float v);

protected:

private:
    Point impactPoint;
    Vector normal;
    float u;
    float v;
};

#endif
