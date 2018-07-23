/*
 * Samsungfactory.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef SAMSUNGFACTORY_H_
#define SAMSUNGFACTORY_H_

#include "Factory.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Samsungfactory: public Factory {
public:
	Samsungfactory();
	virtual ~Samsungfactory();
	virtual Smart*getsmart(){return new Galaxy();}
	virtual Basic*getbasic(){return new Fliptype();}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* SAMSUNGFACTORY_H_ */
