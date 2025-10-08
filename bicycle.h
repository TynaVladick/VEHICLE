#include "vehicle.h"

class bicycle: public vehicle{
    private:
    int numberOfGears;
    bool hasBasket;

    public:
    bicycle();
    void displayinfo() override;
}