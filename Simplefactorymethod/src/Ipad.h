/*
 * Ipad.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef IPAD_H_
#define IPAD_H_

#include "Applestore.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Ipad: public Applestore {
public:
	Ipad();
	virtual ~Ipad();
	virtual void info();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* IPAD_H_ */
