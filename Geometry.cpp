#include <iostream>
#include "Geometry.h"
#include "Optic.h"

Geometry::Geometry()
:
    o()
{

}

Geometry::Geometry(const Optic& optic)
:
    o(optic)
{

}

Color Geometry::getColor (float posX,float posY)
{
    return o.getColor(posX,posY);
}
