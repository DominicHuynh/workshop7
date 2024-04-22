#include "TV.h"
#include "Appliance.h"
#include <iostream>
using namespace std;
TV::TV(){
    this->screenSize=0;
    this->powerRating=0;
}
TV::TV(int powerRating, double screenSize){
 this->powerRating=powerRating;
 this->screenSize=screenSize;
}
void TV :: setScreenSize(double screenSize){
    this->screenSize=screenSize;
}
double TV :: getScreenSize(){
    return screenSize;
}
double TV :: getPowerConsumption(){
    return powerRating * (screenSize/100);
}
