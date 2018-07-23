/*
 * Galaxy.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef GALAXY_H_
#define GALAXY_H_
#include<string>

#include "Smart.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Galaxy: public Smart {
public:
	Galaxy();
	virtual ~Galaxy();
	virtual std::string name(){return "Galaxy S2";}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* GALAXY_H_ */
