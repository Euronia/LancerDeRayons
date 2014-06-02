#include <iostream>
#include <fstream>
#include <math.h>
#include "Color.h"
#include "Picture.h"

using namespace std;

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

void Picture::GenerateFile() const
{
    ofstream myStream("picture.ppm");
    if(!myStream)
    {
        cout << "No such file or directory" << endl;
    }
    else
    {
         cout << "Generation" << endl;
        myStream << "P3" << endl;
        myStream << this->width << " " << this->height << endl;
        myStream << 255 << endl;
        for(int i=0; i<this->height; i++)
        {
            for(int j=0; j<this->width; j++)
            {
                int r , g ,b ;
                r = round(this->pictureTab[i*this->width+j].r*255) ;
                if (r>255) {r=255;}
                g = round(this->pictureTab[i*this->width+j].g*255) ;
                if (g>255) {g=255;}
                b = round(this->pictureTab[i*this->width+j].b*255) ;
                if (b>255) {b=255;}
                myStream << r << " " << g << " " << b << " ";
            }
            myStream << endl;
        }
        cout << "Fini" << endl;
    }
}
    int Picture::getWidth() const
    {
        return width ;
    }

    int Picture::getHeight() const
    {
        return height ;
    }


Color * Picture::getPictureTab() const
{
    return(this->pictureTab);
}
