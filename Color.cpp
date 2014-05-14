#include <iostream>
#include "Color.h"

Color::Color()
:
        r(1.0),
        g(1.0),
        b(1.0)
{
}

Color::Color(float r, float g, float b)
{
    if(r>=0.0 && r<=1.0)
    {
        this->r = r;
    }
    else
    {
        this->r = 1.0;
    }

    if(g>=0.0 && g<=1.0)
    {
        this->g = g;
    }
    else
    {
        this->g = 1.0;
    }

    if(b>=0.0 && b<=1.0)
    {
        this->b = b;
    }
    else
    {
        this->b = 1.0;
    }
}

Color Color::addColors(const Color& c1, const Color& c2)
{
    Color colorResult;

    colorResult.r = c1.r + c2.r;
    colorResult.g = c1.g + c2.g;
    colorResult.b = c1.b + c2.b;

    return colorResult;
}

Color Color::multiplyColors(const Color& c1, const Color& c2)
{
    Color colorResult;

    colorResult.r = c1.r * c2.r;
    colorResult.g = c1.g * c2.g;
    colorResult.b = c1.b * c2.b;

    return colorResult;
}
