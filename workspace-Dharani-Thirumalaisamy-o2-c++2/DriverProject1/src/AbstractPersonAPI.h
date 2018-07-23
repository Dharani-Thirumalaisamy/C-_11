/*
 * Person.h
 *
 *  Created on: Oct 9, 2017
 *      Author: danielgmp
 */

#ifndef ABSTRACTPERSONAPI_H_
#define ABSTRACTPERSONAPI_H_

#include <string>

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractPersonAPI {
public:
	AbstractPersonAPI();
	virtual ~AbstractPersonAPI();
	virtual const string info() const = 0;		// pure virtual method: not implemented, must be derived
	virtual void show() const = 0;		// pure virtual method: not implemented, must be derived
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTPERSONAPI_H_ */
