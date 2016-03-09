//
// Created by Sashank on 3/8/2016.
//

#include <math.h>
#include "Vector3D.h"
using namespace Vector;
// CONSTRUCTORS IMPLEMENTATION
Vector3D::Vector3D() {
    x = 0;
    y = 0;
    z = 0;
}

Vector3D::Vector3D(const double _x, const double _y, const double _z) {
    this->x = _x;
    this->y = _y;
    this->z = _z;
}


// GETTERS
const double Vector3D::getX() const {
    return Vector3D::x;
}

const double Vector3D::getY() const{
    return Vector3D::y;
}

const double Vector3D::getZ() const{
    return Vector3D::z;
}

//SETTERS
void Vector3D::setX(const double x) {
    Vector3D::x = x;
}

void Vector3D::setY(const double y) {
    Vector3D::y = y;
}

void Vector3D::setZ(const double z) {
    Vector3D::z = z;
}

//Magnitude
const double Vector3D::MagnitudeSquared() const{
    return (x * x) + (y * y) + (z * z);
}

const double Vector3D::Magnitude() const {
    return sqrt(MagnitudeSquared());
}

const Vector3D Vector::Vector3D::UnitVector() const {
    const double mag = Magnitude();
    return Vector3D(x / mag, y / mag, z / mag);
}




// This + operator now can be used to add two Vector objects.
inline Vector3D operator+(const Vector3D &a, const Vector3D &b){
    return Vector3D(a.getX() + b.getX(), a.getY() + b.getY(), a.getZ() + b.getZ());
};


// This - operator now can be used to subtract two Vector objects.
inline Vector3D operator-(const Vector3D &a, const Vector3D &b) {
    return Vector3D(a.getX() - b.getX(), a.getY() - b.getY(), a.getZ() - b.getZ());
}


// Allows me to negate the vector, reflecting it across the origin into the opposite octant.
inline Vector3D operator-(const Vector3D &a) {
    return Vector3D(-a.getX(), -a.getY(), -a.getZ());
}

// Returns dot Product
inline double DotProduct(const Vector3D &a, const Vector3D &b) {
    return (a.getX() * b.getX()) + (a.getY() * b.getY()) + (a.getZ() * b.getZ());
}

// Returns cross product of two vectors
inline Vector3D CrossProduct(const Vector3D &a, const Vector3D &b) {
    return Vector3D(
            (a.getY() * b.getY()) - (a.getZ() * b.getY()),
            (a.getZ() * b.getX()) - (a.getX() * b.getZ()),
            (a.getX() * b.getY()) - (a.getY() * b.getX()));
}

// Scales a factor by a real number
inline Vector3D operator*(double s, const Vector3D &v) {
    return Vector3D(s * v.getX(), s * v.getY(), s * v.getZ());
}

// Same as above
inline Vector3D operator/(const Vector3D &v, double s) {
    return Vector3D(v.getX() / s, v.getY() / s, v.getZ() / s);
}