//
// Created by Sashank on 3/8/2016.
//

#ifndef RAYTRACERC_VECTOR3D_H
#define RAYTRACERC_VECTOR3D_H

namespace Vector {
    class Vector3D {
    private:
        //Set x, y, z private. Encapsulate
        double x;
        double y;
        double z;
    public:
        // Default constructor: create a vector whose x, y, z components are all zero.
        Vector3D();
        Vector3D(const double _x, const double _y, const double _z);

        ////////////////////////////////////////////////////////////////////////
        // GETTERS AND SETTERS //
        const double getX() const;
        const double getY() const;
        const double getZ() const;
        void setX(const double x);
        void setY(const double y);
        void setZ(const double z);



        ///////////////////////////////////////////////////////////////////////////
        /* Returns the square of the magnitude of this vector.
         more efficient than computing the magnitude itself,and is enough for comparing two vectors to see which
         is longer or shorter.
         */
        const double MagnitudeSquared() const;
        const double Magnitude() const;
        const Vector3D UnitVector() const;
    };
}

#endif //RAYTRACERC_VECTOR3D_H
