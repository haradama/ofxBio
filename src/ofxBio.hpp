//
//  ofxBio.hpp
//  ofxBio
//
//  Created by Masafumi Harada on 2020/05/10.
//

#ifndef ofxBio_hpp
#define ofxBio_hpp

#include "ofMain.h"
#include <stdio.h>
using namespace std;

class Seq
{
private:
    string data;
    int length;
public:
    Seq(string data);
    
    int getLength();
};
#endif /* ofxBio_hpp */
