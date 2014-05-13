#ifndef SCENE_H
#define SCENE_H
#include <iostream>
#include <vector>
#include "Geometry.h"
/*
* This class represents the 3D scene
* The scene is defined by an array of Geometry
*
*/

class Scene
{
public :
    Scene();
    Scene(std::vector<Geometry> tab);

protected :

private :
    std::vector<Geometry> objectsTab ;
};


#endif
