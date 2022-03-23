#include "Box.h"
#include <iostream>
using namespace std; 

void Box::setlength(int l){

  length=l;
}
void Box::setwidth(int w){

  width=w;
}

void Box::setheight(int h){

  height=h;
}
int Box::getlength(){

  return length;
}
int Box::getwidth(){

  return width;
}
int Box::getheight(){
  
  return height;
}

int Box::calcVolume() {

int volume;

  volume=length*width*height;

  return volume;
  
}
