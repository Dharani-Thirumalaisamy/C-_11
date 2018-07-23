/*
 * Nokiafactory.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef NOKIAFACTORY_H_
#define NOKIAFACTORY_H_

#include "Factory.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Nokiafactory: public Factory {
public:
	Nokiafactory();
	virtual ~Nokiafactory();
	virtual Smart*getsmart(){return new Lumina();}
	virtual Basic*getbasic(){return new Asha();}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* NOKIAFACTORY_H_ */
