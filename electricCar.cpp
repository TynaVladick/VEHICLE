#include "car.h"
#include <iostream>

electricCar::electicCar(){
    batteryCapacity = 0;
    chargingTime = 0;
}

electricCar::electricCar(double c, double ct){
    batteryCapacity = c;
    chargingTime = ct;
    if (c < 0) c = 0;
    if (ct < 0) ct = 0;
}

void car::displayinfo()
{
    std::cout << "electricCar, batteryCapacity = " << c << "chargingTime" << ct << std::endl;
}