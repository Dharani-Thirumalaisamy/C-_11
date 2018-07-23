/*
 * Iphone.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef IPHONE_H_
#define IPHONE_H_

#include "Applestore.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Iphone: public Applestore {
public:
	Iphone();
	virtual ~Iphone();
	virtual void info();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* IPHONE_H_ */
