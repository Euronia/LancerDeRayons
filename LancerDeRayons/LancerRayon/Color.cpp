#include <iostream>
#include "Color.h"

Color::Color()
:
        r(1.0),
        g(1.0),
        b(1.0)
{
}

Color::Color(float x, float y, float z)
{
    if(x>=0.0 && x<=1.0)
    {
        r = x;
    }
    else
    {
        r = 1.0;
    }

    if(y>=0.0 && y<=1.0)
    {
        g = y;
    }
    else
    {
        g = 1.0;
    }

    if(z>=0.0 && z<=1.0)
    {
        b = z;
    }
    else
    {
        b = 1.0;
    }
}
