#ifndef SCENE_H
#define SCENE_H
#include <iostream>
#include <vector>
#include <memory>
#include "Scene_Entity.h"
/*
* This class represents the 3D scene
* The scene is defined by an array of Scene_Entity
*
*/

class Scene
{
public :
    Scene();
    Scene(const std::vector<std::shared_ptr<Scene_Entity>>& tab);
    Color lanceRayon(const Rayon& ray) const;
    void addEntity(std::shared_ptr<Scene_Entity> entity);

protected :

private :
    std::vector<std::shared_ptr<Scene_Entity>> objectsTab ;
};


#endif
