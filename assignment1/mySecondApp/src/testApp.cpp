/*
 MFA DT Joori Lee
 Code for Art Fall 2013
 First Week Assignment
 
 rotation fireworks
 */
#include "testApp.h"

int centerX=0;
int centerY=0;

//--------------------------------------------------------------
void testApp::setup(){
	x = ofGetWidth()/2.0;
	y = ofGetHeight()/2.0;
	ofBackground(0, 0, 0);

	angle=0;
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    ofSetFrameRate(150);
}

//--------------------------------------------------------------
void testApp::update(){
	angle += angle;
    x += angle;
    y += -angle;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofPushMatrix();
    ofNoFill();
    ofEnableAlphaBlending();    // turn on alpha blending
    
    ofSetColor(ofRandom(200),ofRandom(200),ofRandom(255),127);
    ofTranslate(centerX, centerY);
    ofRotateZ(angle);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+5);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+10);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+15);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+20);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+25);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+30);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+35);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+40);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+45);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+50);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+55);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+60);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+65);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+70);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+75);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+80);
    ofTriangle(0, -10, -20, 50, 10, 50);
    ofRotateZ(angle+85);
    
    
    ofPopMatrix();

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	ofBackground(0, 0, 0);

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	centerX = x;
	centerY = y;
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    angle+=5;

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    angle=0;
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
