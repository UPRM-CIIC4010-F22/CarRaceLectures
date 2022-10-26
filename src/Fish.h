#pragma once

#include "ofMain.h"
#include "Raceable.h"

class Fish : public Raceable {

    private:
    int coords[2];
    int speed;
    int direction;
    ofImage fishImage;

    public:

    Fish(int x, int y, int speed, int direction);
    Fish();
    virtual int getXpos() { return coords[0]; };
    virtual int getYpos()  { return coords[1]; };
    virtual int getSpeed() { return speed; };
    virtual int getDirection() { return direction; };
    virtual int getWidth() { return 40; };
    virtual ofColor getColor() { return ofColor::black; } // Dummy color};

    virtual void setXpos(int x) { coords[0] = x; };
    virtual void setYPos(int y) { coords[1] = y; };
    virtual void setSpeed(int spd) { speed = spd; };
    virtual void setDirection(int dir) { direction = dir; };
    virtual void setColor(ofColor col) {};

    virtual void draw();
    
};
