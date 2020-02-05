//
//  ofxBitmapDrawManager.cpp
//  hullStudy
//
//  Created by okuyama on 2020/02/06.
//

#include "ofxBitmapDrawManager.h"



void ofxBitmapDrawManager::draw(){
    for(int i =0;i<params.size();i++){
        ofDrawBitmapString(params[i], 0, 12.0*(1+i));
    }
    params.clear();
}
