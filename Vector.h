#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

    /*
* This class represents a Vector
* It his defined by 3 floats representing his "movement" in the 3D universe
*
    */


class Vector
{

public :
    Vector() ;
    Vector(float varX, float varY, float varZ);
    Vector(const Point& A);
    float getX() const;
    float getY() const;
    float getZ() const;
    /*
    void setX(float varX) ;
    void setY(float varY) ;
    void setZ(float varZ) ;
    */

    Vector operator*(float k) const;

    friend Vector crossProduct(const Vector& vecA ,const Vector& vecB); // Produit vectoriel
    friend float dotProduct(const Vector& vecA ,const Vector& vecB); // Produit scalaire
    friend Vector operator + (const Vector &lhs, const Vector &rhs);

    float getNorm(); //Calcul de la norme d'un vecteur
    void normalize();
    Vector operator+(const Vector& vec);

protected :

private :
    float x ;
    float y ;
    float z ;
};



#endif
