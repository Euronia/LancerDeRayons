#include <iostream>
#include "Geometry.h"
#include "Optic.h"

Geometry::Geometry()
:
    o()
{

}

Geometry::Geometry(Optic optic)
:
    o(optic)
{

}
