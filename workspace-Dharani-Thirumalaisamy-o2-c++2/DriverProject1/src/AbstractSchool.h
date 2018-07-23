/*
 * AbstractSchool.h
 *
 *  Created on: Nov 10, 2017
 *      Author: danielgmp
 */

#ifndef ABSTRACTSCHOOL_H_
#define ABSTRACTSCHOOL_H_

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractSchool {
public:
	AbstractSchool();
	virtual ~AbstractSchool();

	virtual void showStudents() = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTSCHOOL_H_ */
