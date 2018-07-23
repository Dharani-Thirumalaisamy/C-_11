/*
 * Fliptype.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef FLIPTYPE_H_
#define FLIPTYPE_H_

#include "Basic.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Fliptype: public Basic {
public:
	Fliptype();
	virtual ~Fliptype();
	virtual std::string name(){return "Fliptype";}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* FLIPTYPE_H_ */
