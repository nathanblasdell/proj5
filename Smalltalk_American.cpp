/*
 * Smalltalk_American.cpp
 *
 *  Created on: Apr 14, 2021
 *      Author: nathan
 */
#include <string>
#include <vector>
#include <memory>
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Smalltalk_American.h"

//this constructor should call the 2 parameter constructor below in it's initializer list
Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN,iPerson) {

}
Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson):Smalltalk(myNationality,iPerson) {

}

Smalltalk_American::~Smalltalk_American(void) {

}
void Smalltalk_American::populatePhrases() {
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}
