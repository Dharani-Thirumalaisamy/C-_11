/*
 * lightcommand.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef LIGHTONCOMMAND_H_
#define LIGHTONCOMMAND_H_

#include "Command.h"
#include"Light.h"

namespace edu {
namespace neu {
namespace csye6205 {

class lightcommand: public Command {
	Light *mlight;
public:
	lightcommand(Light *mlight);
	virtual ~lightcommand();
	virtual void execute();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* LIGHTONCOMMAND_H_ */
