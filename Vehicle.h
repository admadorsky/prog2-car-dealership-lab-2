#pragma once
#ifndef LAB2_VEHICLE_H
#define LAB2_VEHICLE_H

#endif //LAB2_VEHICLE_H

#include <string>

using namespace std ;

class Vehicle {
public:
    void Display() ;
    string GetYearMakeModel() ;
    float GetPrice() const ;
    Vehicle() ;
    Vehicle(string input_make, string input_model, int input_year, float input_price, int mileage) ;
private:
    string make ;
    string model ;
    unsigned int year ;
    float price ;
    unsigned int mileage ;
};