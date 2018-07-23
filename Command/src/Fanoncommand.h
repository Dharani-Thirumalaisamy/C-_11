/*
 * Fancommand.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef FANONCOMMAND_H_
#define FANONCOMMAND_H_

#include "Command.h"
#include"Fan.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Fancommand: public Command {
	Fan *mfan;
public:
	Fancommand(Fan *mfan);
	virtual ~Fancommand();
	void execute();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* FANONCOMMAND_H_ */
