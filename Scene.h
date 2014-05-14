#ifndef SCENE_H
#define SCENE_H
#include <iostream>
#include <vector>
#include <memory>
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
    Scene(const std::vector<std::shared_ptr<Geometry>>& tab);

protected :

private :
    std::vector<std::shared_ptr<Geometry>> objectsTab ;
};


#endif
