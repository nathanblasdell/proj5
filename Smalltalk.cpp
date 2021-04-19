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
#include "./includes/Watch.h"

//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish between objects of the same type
Smalltalk::Smalltalk(std::string myNationality, int iPerson):nationality(myNationality), iPerson(iPerson), current_phrase(0){

}
Smalltalk::~Smalltalk(void) {

}
//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending 
//with the last and then it starts over
//takes the form Nationality iPerson: phrase
//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2 
//AMERICAN 10:Why yes, I would like to supersize that
std::string Smalltalk::saySomething() {
	this->populatePhrases();
	std::string phrase = this->mySmallTalk[current_phrase];
	current_phrase++;
	return phrase;
}

//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS: (from the actual watch object itself) and then the time
//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
std::string Smalltalk::getTime() {
	if (!pWatch) {
		return I_DO_NOT_HAVE_A_WATCH;
	}
	else {
		return pWatch->getTime();
	}
}

//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
// This transaction simulates giving away a watch
std::unique_ptr<Watch> Smalltalk::takeWatch() {
	if (pWatch) {
		pWatch.reset();
	}
	return std::unique_ptr<Watch>{};
}

//if pWatch is NULL return false
//if already have a watch then return false and dont change pWatch pointer
//otherwise accept watch and use std::move to move watch
//from pWatch to this->pWatch and return true
bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (!pWatch) {
		return false;
	}
	if (pWatch != 0) {
		return false;
	}
	std::unique_ptr<Watch> ptr1(new Watch);
	pWatch = std::move(ptr1);
	this->pWatch = std::move(pWatch);
	return true;
}



