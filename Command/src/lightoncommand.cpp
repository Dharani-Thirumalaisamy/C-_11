/*
 * lightcommand.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "lightoncommand.h"
#include<iostream>

namespace edu {
namespace neu {
namespace csye6205 {

lightcommand::lightcommand(Light *light):mlight(light) {
	// TODO Auto-generated constructor stub

}

lightcommand::~lightcommand() {
	// TODO Auto-generated destructor stub
}

void lightcommand::execute(){
	mlight->on();
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
