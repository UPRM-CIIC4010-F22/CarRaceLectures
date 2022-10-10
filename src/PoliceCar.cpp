#include "PoliceCar.h"

void PoliceCar::draw()
{

    // Draw body
    ofSetColor(color);
    ofDrawRectangle(xPos + 0, yPos + 10, width, 10);
    // Draw roof and windshields
    ofDrawLine(xPos + 10, yPos + 10, xPos + 20, yPos + 0);
    ofDrawLine(xPos + 20, yPos + 0, xPos + 40, yPos + 0);
    ofDrawLine(xPos + 40, yPos + 0, xPos + 50, yPos + 10);

    ofSetColor(ofColor(ofColor::black));
    // Draw tires
    ofDrawCircle(xPos + 15, yPos + 25, 5);
    ofDrawCircle(xPos + 45, yPos + 25, 5);

    // Draw Biombo
    ofSetColor(ofColor::blue);
    ofDrawCircle(xPos + width/2, yPos - 3, 3);
}