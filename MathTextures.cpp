#include "MathTextures.h"


        RedGreen::RedGreen (Color color1 , Color color2)
        :
            firstColor(color1),
            secondColor(color2)
        {
        }


        Color RedGreen::getColor (float u,float v) const
        {
            Color first(firstColor);
            Color second(secondColor);
            return first*u*v + second * (1-u*v);
        }
