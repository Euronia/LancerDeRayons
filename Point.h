#ifndef POINT_H
#define POINT_H

    /*
*   This class represent a Point in a 3D environment.
*   It's represented by 3 floats which defined his location
*
    */



class Vector;//Forward declaration

class Point {

public :
    Point();
    Point(float varX, float varY, float varZ);
    ~Point();
    Point& operator-= (const Point& point);
    Point operator- (const Point& pointA) const;
    void translate (const Vector& vecD);
    float x ;
    float y ;
    float z ;

protected :

private :


};

#endif
