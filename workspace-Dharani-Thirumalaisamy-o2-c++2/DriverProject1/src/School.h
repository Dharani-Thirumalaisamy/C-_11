/*
 * School.h
 *
 *  Created on: Nov 10, 2017
 *      Author: danielgmp
 */

#ifndef SCHOOL_H_
#define SCHOOL_H_

#include "BaseSchool.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class School : public BaseSchool {
public:
	School();
	virtual ~School();
	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* SCHOOL_H_ */
