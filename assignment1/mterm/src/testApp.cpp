#include "testApp.h"
int counter=0;
//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(24);
    for(int i=0; i<NUM_PARTICLES; i++)
    {
        radius[i] = ofRandom(10, 20);
        pos[i].x = i*5;
        pos[i].y = ofGetHeight()/2+ofRandom(10,-10);
        pos2[i].x = i*5;
        pos2[i].y = ofGetHeight()/2+ofRandom(30,-30);
        vel[i].x = ofRandom(-10, 10);
        vel[i].y = ofRandom(-10, 10);
    }
    //	loc.x = ofGetWidth()/2.0;
    //	loc.y = ofGetHeight()/2.0;
    //
    //	origin.x = ofGetWidth()/2.0;
    //	origin.y = ofGetHeight()/2.0;
	
	dragging = false;
}

//--------------------------------------------------------------
void testApp::update(){
    
	if(!dragging)
	{
        for(int i=0; i<NUM_PARTICLES; i++)
        {
            vel[i] += (pos2[i]-pos[i])/i;
            pos[i] += vel[i];
            //  vel[i] *= .75i;
            
            //  pos[i] += ofGetHeight()/2 + ofGetHeight() * 0.1f * sin(i*0.01f + ofGetFrameNum() * 0.02f);
            vel[i] *= .5;
        }
        
	}
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackgroundGradient(ofColor(77,77,77),ofColor(100,100,100), OF_GRADIENT_CIRCULAR);
    
    ofSetColor(0xdddddd);
    makecircle();
    makecircle();
    
    makecircle();
	
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    counter++;
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	if(dragging)
	{
        
        for(int i=0; i<NUM_PARTICLES; i++)
        {
            ofCircle(pos[i], 1);
            pos[i].x = x;
            pos[i].y = y;
        }
        
	}
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    makecircle();

    for(int i=0; i<NUM_PARTICLES; i++){
        
        float d = ofDist(pos[i].x, pos[i].y, x, y);
        if(d > 1)
        {
            dragging = true;
        }
    }
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    dragging = false;
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
void testApp::makecircle(){
    for(int i=0; i<NUM_PARTICLES; i++)
    {
        
        ofCircle(pos[i], .7);
        if(counter==1){
            ofTranslate(0, 100, 0);
            ofCircle(pos[i], .7);
        }
        if(counter==2){
            ofTranslate(0, 200, 0);
            ofCircle(pos[i], .7);
        }
    }
}

