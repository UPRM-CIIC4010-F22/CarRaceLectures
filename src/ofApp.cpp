#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetBackgroundColor(ofColor::white);
    for (int i = 0; i < 10; i++) {
        cars.push_back(Car(0, i * 40, ofRandom(5), 1));
    }
    raceFinished = false;
}

//--------------------------------------------------------------
void ofApp::update() {

    if(raceFinished) return;

    for (int i = 0; i < cars.size(); i++) {
        if ((cars[i].getDirection() == 1) && (cars[i].getXpos() + cars[i].getWidth() >= ofGetWidth())) {
            raceFinished = true;
            break;
        } else {
            cars[i].setXpos(cars[i].getXpos() + ofRandom(5) * cars[i].getDirection());
        }
    }

    int leadingCarPosition = 0;
    for(int i=0; i<cars.size(); i++){
        cars[i].setColor(ofColor::red);
        if(cars[i].getXpos() > cars[leadingCarPosition].getXpos())
            leadingCarPosition = i;
    }
    cars[leadingCarPosition].setColor(ofColor::green);

}

//--------------------------------------------------------------
void ofApp::draw() {
    for (int i = 0; i < cars.size(); i++)
        cars[i].draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}
