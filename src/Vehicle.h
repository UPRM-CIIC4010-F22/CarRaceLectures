#pragma once
#include "ofMain.h"
#include "Raceable.h"

class Vehicle : public Raceable {
   protected:
    int xPos;
    int yPos;
    int speed;
    int direction;
    int width;
    ofColor color;

   public:
    int getXpos() const { return xPos; }
    int getYpos() const { return yPos; }
    int getSpeed() const { return speed; }
    int getDirection() { return direction; }
    int getWidth() const { return width; }
    ofColor getColor() const { return color; }

    void setXpos(int x) { xPos = x; }
    void setYPos(int y) { yPos = y; }
    void setSpeed(int spd) { speed = spd; }
    void setDirection(int dir) { direction = dir; }
    void setColor(ofColor col) { color = col; }

    Vehicle(int x, int y, int spd, int dir) {
        this->xPos = x;
        this->yPos = y;
        this->speed = spd;
        this->direction = dir;
        this->color = ofColor(255, 0, 0);
        this->width = 60;
    }

    Vehicle() {
        this->xPos = 0;
        this->yPos = 0;
        this->speed = 3;
        this->direction = 1;
        this->color = ofColor(255, 0, 0);
        this->width = 60;
    }

    virtual bool operator==(const Raceable &r);

    virtual void draw() const = 0;
};