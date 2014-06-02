#ifndef LIGHTSOURCE
#define LIGHTSOURCE
#include "Point.h"
#include "Color.h"

class LightSource
{
public :
    LightSource(const Point& originPoint ,const Color& lightColor);
    Point getOrigin () const ;
    Color getColor () const ;
protected :

private :
    Point origin ;
    Color color ;
};

#endif // LIGHTSOURCE
