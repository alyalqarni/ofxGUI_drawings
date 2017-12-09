#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // make the background black
    ofBackground(255);
    // don't automatically black out the window each frame
    ofSetBackgroundAuto(false);
    
    // make 350 FireworkParticles and put them in an array
    int numParticles = 150;
    for (int i = 0; i < numParticles; i++) {
        FireworkParticle firework;
        fireworks.push_back(firework);
    }
    
    gui.setup();
    gui.add(posX.setup("posX", 0, 0,1000));
    gui.add(posY.setup("posY", 10, 0,1000));
    gui.add(radius.setup("radius", 60, 0,300));
  
    gui.add(red.setup("RED", 255, 10, 10));
    gui.add(green.setup("GREEN", 70, 0,255));
    gui.add(blue.setup("BLUE", 255, 0,255));

    
}

//--------------------------------------------

void ofApp::fireworksRestart() {

    for (int i = 0; i < fireworks.size(); i++) {
       fireworks[i];
 }
}


//--------------------------------------------------------------
void ofApp::update(){
//     go through our fireworks vector and update each firework in it
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].update();
    }

    // check whether fireworks are still active
    // when alpha <= 0, firework is dead
    // can just check one firework since they all are born at the same time and
    // expire at the same time
    if (fireworks[0].alpha <= 0) {
        fireworksRestart();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
   
    ofSetColor(red, green, blue);
    
    ofDrawCircle(posX, posY, radius);
    
    // go through our fireworks vector and draw each firework in it
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].draw();
    }
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if ( key == ' '){
        fireworksRestart();
    }
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
