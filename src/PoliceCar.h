#pragma once
#include "Car.h"
#include "ofMain.h"

class PoliceCar : public Car {
   public:
    PoliceCar(int x, int y, int spd, int dir) : Car(x, y, spd, dir) {
        
    }

    PoliceCar() : Car() {
    }

    void draw();
};