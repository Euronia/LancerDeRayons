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

Color Color::operator+(const Color& c)
{
    this->r = this->r + c.r;
    this->g = this->g + c.g;
    this->b = this->b + c.b;
}

Color Color::operator*(const Color& c)
{
    this->r = this->r * c.r;
    this->g = this->g * c.g;
    this->b = this->b * c.b;
}

Color Color::operator*(float scalar)
{
    this->r = this->r * scalar;
    this->g = this->g * scalar;
    this->b = this->b * scalar;
}
