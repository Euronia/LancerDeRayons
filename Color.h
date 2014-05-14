#ifndef COLOR_H
#define COLOR_H

class Color
{
public :
    Color();
    Color(float x, float y, float z);
    Color addColors(const Color& c1, const Color& c2);
    Color multiplyColors(const Color& c1, const Color& c2);

protected :

private :
    float r;
    float g;
    float b;
} ;
#endif
