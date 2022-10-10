#pragma once
#include "ofMain.h"

class Car
{
protected:
    int xPos;
    int yPos;
    int speed;
    int direction;
    int width;
    ofColor color;

public:
    int getXpos() { return xPos; }
    int getYpos() { return yPos; }
    int getSpeed() { return speed; }
    int getDirection() { return direction; }
    int getWidth() { return width; }
    ofColor getColor() { return color; }

    void setXpos(int x) { xPos = x; }
    void setYPos(int y) { yPos = y; }
    void setSpeed(int spd) { speed = spd; }
    void setDirection(int dir) { direction = dir; }
    void setColor(ofColor col) { color = col; }

    Car(int x, int y, int spd, int dir)
    {
        this->xPos = x;
        this->yPos = y;
        this->speed = spd;
        this->direction = dir;
        this->color = ofColor(255, 0, 0);
        this->width = 60;
    }

    Car()
    {
        this->xPos = 0;
        this->yPos = 0;
        this->speed = 3;
        this->direction = 1;
        this->color = ofColor(255, 0, 0);
        this->width = 60;
    }

    void draw();
};