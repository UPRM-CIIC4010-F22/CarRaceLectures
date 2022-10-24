#pragma once
#include "Vehicle.h"
#include "ofMain.h"

class Car : public Vehicle {
   public:
    Car(int x, int y, int spd, int dir) : Vehicle(x, y, spd, dir) {
    }

    Car() : Vehicle() {
    }

    virtual void draw();
};