#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "FireworkParticle.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
        void fireworksRestart();
		void update();
		void draw();
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
        vector<FireworkParticle> fireworks;
    
    ofxPanel gui;
    ofxIntSlider posX;
    ofxIntSlider posY;
    ofxIntSlider radius;
    
    ofxIntSlider green;
    ofxIntSlider blue;
    ofxIntSlider red;


    ofxButton generate;

};
