#pragma once

#include "ofMain.h"
#include "ofxDmx.h"
#include "ofxGui.h"
#include "ofxJSON.h"


enum DMXCH{
	chXSpin = 1,
	chXFine,
	chYSpin,
	chYFine,
	chXySpeed,
	chDimmer,
	chStrobe,
	chR,
	chG,
	chB,
	chW,
	chZoom
} DMXCH;

class DMXInfo{
public:
	DMXInfo(){
		for(int i=0; i<12; i++){
			channel.push_back(0);
		}
	}

	vector<uint8_t> channel;
}

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	
	ofxDmx dmx;
	int level;
    
    ofxPanel panel;
	ofParameter<int> dmxID;
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

    ofParameter<bool> autoCycle;

	vector<DMXInfo> dmxValues;
};
