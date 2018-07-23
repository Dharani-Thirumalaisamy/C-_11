/*
 * Lumina.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef LUMINA_H_
#define LUMINA_H_

#include "Smart.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Lumina: public Smart {
public:
	Lumina();
	virtual ~Lumina();
	virtual std::string name(){return "Lumina900";}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* LUMINA_H_ */
