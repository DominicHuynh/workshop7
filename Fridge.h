#ifndef FRIDGE_H
#define FRIDGE_H
#include "Appliance.h"
#include<iostream>
using namespace std;
class Fridge : public Appliance{
    protected: 
    double volume;
    public:
    Fridge();
    Fridge(int powerRating, double volume);
    
    void setVolume(double volume);
    double getVolume();
    double getPowerConsumption();



};





#endif