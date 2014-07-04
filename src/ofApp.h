#pragma once

#include "ofMain.h"
#include "Creature.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofImage background;
    
    ofImage kaiso[5];
    int kaisoW;
    int kaisoH;
    int kaisoX[5];
    int kaisoY[5];
    
    ofImage konbu[5];
    int konbuW;
    int konbuH;
    int konbuX[5];
    int konbuY[5];
    
    ofImage wakame[5];
    int wakameW;
    int wakameH;
    int wakameX[5];
    int wakameY[5];
    
    Creature creature00;
    Creature creature01;
    Creature creature02;
    Creature creature03;
		
};
