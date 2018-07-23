/*
 * BaseSchool.h
 *
 *  Created on: Nov 10, 2017
 *      Author: danielgmp
 */

#ifndef BASESCHOOL_H_
#define BASESCHOOL_H_

#include <vector>
#include "BaseStudent.h"
#include "AbstractSchool.h"

namespace edu {
namespace neu {
namespace csye6205 {

class BaseSchool : public AbstractSchool {
private:
	vector<BaseStudent*> students;

public:
	BaseSchool();
	virtual ~BaseSchool();

	virtual void addStudent(BaseStudent* student_p);
	virtual void showStudents();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASESCHOOL_H_ */
