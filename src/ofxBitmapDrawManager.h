//
//  ofxBitmapDrawManager.hpp
//
//
//  Created by okuyama on 2020/02/06.
//
#include "ofMain.h"

//useful bitmap parameter viewer

//


class ofxBitmapDrawManager{
public:
    vector<string> params;
    vector<ofTexture> texes;

    int num = 0;
    int currentY = 0;
    template<typename T>
    void add(string name,T var){
        string tmp =name+" "+ofToString(var);
        params.push_back(tmp);
    }
    
    void addTexture(ofTexture tex);
    void draw();
    

    
};
