#include "Fridge.h"
#include "Appliance.h"
#include <iostream>
using namespace std;
int main(){
    Fridge fridge(50,50);
    cout<<"The power consumption of the fridge is: "<<fridge.getPowerConsumption()<<endl;
    return 0;
}
