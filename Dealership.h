#ifndef LAB02_DEALERSHIP_H
#define LAB02_DEALERSHIP_H

#include <vector>
#include "Showroom.h"

#pragma once

using namespace std ;

class Dealership {
public:
    Dealership() ;
    Dealership(string input_name, int input_capacity) ;
    void AddShowroom(Showroom s) ;
    void ShowInventory() ;
    float GetAveragePrice() ;
private:
    vector<Showroom> showrooms ;
    string name ;
    unsigned int capacity ;
    int num_showrooms ;
};


#endif //LAB02_DEALERSHIP_H
