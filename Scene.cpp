#include <iostream>
#include "Scene.h"
#include "Geometry.h"

Scene::Scene ()
:
    objectsTab()
{
}


Scene::Scene(std::vector<Geometry> tab)
:
    objectsTab(tab)
{
}
