/*
 * AbstractComodity.h
 *
 *  Created on: Nov 13, 2017
 *      Author: danielgmp
 */

#ifndef ABSTRACTCOMODITY_H_
#define ABSTRACTCOMODITY_H_

#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractComodity {
public:
	AbstractComodity();
	virtual ~AbstractComodity();
	virtual std::string info() const = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTCOMODITY_H_ */
