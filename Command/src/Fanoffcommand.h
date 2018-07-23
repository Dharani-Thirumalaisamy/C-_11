/*
 * Fanoffcommand.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef FANOFFCOMMAND_H_
#define FANOFFCOMMAND_H_

#include "Command.h"
#include"Fan.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Fanoffcommand: public Command {
     Fan *mfan;
public:
	Fanoffcommand(Fan *mfan);
	virtual ~Fanoffcommand();
	virtual void execute();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* FANOFFCOMMAND_H_ */
