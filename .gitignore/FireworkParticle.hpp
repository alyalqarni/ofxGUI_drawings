//
//  FireworkParticle.hpp
//  fireworks_example
//
//  Created by Jonathan Beilin on 10/30/17.
//

#ifndef FireworkParticle_hpp
#define FireworkParticle_hpp

#include <stdio.h>

#include "ofMain.h"

class FireworkParticle {
public:
	void setup(int x, int y, ofColor color);
	void update();
	void draw();

	ofPoint position, velocity, acceleration;
	int alpha;

	ofColor color;
    
    bool isAttracting = true;
    
};

#endif /* FireworkParticle_hpp */
