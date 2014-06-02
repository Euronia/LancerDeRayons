#include <iostream>
#include "Point.h"
#include "Vector.h"
#include "Sphere.h"
#include "MattTexture.h"
#include "Scene.h"
#include "FlatCamera.h"
#include "MathTextures.h"
#include "BasicBinder.h"

using namespace std;

void afficheVector (Vector result)
{
    cout << "vec result x:" << result.getX() << " y:" << result.getY() << " z:" << result.getZ() << endl ;
}

int main()
{
    Point sphereCOrigin(5.0, -1.0, 0.0);
    std::shared_ptr<Sphere> sphere1geo(std::make_shared<Sphere>(sphereCOrigin,1.0));
    std::shared_ptr<Texture> sphere1text(std::make_shared<MattTexture>(Color(1.0,0.0,0.0)));
    //std::shared_ptr<RedGreen> sphere1text(std::make_shared<RedGreen>(Color(0.32,0.4,0.2),Color(0.7,0.1,0.3)));
    Scene_Entity sphere1 (sphere1geo,sphere1text);
    //
    Point sphereCOrigin2(8.0, 0.0, 0.0);
    std::shared_ptr<Sphere> sphere2(std::make_shared<Sphere>(sphereCOrigin2,2.0));
    std::shared_ptr<Texture> sphere2text(std::make_shared<MattTexture>(Color(1.0,1.0,1.0)));
    //std::shared_ptr<RedGreen> sphere2text(std::make_shared<RedGreen>(Color(0.0,1.0,0.0),Color(0.0,0.0,1.0)));
    Scene_Entity sphere22 (sphere2,sphere2text);
    std::shared_ptr<Binder> binde(std::make_shared<BasicBinder>());
    Scene scene(binde);
    //scene.addEntity(std::make_shared<Scene_Entity>(sphere1));
    scene.addEntity(std::make_shared<Scene_Entity>(sphere22));
    Point originLight1(0.0,0.0,0.0) ;
    Color colorLight1(0.5,0.5,0.5);
    LightSource light1(originLight1,colorLight1);
    scene.addLight(std::make_shared<LightSource>(light1));
    FlatCamera camera1(Point(0.0,0.0,0.0),Vector(1.0,0.0,0.0),45.0,45.0,Vector(0.0,0.0,1.0),Vector(0.0,1.0,0.0));
    Picture pict(600,600);
    //Picture pict(1,1);
    camera1.lancerRayons(pict,scene);

    return 0;
}

