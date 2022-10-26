#include "Fish.h"

Fish::Fish(int x, int y, int speed, int direction) {

    coords[0] = x;
    coords[1] = y;
    this->speed = speed;
    this->direction = direction;

    fishImage.load("Fish.png");

}

void Fish::draw() {

    fishImage.draw(coords[0], coords[1], 40, 40);

}