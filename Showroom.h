#ifndef LAB02_SHOWROOM_H
#define LAB02_SHOWROOM_H

#include "Vehicle.h"
#include <vector>

#pragma once

class Showroom {
public:
    Showroom() ;
    Showroom(string input_name, int input_capacity) ;
    void AddVehicle(Vehicle v) ;
    float GetInventoryValue() ;
    void ShowInventory() ;
    int num_of_vehicles ;
    vector<Vehicle> vehicles ;
private:
    string name ;
    unsigned int capacity ;
};

#endif //LAB02_SHOWROOM_H
