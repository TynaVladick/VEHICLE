#ifndef VEHICLE_H
#define VEHICLE_H

class vehicle{

    protected:
    double maxSpeed;
    double weight;

    public:
    vehicle();
    virtual void displayInfo() = 0;
    ~vehicle();

};

#endif