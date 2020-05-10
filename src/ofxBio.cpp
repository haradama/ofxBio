//
//  ofxBio.cpp
//  ofxBio
//
//  Created by Masafumi Harada on 2020/05/10.
//

#include "ofxBio.hpp"


Seq::Seq(string data) {
    this->data = data;
    this->length = data.size();
};

int Seq::getLength() {
    return length;
};
