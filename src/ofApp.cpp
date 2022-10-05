#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    count = 0;
    for (int i = 0; i < 10; i++)
    {
        cars.push_back(Car(0, i * 40, ofRandom(10), 1));
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    count++;
    for (int i = 0; i < cars.size(); i++)
    {
        if (((cars[i].getDirection() == 1) && (cars[i].getXpos() + cars[i].getWidth() >= ofGetWidth())) ||
            ((cars[i].getDirection() == -1) && (cars[i].getXpos() <= 0)))
        {
            cars[i].setDirection(cars[i].getDirection() * -1);
        }
        else
        {
            if (count % 60 == 0)
                cars[i].setSpeed(ofRandom(10));
            cars[i].setXpos(cars[i].getXpos() + cars[i].getSpeed() * cars[i].getDirection());
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    for (int i = 0; i < cars.size(); i++)
        cars[i].draw();
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
