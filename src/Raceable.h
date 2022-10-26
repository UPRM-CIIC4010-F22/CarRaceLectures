#pragma once

#include "ofMain.h"

class Raceable {

    public:
    virtual int getXpos() = 0;
    virtual int getYpos() = 0;
    virtual int getSpeed() = 0;
    virtual int getDirection() = 0;
    virtual int getWidth() = 0;
    virtual ofColor getColor() = 0;

    virtual void setXpos(int x) = 0;
    virtual void setYPos(int y) = 0;
    virtual void setSpeed(int spd) = 0;
    virtual void setDirection(int dir) = 0;
    virtual void setColor(ofColor col) = 0;

    virtual void draw() = 0;

};
