/*
 * BaseStudent.cpp
 *
 *  Created on: Nov 13, 2017
 *      Author: danielgmp
 */

#include <iostream>
#include <sstream>
#include <string>
#include "BaseStudent.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

BaseStudent::BaseStudent() : BasePerson(1, "john", "doe", 3), gpa(0.0)  {
}

BaseStudent::BaseStudent(int _id, string _first, string _last, int _age, double _gpa) : BasePerson(_id, _first, _last, _age), gpa(_gpa) {
}

BaseStudent::~BaseStudent() {
}

double BaseStudent::getGpa() const {
	return gpa;
}

void BaseStudent::setGpa(double gpa) {
	this->gpa = gpa;
}

const string BaseStudent::info() const {
	stringstream ss;
	ss
		<< "AbstractPerson:"
		<< " " << this->getFirstName()
		<< " " << this->getLastName()
		<< ", " << " Age: " + std::to_string(this->getAge())
	<< ", " << " GPA: " + std::to_string(this->getGpa());
	return ss.str();
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
