#include <iostream>
#include <string>
using namespace std;
#include "proxy.h"

ImageReady::ImageReady(string filepath)
    : filepath(filepath)
{
    loadImage();
}
void ImageReady::dispImage(){
    cout << "disp " << filepath << endl;
}
void ImageReady::loadImage(){
    cout << "load " << filepath << endl;
}

ImageProxy::ImageProxy(string filepath)
    : filepath(filepath)
{}

void ImageProxy::dispImage(){
    if(img == nullptr){
        img = new ImageReady(filepath);
    }
    img->dispImage();
}












