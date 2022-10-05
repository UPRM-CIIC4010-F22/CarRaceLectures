#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    firstCar = Car(0, 0, 5, 1);
}

//--------------------------------------------------------------
void ofApp::update()
{

    if (((firstCar.getDirection() == 1) && (firstCar.getXpos() + firstCar.getWidth() >= ofGetWidth())) ||
        ((firstCar.getDirection() == -1) && (firstCar.getXpos() <= 0)))
    {
        firstCar.setDirection(firstCar.getDirection() * -1);
    }
    else
    {
        firstCar.setXpos(firstCar.getXpos() + firstCar.getSpeed() * firstCar.getDirection());
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    firstCar.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}
