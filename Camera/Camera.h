//
// Created by Sashank on 3/8/2016.
//

#ifndef RAYTRACERC_CAMERA_H
#define RAYTRACERC_CAMERA_H

#include "../Vector3D/Vector3D.h"

using namespace Vector;
class Camera{
private:
    Vector3D cameraPosition;
    Vector3D cameraDirection;
    Vector3D cameraLeftRight;
    Vector3D cameraUpDown;
public:
    // Constructors
    Camera(const Vector3D &cameraPosition, const Vector3D &cameraDirection, const Vector3D &cameraLeftRight, const Vector3D &cameraUpDown) :
            cameraPosition(cameraPosition),
            cameraDirection(cameraDirection),
            cameraLeftRight(cameraLeftRight),
            cameraUpDown(cameraUpDown)
    { }

    Camera(){
        cameraPosition = Vector3D(0,0,0);
        cameraDirection = Vector3D(0,0,1);                      //Want the camera to be facing z-direction
        cameraLeftRight = Vector3D(0,0,0);
        cameraUpDown = Vector3D(0,0,0);
    }

    //Getters and setters
    const Vector3D &getCameraPosition() const {
        return cameraPosition;
    }

    void setCameraPosition(const Vector3D &cameraPosition) {
        Camera::cameraPosition = cameraPosition;
    }

    const Vector3D &getCameraDirection() const {
        return cameraDirection;
    }

    void setCameraDirection(const Vector3D &cameraDirection) {
        Camera::cameraDirection = cameraDirection;
    }


};


#endif //RAYTRACERC_CAMERA_H
