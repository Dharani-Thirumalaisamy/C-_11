/*
 * Fancommand.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Fanoncommand.h"
#include<iostream>

namespace edu {
namespace neu {
namespace csye6205 {

Fancommand::Fancommand(Fan *fan):mfan(fan) {
	// TODO Auto-generated constructor stub

}

Fancommand::~Fancommand() {
	// TODO Auto-generated destructor stub
}

void Fancommand::execute(){
	mfan->on();
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
