#include <iostream>
#include "Optic.h"
#include "Texture.h"

Optic::Optic()
:
    t(),
    bright(0)
{

}

Optic::Optic(const Texture& t, int bright)
:
    t(t),
    bright(bright)
    {
    }

Color Optic::getColor (float posX,float posY)
{
    return t.getColor(posX,posY);
}
