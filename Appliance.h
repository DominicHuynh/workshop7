#ifndef APPLIANCE_H
#define APPLIANCE_H
#include<iostream>
using namespace std;
class Appliance{
    protected:
    int powerRating;
    bool isOn;
    public:
    Appliance();
    Appliance(int powerRating);
    void setpowerRating(int powerRating);
    void setisOn(bool isOn);
    int getpowerRating();
    bool getisOn();
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();


};






#endif