//
// Created by Sashank on 3/8/2016.
//

#include <math.h>
#include <stdint.h>

#ifndef RAYTRACERC_COLOR_H
#define RAYTRACERC_COLOR_H

#endif //RAYTRACERC_COLOR_H

struct ColorRGB{
private:
    double r;
    double g;
    double b;
    double a;
public:
    //Constructor
    ColorRGB(const double r, const double g, const double b, const double a) :
            r(r),
            g(g),
            b(b),
            a(a)
    { }

    ColorRGB(){};


    //Getters and setters
    const double getR() const {
        return r;
    }

    void setR(double r) {
        ColorRGB::r = r;
    }

    const double getG() const {
        return g;
    }

    void setG(double g) {
        ColorRGB::g = g;
    }

    const double getB() const {
        return b;
    }

    void setB(double b) {
        ColorRGB::b = b;
    }


    const double getA() const {
        return a;
    }

    void setA(double a) {
        ColorRGB::a = a;
    }

    const uint8_t getRedInt() {
        return (uint8_t)(floor(pow(getR(),(1/2.2))*255));
    }

    const uint8_t getGreenInt() {
        return (uint8_t)(floor(pow(getG(),(1/2.2))*255));
    }

    const uint8_t getBlueInt() {
        return (uint8_t)(floor(pow(getB(),(1/2.2))*255));
    }

    const uint8_t getAlphaInt() {
        return (uint8_t)(floor(pow(getA(),(1/2.2))*255));
    }

    void setRGBA(double r, double g, double b, double a){
        setR(r);
        setG(g);
        setB(b);
        setA(a);
    }
};