/*
 * Command.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef COMMAND_H_
#define COMMAND_H_

namespace edu {
namespace neu {
namespace csye6205 {
const int maxcommand =5;

class Command {
public:
	Command();
	virtual ~Command();
	virtual int execute()=0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* COMMAND_H_ */
