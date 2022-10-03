#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    this->carXPos = 0;
    this->carYPos = 0;
    this->carSpeed = 5;
    this->carDirection = 1;

}

//--------------------------------------------------------------
void ofApp::update(){

    if (((this->carDirection == 1) && (this->carXPos + 60 >= ofGetWidth())) ||
        ((this->carDirection == -1) && (this->carXPos <= 0))) {

        this->carDirection *= -1;
    } else {
        this->carXPos += this->carDirection * this->carSpeed;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    double x = this->carXPos;
    double y = this->carYPos;
    // Draw body
    ofSetBackgroundColor(ofColor::white);
    ofSetColor(ofColor::red);
    ofDrawRectangle(x + 0, y + 10, 60, 10);
    // Draw roof and windshields
    ofDrawLine(x + 10, y + 10, x + 20, y + 0);
    ofDrawLine(x + 20, y + 0, x + 40, y + 0);
    ofDrawLine(x + 40, y + 0, x + 50, y + 10);

    ofSetColor(ofColor(ofColor::black));
    // Draw tires
    ofDrawCircle(x + 15, y + 25, 5);
    ofDrawCircle(x + 45, y + 25, 5);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
