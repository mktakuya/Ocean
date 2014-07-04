#ifndef __Creature__
#define __Creature__

#include "ofMain.h"

class Creature{
public:
    enum CDirection{RIGHT, LEFT};
    void init(string filename);
    Creature();
    void setup();
    void update();
    void draw();
    void swim();
    void move(CDirection dir);
    
    ofImage img;
    ofMesh mesh;
    int imgW, imgH;
    int speedX;
    int speedY;
    int x;
    int y;
    float t;
    bool bLeft;
};

#endif