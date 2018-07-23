/*
 * Asha.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef ASHA_H_
#define ASHA_H_

#include "Basic.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Asha: public Basic {
public:
	Asha();
	virtual ~Asha();
	virtual std::string name(){return "Asha";}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ASHA_H_ */
