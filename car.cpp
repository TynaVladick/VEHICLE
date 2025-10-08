#include "car.h"
#include <iostream>

car::car(){
    numberOfDoors = 0;
    fuelType = 0;
}

car::car(int n, string f){
    numberOfDoors = n;
    fuelType = f;
    if (n < 0) n = 0;
    if (f < 0) f = 0;
}

void car::displayinfo()
{
    std::cout << "car, number of doors = " << n << "fuel type" << f << std::endl;
}