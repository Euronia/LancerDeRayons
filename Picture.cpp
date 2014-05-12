#include <iostream>
#include "Color.h"
#include "Picture.h"

Picture::Picture(int x, int y)
:
   width(x),
   height(y)
{
   pictureTab = new Color[width*height];
}

Picture::~Picture()
{
    delete[] pictureTab;
}
