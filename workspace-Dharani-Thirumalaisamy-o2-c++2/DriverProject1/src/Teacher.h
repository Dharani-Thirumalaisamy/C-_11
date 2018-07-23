/*
 * Teacher.h
 *
 *  Created on: Nov 4, 2015
 *      Author: danielgmp
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#include "Person.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Teacher : public Person {
public:
	int m_credentials = 6;

	Teacher();
	virtual ~Teacher();
	const int getPatents() const;
	void setPatents(int);
//	string speak();
	virtual const string speak() const;		// virtual allows overriding for dynamic polymorphism
	const string info() const;
	Teacher& operator= (const Teacher& rhs);
	bool operator<(const Teacher &rhs) const;
	bool operator>(const Teacher &rhs) const;
	friend ostream &operator<<(ostream& output, const Teacher& t);
	friend istream &operator>>(istream& input, const Teacher& t);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* TEACHER_H_ */
