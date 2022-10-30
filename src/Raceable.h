#pragma once

#include "ofMain.h"

class Raceable {

    public:
    virtual int getXpos() const = 0;
    virtual int getYpos() const = 0;
    virtual int getSpeed() const = 0;
    virtual int getDirection() const = 0;
    virtual int getWidth() const = 0;
    virtual ofColor getColor() const = 0;

    virtual void setXpos(int x) = 0;
    virtual void setYPos(int y) = 0;
    virtual void setSpeed(int spd) = 0;
    virtual void setDirection(int dir) = 0;
    virtual void setColor(ofColor col) = 0;

    virtual bool operator==(const Raceable &r) = 0;

    virtual void draw() const = 0;

};
