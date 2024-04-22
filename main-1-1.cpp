#include <iostream>
#include "Appliance.h"
using namespace std;
int main(){

Appliance appliance(100);
cout<<"The power rating is: "<< appliance.getpowerRating()<<endl;
cout<<" The power consumption is: "<<appliance.getPowerConsumption()<<endl;
appliance.turnOn();
cout<<"The power is on or off: "<<appliance.getisOn()<<endl;

    return 0;
}