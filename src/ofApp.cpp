#include "ofApp.h"
#include "Creature.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFullscreen(true);
    ofBackground(0, 191, 255);
    
    for (int i = 0; i < 5; i++) {
        kaiso[i].loadImage("kaiso.png");
        kaisoX[i] = ofRandom(0, ofGetWidth());
        kaisoY[i] = ofGetHeight();
    }
    kaisoW = kaiso[0].getWidth();
    kaisoH = kaiso[0].getWidth();
    
    for (int i = 0; i < 5; i++) {
        wakame[i].loadImage("wakame.png");
        wakameX[i] = ofRandom(0, ofGetWidth());
        wakameY[i] = ofGetHeight();
    }
    wakameW = wakame[0].getWidth();
    wakameH = wakame[0].getHeight();
    
    for (int i = 0; i < 5; i++) {
        konbu[i].loadImage("konbu.png");
        konbuX[i] = ofRandom(0, ofGetWidth());
        konbuY[i] = ofGetHeight();
    }
    konbuW = konbu[0].getWidth();
    konbuH = konbu[0].getHeight();
    
    creature00.init("sakana00.png");
    creature01.init("sakana01.png");
    creature02.init("sakana02.png");
    creature03.init("sakana03.png");
    creature00.setup();
    creature01.setup();
    creature02.setup();
    creature03.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    creature00.update();
    creature01.update();
    creature02.update();
    creature03.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < 5; i++) {
        konbu[i].draw(konbuX[i], konbuY[i] - konbuH);
    }
    
    for (int i = 0; i < 5; i++) {
        kaiso[i].draw(kaisoX[i], kaisoY[i] - kaisoH * 1.5);
    }
    
    for (int i = 0; i < 5; i++) {
        wakame[i].draw(wakameX[i], wakameY[i] - wakameH);
    }
    
    creature00.draw();
    creature01.draw();
    creature02.draw();
    creature03.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
