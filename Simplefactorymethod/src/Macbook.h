/*
 * Macbook.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef MACBOOK_H_
#define MACBOOK_H_

#include "Applestore.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Macbook: public Applestore {
public:
	Macbook();
	virtual ~Macbook();
	virtual void info();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* MACBOOK_H_ */
