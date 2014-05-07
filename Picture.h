#ifndef PICTURE_H
#define PICTURE_H
#include "Color.h"

class Picture
{
public :
    Picture(int width, int height);
    ~Picture();

protected :

private :
    int width;
    int height;
    Color * pictureTab;

};
#endif
