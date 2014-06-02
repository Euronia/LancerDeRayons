#include "LightSource.h"

LightSource::LightSource(const Point& originPoint ,const Color& lightColor)
:
    origin(originPoint) ,
    color(lightColor)
{
}

    Point LightSource::getOrigin () const
    {
        return origin;
    }

    Color LightSource::getColor () const
    {
        return color;
    }
