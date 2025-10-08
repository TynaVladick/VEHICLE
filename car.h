#include "vehicle.h"
#include "string"

class car: public vehicle{
    private:
    int numberOfDoors;
    string fuelType;

    public:
    car();
    void displayinfo() override;
}

void void void