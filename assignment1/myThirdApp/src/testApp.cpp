/*
 MFA DT Joori Lee
 Code for Art Fall 2013
 First Week Assignment
 
 circle to triagle by mouse click
 */

#include "testApp.h"

bool mouse;
int Sizenumber=20;
int bNumber=255;
int rNumber=20;
int gNumber=255;

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground( 15 , 15 , 15 ) ;
      
}

//--------------------------------------------------------------
void testApp::update(){
    if(mouse==true){
        ofSetColor( 255,255,255 ) ;
        ofCircle ( mouseX , mouseY , 30 ) ;
  /*
        for ( int i = 100 ; i < 3 ; i-- )
            {
            ofSetCircleResolution(10);
            ofSetCircleResolution(9);
            ofSetCircleResolution(8);
            ofSetCircleResolution(7);
            ofSetCircleResolution(6);
            ofSetCircleResolution(5);
            ofSetCircleResolution(4);
            ofSetCircleResolution(3);
            ofSetCircleResolution(2);
            ofSetCircleResolution(1);
            }
*/
    }
}

//--------------------------------------------------------------
void testApp::draw(){

    //Draw the background
    ofSetColor ( 0 , 0, 0 ) ;
    ofRect( 0 , 0 , ofGetWidth() , ofGetHeight() ) ;

    //draw circle
    ofSetColor( rNumber,gNumber,bNumber ) ;
    ofCircle ( mouseX , mouseY , 30 ) ;

    
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
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    mouse=true;
    ofSetColor( 255,255,255 ) ;

    //until triagle
    if (Sizenumber<3){
        Sizenumber=20;
    }
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    //change circle to triagle 
    ofSetCircleResolution(Sizenumber);
    Sizenumber--;
    //change color
    bNumber=bNumber-5;
    gNumber=gNumber-5;
    rNumber=rNumber+10;
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