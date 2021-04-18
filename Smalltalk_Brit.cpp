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
#include "./includes/Smalltalk_Brit.h"

	//this constructor should call the 2 parameter constructor below in it's initializer list
Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(Smalltalk::nationality,iPerson) {

}

void Smalltalk_Brit::populatePhrases() {
	for (int i=0;i<5;i++)
		i++;
		//Smalltalk::mySmalltalk.push_back());
}


