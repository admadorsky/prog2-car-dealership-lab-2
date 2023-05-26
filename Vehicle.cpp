#include <iostream>
#include <iomanip>
#include "Vehicle.h"
using namespace std ;

Vehicle::Vehicle() {
    make = "COP3503" ;
    model = "Rust Bucket" ;
    year = 1900 ;
    price = 0 ;
    mileage = 0 ;
}

Vehicle::Vehicle(string input_make, string input_model, int input_year, float input_price, int input_mileage) {
    make = input_make ;
    model = input_model ;
    year = input_year ;
    price = input_price ;
    mileage = input_mileage ;
}

void Vehicle::Display() {
    cout << year << " " << make << " " << model << " $" << setprecision(2) << price << " " << mileage << endl ;
}

string Vehicle::GetYearMakeModel() {
    string output ;
    output = to_string(year) + " " + make + " " + model ;
    return output ;
}

float Vehicle::GetPrice() const {
    return price ;
}