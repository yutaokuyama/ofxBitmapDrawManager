//
//  ofxBitmapDrawManager.cpp
//  
//
//  Created by okuyama on 2020/02/06.
//

#include "ofxBitmapDrawManager.h"


void ofxBitmapDrawManager::addTexture(ofTexture tex){
    texes.push_back(tex);
}

void ofxBitmapDrawManager::draw(){
    int currentY = 0;
    if(show){
        for(int i =0;i<params.size();i++){
            ofDrawBitmapString(params[i], 0, currentY);
            currentY+=12;
        }
        
        for(int i = 0;i<texes.size();i++){
            if(i == 0&&currentY == 12.0) currentY = 0;
            if(texes[i].getWidth()/texes[i].getHeight()>1.0){
                texes[i].draw(0.0,currentY,256,192);
            }else{
                texes[i].draw(0.0,currentY,192,192);
            }
            currentY+= 192;
        }
    }
    params.clear();
    
    texes.clear();
    currentY = 12.0;;
}

void ofxBitmapDrawManager::Toggle_show(){
    show = !show;
}
