#include "TV.h"
#include "Appliance.h"
#include <iostream>
using namespace std;
int main(){
    TV tv(50,50);
    cout<<"The power consumption of the tv is: "<<tv.getPowerConsumption()<<endl;
    return 0;
}
