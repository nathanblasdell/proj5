/*
 * Smalltalk.cpp
 *
 *  Created on: Apr 14, 2021
 *      Author: nathan
 */
#include <string>
#include <vector>
#include <memory>
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Smalltalk_Brit.h"

	//this constructor should call the 2 parameter constructor below in it's initializer list
Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT,iPerson) {

}
Smalltalk_Brit::~Smalltalk_Brit(void) {

}
void Smalltalk_Brit::populatePhrases() {
	mySmallTalk.push_back(BRIT_1);
	mySmallTalk.push_back(BRIT_2);
	mySmallTalk.push_back(BRIT_3);
	mySmallTalk.push_back(BRIT_4);
	mySmallTalk.push_back(BRIT_5);
	mySmallTalk.push_back(BRIT_6);
	mySmallTalk.push_back(BRIT_7);
}


