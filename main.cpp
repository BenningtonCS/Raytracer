#include <iostream>
#include "Image/CreateImage.h"
#include "Vector3D/Vector3D.h"
using namespace std;
using namespace Vector;
void createImageForSashank(int width, int height, const char* filename);

int main() {
    Vector3D basisX (1,0,0);
    Vector3D basisY (0,1,0);
    Vector3D basisZ (0,0,1);

    return 0;
}







void createImageForSashank(int width, int height, const char* filename){
    //Outputting a bitmap file with colors
    int resolution = width * height;
    ColorRGB *pixels = new ColorRGB[resolution];
    //Set color of the pixels
    int loopCounter = 1;
    for (int i = 0; i < width; ++i){
        for (int j = 0; j < height; ++j){
            loopCounter++;
            if ((i > 200 && i < 440) && (j > 200 && j < 280)) {
                pixels[loopCounter].setRGBA(0.23, 0.4, 0.23, 0.8);
            } else {
                pixels[loopCounter].setRGBA(0.93, 0.2, 0.23, 0.4);
            }
        }
    }
    CreateImage::createRasterImage(height, width, filename, pixels);
}