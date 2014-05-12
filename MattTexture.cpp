#include <iostream>
#include "MattTexture.h"
#include "Color.h"

MattTexture::MattTexture()
{
    c = Color(0,0,0);
}

MattTexture::MattTexture(const Color& color)
{
    c = color;
}
