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
    template<typename T>
    void add(string name,T var){
        string tmp =name+" "+ofToString(var);
        params.push_back(tmp);
    }
    
    void addTexture(ofTexture tex);
    void draw();
    void Toggle_show();
    
private:
    bool show = true;
    vector<string> params;
    vector<ofTexture> texes;
    
    
};
