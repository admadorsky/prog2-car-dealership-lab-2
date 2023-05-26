#include <iostream>
#include "Showroom.h"
#include <vector>

using namespace std ;

Showroom::Showroom() {
    name = "Unnamed Showroom" ;
    capacity = 0 ;
    num_of_vehicles = 0 ;
}

Showroom::Showroom(string input_name, int input_capacity) {
    name = input_name ;
    capacity = input_capacity ;
    num_of_vehicles = 0 ;
}

void Showroom::AddVehicle(Vehicle v) {
    if (num_of_vehicles != capacity) {
        vehicles.push_back(v) ;
        num_of_vehicles++ ;
    }
    else {
        cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl ;
    }
}

void Showroom::ShowInventory() {
    if (capacity == 0) {
        cout << name << " is empty!" << endl ;
    }
    else {
        cout << "Vehicles in " << name << endl ;
        for (int i = 0; i < num_of_vehicles; i++) {
            vehicles.at(i).Display() ;
        }
    }
}

float Showroom::GetInventoryValue() {
    float sum = 0 ;
    for (int i = 0; i < num_of_vehicles; i++){
        sum += vehicles.at(i).GetPrice() ;
    }
    return sum ;
}