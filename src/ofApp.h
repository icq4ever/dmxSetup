#pragma once

#include "ofMain.h"
#include "ofxDmx.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	
	ofxDmx dmx;
	int level;
    
    ofxPanel panel;
    ofParameter<int> chan1;
    ofParameter<int> chan2;
    ofParameter<int> chan3;
	ofParameter<int> chan4;
    ofParameter<int> chan5;
    ofParameter<int> chan6;
	ofParameter<int> chan7;
    ofParameter<int> chan8;
    ofParameter<int> chan9;
	ofParameter<int> chan10;
    ofParameter<int> chan11;
    ofParameter<int> chan12;
	ofParameter<int> chan13;
    ofParameter<int> chan14;
    ofParameter<int> chan15;
	ofParameter<int> chan16;


    ofParameter<bool> autoCycle;
};