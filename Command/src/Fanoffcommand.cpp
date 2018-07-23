/*
 * Fanoffcommand.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Fanoffcommand.h"
#include<iostream>

namespace edu {
namespace neu {
namespace csye6205 {

Fanoffcommand::Fanoffcommand(Fan *fan):mfan(fan) {
	// TODO Auto-generated constructor stub

}

Fanoffcommand::~Fanoffcommand() {
	// TODO Auto-generated destructor stub
}

void Fanoffcommand::execute(){
	   mfan->off();
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
