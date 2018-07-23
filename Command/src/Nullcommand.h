/*
 * Nullcommand.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef NULLCOMMAND_H_
#define NULLCOMMAND_H_

#include "Command.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Nullcommand: public Command {
public:
	Nullcommand();
	virtual ~Nullcommand();
	void execute();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* NULLCOMMAND_H_ */
