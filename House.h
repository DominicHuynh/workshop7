#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"
class House : public Appliance{
    protected:
    int numAppliances;
    Appliance** appliances;
    int current;
    public:
    House();
    House(int numAppliances);
    bool addAppliance (Appliance* appliance);
    double getTotalPowerConsumption();

};



#endif