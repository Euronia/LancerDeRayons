#ifndef SCENE_H
#define SCENE_H
#include <iostream>
#include <vector>
#include <memory>
#include "Scene_Entity.h"
#include "LightSource.h"
#include "Hit.h"
#include "Binder.h"
/*
* This class represents the 3D scene
* The scene is defined by an array of Scene_Entity
*
*/

class Scene
{
public :
    Scene (const std::shared_ptr<Binder> binde);
    Scene(const std::shared_ptr<Binder> binde, const std::vector<std::shared_ptr<Scene_Entity>>& tab, const std::vector<std::shared_ptr<LightSource>>& lightsTab);
    Color lanceRayon(const Rayon& ray,int iteration) const;
    void addEntity(std::shared_ptr<Scene_Entity> entity);
    void addLight(std::shared_ptr<LightSource> light);
    void addObjectsTabToBinder() const;
    std::vector<std::shared_ptr<LightSource>> getLight () const ;

protected :

private :
    std::shared_ptr<Binder> binder ;
    std::vector<std::shared_ptr<Scene_Entity>> objectsTab ;
    std::vector<std::shared_ptr<LightSource>> lightsTab ;
};


#endif
