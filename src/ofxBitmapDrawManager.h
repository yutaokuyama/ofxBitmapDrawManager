//
//  ofxBitmapDrawManager.hpp
//  hullStudy
//
//  Created by okuyama on 2020/02/06.
//
#include "ofMain.h"

//what want to do?
//useful bitmap parameter viewer

//


class ofxBitmapDrawManager{
public:
    vector<string> params;
    int num = 0;
    template<typename T>
    void addParam(string name,T var){
        string tmp =name+" "+ofToString(var);
        params.push_back(tmp);
    }
    void draw();


    
    
    
};
