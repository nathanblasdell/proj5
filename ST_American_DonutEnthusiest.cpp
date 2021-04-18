/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Apr 14, 2021
 *      Author: nathan
 */
#include "./includes/constants.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"

//use base class constructor in initializer list to set Nationality and iPerson (See constants for Nationality strings)
//also prepare the object for use by calling populatePhrases()
ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int iPerson):Smalltalk_American(nationality, iPerson) {

}

//base class populatePhrases() will be called first as part of its construction
//before this class calls populate phrases as part of its construction
//the end result is mySmallTalk will contain first the base class phrases and
//then ST_American_DonutEnthusiest phrases
void ST_American_DonutEnthusiest::populatePhrases() {

}
