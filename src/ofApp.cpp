#include "ofApp.h"

void ofApp::setup() {

	// dmx.connect("tty.usbserial-EN143965"); // use the name
	dmx.connect(0, 128); // or use a number
    
    dmxID.set("LIGHT_ID", 1, 1, 4);
    chan1.set ("x", 0, 0, 255);
    chan2.set ("xFine", 0, 0, 255);
    chan3.set ("y", 0, 0, 255);
    chan4.set ("yFine", 0, 0, 255);
    chan5.set ("xySpeed", 0, 0, 255);
    chan6.set ("Dimmer", 0, 0, 255);
    chan7.set ("strobe", 0, 0, 255);
    chan8.set ("r", 0, 0, 255);
    chan9.set ("g", 0, 0, 255);
    chan10.set("b", 0, 0, 255);
    chan11.set("w", 0, 0, 255);
    chan12.set("zoom", 0, 0, 255);
    autoCycle.set("AutoCycle", false);
    
    panel.setName("Panel");
    panel.setup();
    panel.add(dmxID);
    panel.add(chan1);
    panel.add(chan2);
    panel.add(chan3);
    panel.add(chan4);
    panel.add(chan5);
    panel.add(chan6);
    panel.add(chan7);
    panel.add(chan8);
    panel.add(chan9);
    panel.add(chan10);
    panel.add(chan11);
    panel.add(chan12);
}

void ofApp::update() {

	// use the time to generate a level
    // if (autoCycle) {
    //     chan1 = 127 + 127 * sin(2 * ofGetElapsedTimef());
    //     chan2 = 127 + 127 * sin(-2 * ofGetElapsedTimef());
    //     chan3 = 127 + 127 * sin(1.5 * ofGetElapsedTimef());
    //     chan4 = 127 + 127 * sin(1 * ofGetElapsedTimef());
    //     chan5 = 127 + 127 * sin(-1 * ofGetElapsedTimef());
    //     chan6 = 127 + 127 * sin(-1.5 * ofGetElapsedTimef());
    //     chan7 = 127 + 127 * sin(2 * ofGetElapsedTimef());
    //     chan8 = 127 + 127 * sin(-2 * ofGetElapsedTimef());
    //     chan9 = 127 + 127 * sin(1.5 * ofGetElapsedTimef());
    //     chan10 = 127 + 127 * sin(1 * ofGetElapsedTimef());
    //     chan11 = 127 + 127 * sin(-1 * ofGetElapsedTimef());
    //     chan12 = 127 + 127 * sin(-1.5 * ofGetElapsedTimef());
    //     chan13 = 127 + 127 * sin(2 * ofGetElapsedTimef());
    //     chan14 = 127 + 127 * sin(-2 * ofGetElapsedTimef());
    //     chan15 = 127 + 127 * sin(1.5 * ofGetElapsedTimef());
    //     chan16 = 127 + 127 * sin(1 * ofGetElapsedTimef());
    // }

    // change CH number
	dmx.setLevel(dmxID * 16 + 1, chan1);
	dmx.setLevel(dmxID * 16 + 2, chan2);
    dmx.setLevel(dmxID * 16 + 3, chan3);
    dmx.setLevel(dmxID * 16 + 4, chan4);
    dmx.setLevel(dmxID * 16 + 5, chan5);
    dmx.setLevel(dmxID * 16 + 6, chan6);
    dmx.setLevel(dmxID * 16 + 7, chan7);
	dmx.setLevel(dmxID * 16 + 8, chan8);
    dmx.setLevel(dmxID * 16 + 9, chan9);
    dmx.setLevel(dmxID * 16 + 10, chan10);
    dmx.setLevel(dmxID * 16 + 11, chan11);
    dmx.setLevel(dmxID * 16 + 12, chan12);
    dmx.update();
}

void ofApp::draw() {
    panel.draw();
}
