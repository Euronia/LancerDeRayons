#include <iostream>
#include "Optic.h"
#include "Texture.h"

Optic::Optic()
{
}

Optic::~Optic()
{
}



Color Optic::getColor (float posX,float posY)
{
    return t.getColor(posX,posY);
}
