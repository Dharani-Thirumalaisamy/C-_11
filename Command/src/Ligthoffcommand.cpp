/*
 * Ligthoffcommand.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Ligthoffcommand.h"
#include<iostream>

namespace edu {
namespace neu {
namespace csye6205 {

Ligthoffcommand::Ligthoffcommand(Light *light):mlight(light) {
	// TODO Auto-generated constructor stub

}

Ligthoffcommand::~Ligthoffcommand() {
	// TODO Auto-generated destructor stub
}

void Lightoffcommand::execute(){
	mlight->off();
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
