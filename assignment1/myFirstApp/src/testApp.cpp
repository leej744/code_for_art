#include "testApp.h"
/*
 MFA DT Joori Lee
 Code for Art Fall 2013
 First Week Assignment
 
 drawing tool
 */

bool mouse;
int ballX=0;
int ballY=0;
int ballSize=10;

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(24);
	ofBackground(255, 255, 255);
    ofEnableSmoothing();
    //disable automatic background (it wont clear everytime I draw)
    ofSetBackgroundAuto(false);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(ofRandom(230,255),ofRandom(230,255),ofRandom(230,255));
    //if mouse button is turn on, it draws 10 circles as a painting brush
if(mouse){
    for (int a=0; a<10; a++) {
        ofCircle(ballX,ballY,ballSize);
        ballX=ballX+ofRandom(-5,5);
        ballY=ballY+ofRandom(-5,5);
    }

}
}
//--------------------------------------------------------------
void testApp::keyPressed(int key){
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	ballX = x;
	ballY = y;
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    mouse=true;

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    mouse=false;
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
