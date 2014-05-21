#include <iostream>
#include "Scene_Entity.h"

 Scene_Entity::Scene_Entity(const std::shared_ptr<Geometry>& geom,const std::shared_ptr<Optic>& opti)
 :
     geometry(geom),
     optic(opti)
 {
 }

 Scene_Entity::~Scene_Entity()
 {
 }

 std::shared_ptr<Geometry> Scene_Entity::getGeometry() const
 {
     return geometry ;
 }

std::shared_ptr<Optic> Scene_Entity::getOptic() const
{
    return optic;
}

