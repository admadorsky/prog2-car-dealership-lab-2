#include "Dealership.h"
#include <iostream>
#include <iomanip>

using namespace std ;

Dealership::Dealership() {
    name = "Generic Dealership" ;
    capacity = 0 ;
    num_showrooms = 0 ;
}

Dealership::Dealership(string input_name, int input_capacity) {
    name = input_name ;
    capacity = input_capacity ;
    num_showrooms = 0 ;
}

void Dealership::AddShowroom(Showroom s) {
    if (num_showrooms == capacity) {
        cout << "Dealership is full, can't add another showroom!" << endl ;
    }
    else {
        showrooms.push_back(s);
        num_showrooms++;
    }
}

void Dealership::ShowInventory() {
    if (num_showrooms == 0) {
        cout << name << " is empty!" << endl ;
        cout << "Average car price: $0.00" ;
    }
    else {
        for (int i = 0; i < num_showrooms; i ++) {
            showrooms.at(i).ShowInventory() ;
            cout << endl ;
        }
        cout << "Average car price: $" << setprecision(2) << GetAveragePrice() ;
    }
}

float Dealership::GetAveragePrice() {
    float sum = 0 ;
    int counter = 0 ;
    for (int s = 0; s < num_showrooms; s ++) {
        Showroom curr_showroom = showrooms.at(s) ;
        for (int v = 0; v < curr_showroom.num_of_vehicles; v ++) {
            float curr_price = curr_showroom.vehicles.at(v).GetPrice() ;
            sum += curr_price ;
            counter ++ ;
        }
    }
    float average_price = sum / counter ;
    return average_price ;
}