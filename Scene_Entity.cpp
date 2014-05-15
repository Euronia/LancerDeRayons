#include <iostream>
#include "Scene_Entity.h"

 Scene_Entity::Scene_Entity(const std::shared_ptr<Geometry>& geom,const Optic& opti)
 :
     geometry(geom),
     optic(opti)
 {
 }

 Scene_Entity::~Scene_Entity()
 {
 }

