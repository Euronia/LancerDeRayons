#include <iostream>
#include "Point.h"
#include "Vector.h"
#include "Sphere.h"
#include "MattTexture.h"
#include "Scene.h"
#include "FlatCamera.h"

using namespace std;

void afficheVector (Vector result)
{
    cout << "vec result x:" << result.getX() << " y:" << result.getY() << " z:" << result.getZ() << endl ;
}

int main()
{
    Point sphereCOrigin(5.0, -1.0, 0.0);
    std::shared_ptr<Sphere> sphere(std::make_shared<Sphere>(sphereCOrigin,1.0));
    std::shared_ptr<MattTexture> sphereText(std::make_shared<MattTexture>(Color(1.0,0.0,0.0)));
    Scene_Entity sphere1 (sphere,sphereText);
    //
    Point sphereCOrigin2(8.0, 0.0, 0.0);
    std::shared_ptr<Sphere> sphere2(std::make_shared<Sphere>(sphereCOrigin2,1.0));
    std::shared_ptr<MattTexture> sphereText2(std::make_shared<MattTexture>(Color(1.0,1.0,0.0)));
    Scene_Entity sphere22 (sphere2,sphereText2);
    Scene scene;
    scene.addEntity(std::make_shared<Scene_Entity>(sphere1));
    scene.addEntity(std::make_shared<Scene_Entity>(sphere22));
    FlatCamera camera1(Point(0.0,0.0,0.0),Vector(1.0,0.0,0.0),45.0,45.0,Vector(0.0,0.0,1.0),Vector(0.0,1.0,0.0));
    Picture pict(800,600);
    camera1.lancerRayons(pict,scene);

    return 0;
}

