#include "bicycle.h"
#include <iostream>

bicycle::bicycle(){
    numberOfGears = 0;
    hasBasket = 0;
}

bicycle::bicycle(int nu, bool h){
    numberOfGears = nu;
    hasBasket = h;
    if (nu < 0) nu = 0;
}

void car::displayinfo()
{
    std::cout << "bicycle, number of gears = " << nu << ", has basket?" << h << std::endl;
}