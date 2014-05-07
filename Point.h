#ifndef POINT_H
#define POINT_H


class Vector;//Forward declaration

class Point {

public :
    Point();
    Point(float varX, float varY, float varZ);
    void translate (float k, Vector &vecD);
    float x ;
    float y ;
    float z ;

protected :

private :


};

#endif
