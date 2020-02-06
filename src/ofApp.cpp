#include "ofApp.h"

void ofApp::setup() {

	// dmx.connect("tty.usbserial-EN143965"); // use the name
	dmx.connect(0, 128); // or use a number
    
    chan1.set("Channel 1", 0, 0, 255);
    chan2.set("Channel 2", 0, 0, 255);
    chan3.set("Channel 3", 0, 0, 255);
    chan4.set("Channel 4", 0, 0, 255);
    chan5.set("Channel 5", 0, 0, 255);
    chan6.set("Channel 6", 0, 0, 255);
    chan7.set("Channel 7", 0, 0, 255);
    chan8.set("Channel 8", 0, 0, 255);
    chan9.set("Channel 9", 0, 0, 255);
    chan10.set("Channel 10", 0, 0, 255);
    chan11.set("Channel 11", 0, 0, 255);
    chan12.set("Channel 12", 0, 0, 255);
    chan13.set("Channel 13", 0, 0, 255);
    chan14.set("Channel 14", 0, 0, 255);
    chan15.set("Channel 15", 0, 0, 255);
    chan16.set("Channel 16", 0, 0, 255);
    autoCycle.set("AutoCycle", false);
    
    panel.setName("Panel");
    panel.setup();
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
    panel.add(chan13);
    panel.add(chan14);
    panel.add(chan15);
    panel.add(chan16);
    panel.add(autoCycle);
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
    int margin = 0;
    margin = 48;
	dmx.setLevel(margin + 1, chan1);
	dmx.setLevel(margin + 2, chan2);
    dmx.setLevel(margin + 3, chan3);
    dmx.setLevel(margin + 4, chan4);
    dmx.setLevel(margin + 5, chan5);
    dmx.setLevel(margin + 6, chan6);
    dmx.setLevel(margin + 7, chan7);
	dmx.setLevel(margin + 8, chan8);
    dmx.setLevel(margin + 9, chan9);
    dmx.setLevel(margin + 10, chan10);
    dmx.setLevel(margin + 11, chan11);
    dmx.setLevel(margin + 12, chan12);
    dmx.setLevel(margin + 13, chan13);
	dmx.setLevel(margin + 14, chan14);
    dmx.setLevel(margin + 15, chan15);
    dmx.setLevel(margin + 16, chan16);
	dmx.update();
}

void ofApp::draw() {

	ofSetColor(chan1);
	ofDrawRectangle(0, 0, ofGetWidth() / 3, ofGetHeight()/2);
	
	ofSetColor(chan2);
	ofDrawRectangle(ofGetWidth() / 3, 0, ofGetWidth() / 3, ofGetHeight()/2);
    
    ofSetColor(chan3);
    ofDrawRectangle(2*(ofGetWidth() / 3), 0, ofGetWidth() / 3, ofGetHeight()/2);

    ofSetColor(chan4);
    ofDrawRectangle(0*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan5);
    ofDrawRectangle((ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan6); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan7); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan8); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan9); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan10); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan11); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan12); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan13); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan14); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan15); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    ofSetColor(chan16); ofDrawRectangle(2*(ofGetWidth() / 3), ofGetHeight()/2, ofGetWidth() / 3, ofGetHeight());
    
    
    panel.draw();
}
