#pragma once

#include "ofMain.h"

#define NUM_PARTICLES 500

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void makecircle();
    
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    float x_pos[NUM_PARTICLES];
    float x_pos2[NUM_PARTICLES];
    
    float y_pos[NUM_PARTICLES];
    float y_pos2[NUM_PARTICLES];
    float x_vel[NUM_PARTICLES];
    float y_vel[NUM_PARTICLES];
    float radius[NUM_PARTICLES];
    int color[NUM_PARTICLES];
    
    ofPoint loc, origin;
    ofPoint velocity;
	
    bool dragging;
    ofPoint pos2[NUM_PARTICLES];
    ofPoint pos[NUM_PARTICLES];
    ofPoint vel[NUM_PARTICLES];
};


