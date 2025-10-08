#include "car.h"

class car: public vehicle{
    private:
    double batteryCapacity;
    double chargingTime;

    public:
    car();
    void displayinfo() override;
}