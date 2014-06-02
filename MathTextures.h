#ifndef MATHTEXTURES
#define MATHTEXTURES
#include "Color.h"
#include "Texture.h"


    class RedGreen : public Texture
    {
    public :
        RedGreen (Color color1 , Color color2);
        Color getColor (float u,float v) const ;

    protected :

    private :
        Color firstColor ;
        Color secondColor;
    };
#endif // MATHTEXTURES
