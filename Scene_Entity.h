#ifndef SCENE_ENTITY_H
#define SCENE_ENTITY_H
#include <memory>
#include "Geometry.h"
#include "Optic.h"


class Scene_Entity
{
public :
    Scene_Entity(const std::shared_ptr<Geometry>& geom,const Optic& opti);
    ~Scene_Entity();

protected:

private:

    std::shared_ptr<Geometry> geometry;
    Optic optic ;
};

#endif
