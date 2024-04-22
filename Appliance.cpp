#include "Appliance.h"
Appliance:: Appliance(): powerRating(0),isOn(false){}
 Appliance:: Appliance(int powerRating){
    this->powerRating=powerRating;
    this->isOn= isOn;
    
}
void Appliance:: setpowerRating(int powerRating){
    this->powerRating=powerRating;
}
void Appliance:: setisOn(bool isOn){
    this->isOn= isOn;
} 
int Appliance:: getpowerRating(){
    return powerRating;
}
bool Appliance:: getisOn(){
    
    return isOn;
    
}
void Appliance :: turnOff(){
    isOn=false;
        
}
void Appliance :: turnOn(){
    isOn=true;
        
}
double Appliance ::getPowerConsumption(){
    return 0;
}