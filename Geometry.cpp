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
