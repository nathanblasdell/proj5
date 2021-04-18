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
#include "./includes/Smalltalk_American.h"

//this constructor should call the 2 parameter constructor below in it's initializer list
Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(Smalltalk::nationality,iPerson) {

}
Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson):Smalltalk(myNationality,iPerson) {

}

void Smalltalk_American::populatePhrases() {
	for (int i=0;i<5;i++)
		i++;
		//Smalltalk::mySmalltalk.push_back());
}
