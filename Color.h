#ifndef COLOR_H
#define COLOR_H

class Color
{
public :
    Color();
    Color(float x, float y, float z);
    Color operator+ (const Color& c1);
    Color operator* (const Color& c);
    Color operator* (float scalary);
    float r;
    float g;
    float b;
    friend Color mult2 (const Color& c1 , const Color& c2);

protected :

private :

} ;
#endif
