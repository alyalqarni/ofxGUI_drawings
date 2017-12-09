//
//  FireworkParticle.cpp
//  fireworks_example
//
//  Created by Jonathan Beilin on 10/30/17.
//

#include "FireworkParticle.hpp"


void FireworkParticle::setup(int x, int y, ofColor _color) {
	position.set(x, y);
	color = _color;

	velocity.set(ofRandom(-1.2, 1.2), ofRandom(-1, 1));
	acceleration.set(0, ofRandom(0, 0.01));

	alpha = 255;
}

void FireworkParticle::update() {
	velocity += acceleration;
	position += velocity;

	// make particles fade out by one alpha tick each update (frame)
	alpha--;
    
    
}

void FireworkParticle::draw() {
	ofSetColor(color.r, color.g, color.b, alpha);
	ofDrawCircle(position, 2);
}
