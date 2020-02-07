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

    DMXInfo tInfo;
    for(int i=0; i<4; i++){
        dmxValues.push_back(tInfo);
    }
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
    //     chanDMXCH16 = 127 + 127 * sin(1 * ofGetElapsedTimef());
    // }

    if(dmxID.get() != lastDmxID){
        chan1.set(dmxValues[dmxID-1].channel[0]);
        chan2.set(dmxValues[dmxID-1].channel[1]);
        chan3.set(dmxValues[dmxID-1].channel[2]);
        chan4.set(dmxValues[dmxID-1].channel[3]);
        chan5.set(dmxValues[dmxID-1].channel[4]);
        chan6.set(dmxValues[dmxID-1].channel[5]);
        chan7.set(dmxValues[dmxID-1].channel[6]);
        chan8.set(dmxValues[dmxID-1].channel[7]);
        chan9.set(dmxValues[dmxID-1].channel[8]);
        chan10.set(dmxValues[dmxID-1].channel[9]);
        chan11.set(dmxValues[dmxID-1].channel[10]);
        chan12.set(dmxValues[dmxID-1].channel[11]);
    }

    for(int i=0; i<4; i++){
        if(dmxID.get()-1 == i) dmxValues[i].channel[0]= chan1.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[1] = chan2.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[2] = chan3.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[3] = chan4.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[4] = chan5.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[5] = chan6.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[6] = chan7.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[7] = chan8.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[8] = chan9.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[9] = chan10.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[10] = chan11.get();
        if(dmxID.get()-1 == i) dmxValues[i].channel[11] = chan12.get();
    }

    // change CH number
	dmx.setLevel((dmxID-1) * 16 + 1, dmxValues[dmxID-1].channel[0]);
	dmx.setLevel((dmxID-1) * 16 + 2, dmxValues[dmxID-1].channel[1]);
    dmx.setLevel((dmxID-1) * 16 + 3, dmxValues[dmxID-1].channel[2]);
    dmx.setLevel((dmxID-1) * 16 + 4, dmxValues[dmxID-1].channel[3]);
    dmx.setLevel((dmxID-1) * 16 + 5, dmxValues[dmxID-1].channel[4]);
    dmx.setLevel((dmxID-1) * 16 + 6, dmxValues[dmxID-1].channel[5]);
    dmx.setLevel((dmxID-1) * 16 + 7, dmxValues[dmxID-1].channel[6]);
	dmx.setLevel((dmxID-1) * 16 + 8, dmxValues[dmxID-1].channel[7]);
    dmx.setLevel((dmxID-1) * 16 + 9, dmxValues[dmxID-1].channel[8]);
    dmx.setLevel((dmxID-1) * 16 + 10, dmxValues[dmxID-1].channel[9]);
    dmx.setLevel((dmxID-1) * 16 + 11, dmxValues[dmxID-1].channel[10]);
    dmx.setLevel((dmxID-1) * 16 + 12, dmxValues[dmxID-1].channel[11]);
    dmx.update();

    lastDmxID = dmxID.get();
}

void ofApp::draw() {
    panel.draw();
}

void ofApp::saveSettings(){
    ofxJSONElement json;

    for(int i=0; i<4; i++){
        json[ofToString(i+1)][0]  =  dmxValues[i].channel[0];
        json[ofToString(i+1)][1]  =  dmxValues[i].channel[1];
        json[ofToString(i+1)][2]  =  dmxValues[i].channel[2];
        json[ofToString(i+1)][3]  =  dmxValues[i].channel[3];
        json[ofToString(i+1)][4]  =  dmxValues[i].channel[4];
        json[ofToString(i+1)][5]  =  dmxValues[i].channel[5];
        json[ofToString(i+1)][6]  =  dmxValues[i].channel[6];
        json[ofToString(i+1)][7]  =  dmxValues[i].channel[7];
        json[ofToString(i+1)][8]  =  dmxValues[i].channel[8];
        json[ofToString(i+1)][9]  =  dmxValues[i].channel[9];
        json[ofToString(i+1)][10] = dmxValues[i].channel[10];
        json[ofToString(i+1)][11] = dmxValues[i].channel[11];
    }

    json.save("dmxSetting.json");
}


void ofApp::loadSettings(){
    ofxJSONElement json;

    bool isOK = json.open("dmxSetting.json");
    if(isOK){
        cout << json << endl;
        for(int i=0; i<4; i++){
            dmxValues[i].channel[0] = json[ofToString(i+1)][0].asInt()  ;
            dmxValues[i].channel[1] = json[ofToString(i+1)][1].asInt()  ;
            dmxValues[i].channel[2] = json[ofToString(i+1)][2].asInt()  ;
            dmxValues[i].channel[3] = json[ofToString(i+1)][3].asInt()  ;
            dmxValues[i].channel[4] = json[ofToString(i+1)][4].asInt()  ;
            dmxValues[i].channel[5] = json[ofToString(i+1)][5].asInt()  ;
            dmxValues[i].channel[6] = json[ofToString(i+1)][6].asInt()  ;
            dmxValues[i].channel[7] = json[ofToString(i+1)][7].asInt()  ;
            dmxValues[i].channel[8] = json[ofToString(i+1)][8].asInt()  ;
            dmxValues[i].channel[9] = json[ofToString(i+1)][9].asInt()  ;
            dmxValues[i].channel[10] = json[ofToString(i+1)][10].asInt() ;
            dmxValues[i].channel[11] = json[ofToString(i+1)][11].asInt() ;

        }
    }
}

void ofApp::keyReleased(int key){
    if(key == 's' || key == 'S'){
        saveSettings();
    }
    if(key == 'l' || key == 'L'){
        loadSettings();
    }
}