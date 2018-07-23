/*
 * Ligthoffcommand.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef LIGTHOFFCOMMAND_H_
#define LIGTHOFFCOMMAND_H_

#include "Command.h"
#include"Light.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Ligthoffcommand: public Command {
	Light *mlight;
public:
	Ligthoffcommand(Light *mlight);
	virtual ~Ligthoffcommand();
	 virtual void execute();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* LIGTHOFFCOMMAND_H_ */
