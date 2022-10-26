#include "Vehicle.h"

class Truck : public Vehicle {

    public:
    Truck(int x, int y, int speed, int direction) : Vehicle(x,y,speed,direction) {}
    Truck() : Vehicle() {}

    virtual void draw();

};
