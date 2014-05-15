#ifndef HIT_H
#define HIT_H
#include "Vector.h"
#include "Point.h"

class Hit
{

public:
    Hit(Point impactPoint, Vector normal, float u, float v);

protected:

private:
    Point impactPoint;
    Vector normal;
    float u;
    float v;
};

#endif
