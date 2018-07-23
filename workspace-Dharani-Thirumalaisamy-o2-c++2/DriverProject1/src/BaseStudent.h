/*
 * BaseStudent.h
 *
 *  Created on: Nov 13, 2017
 *      Author: danielgmp
 */

#ifndef BASESTUDENT_H_
#define BASESTUDENT_H_

#include "BasePerson.h"

namespace edu {
namespace neu {
namespace csye6205 {

class BaseStudent: public BasePerson {
	double gpa;
public:
	BaseStudent();
	BaseStudent(int id, string first, string last, int age, double gpa);
	virtual ~BaseStudent();

	double getGpa() const;
	void setGpa(double gpa);

	virtual const std::string info() const;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASESTUDENT_H_ */
