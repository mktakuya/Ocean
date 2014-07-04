#include "Creature.h"


void Creature::init(string filename){
    img.loadImage(filename);
    imgW = img.getWidth();
    imgH = img.getHeight();
    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    for(int y=0; y<imgH; ++y){
        mesh.addVertex(ofPoint(0,y));
        mesh.addVertex(ofPoint(imgW,y));
        
        mesh.addTexCoord(ofPoint(0,y));
        mesh.addTexCoord(ofPoint(imgW,y));
    }
    
}

Creature::Creature(){
    t = -1;
    
    bLeft = false;
}

void Creature::setup() {
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(50, ofGetHeight() - 50);
    speedX = ofRandom(3, 10);
    speedY = ofRandom(3, 10);
}

void Creature::update(){
    if(bLeft) t += 0.1; //左向きならtを増やす
    else t -= 0.1; //右向きならtを減らす
    
    // tは-1〜2の間
    if(t>2) t = 2;
    else if(t<-1) t = -1;
    
    swim();
}

void Creature::draw(){
    for (int y=0; y<imgH; ++y) {
        //頂点の移動先を計算
        int convert_x = (int)(sin(PI/2*MAX(-1,MIN(1,t-(float)y/imgH)))*(-imgW/2)+imgW/2); //画像の左側の点
        int convert_x2 = (int)(sin(PI/2*MAX(-1,MIN(1,t-(float)y/imgH)))*imgW/2+imgW/2); //画像の右側の点
        
        //メッシュの頂点を移動
        mesh.setVertex(2*y, ofPoint(convert_x,y)); //左側の点
        mesh.setVertex(2*y+1, ofPoint(convert_x2,y)); //右側の点
    }
    
    ofPushMatrix();
    ofTranslate(x-imgW/2,y-imgH/2);
    img.bind();
    mesh.draw();
    img.unbind();
    ofPopMatrix();
}

void Creature::swim() {
    if (bLeft == true) {
        x -= speedX;
        y -= 1;
    } else {
        x += speedX;
        y += 1;
    }
    
    if (x > ofGetWidth()) {
        move(Creature::LEFT);
    } else if (x < 0) {
        move(Creature::RIGHT);
    }
}

void Creature::move(CDirection dir){
    if(dir == Creature::LEFT) bLeft = true;
    else if(dir == Creature::RIGHT) bLeft = false;
}