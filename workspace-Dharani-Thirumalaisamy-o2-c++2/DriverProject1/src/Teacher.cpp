/*
 * Teacher.cpp
 *
 *  Created on: Nov 4, 2015
 *      Author: danielgmp
 */

#include <iostream>
#include <string>
#include <sstream>	// stringstream
#include "Teacher.h"
#include<fstream>

namespace edu {
namespace neu {
namespace csye6205 {

Teacher::Teacher() {
}

Teacher::~Teacher() {
}

std::istream &operator>>( std::istream  &input, Teacher &t ) {
   input >> t.m_credentials;
   return input;
}

std::ostream &operator<<(ostream & output, const Teacher& t) {

	string str = "Patents: " + t.m_credentials;
	output << str;
	return output;
}

Teacher& Teacher::operator= (const Teacher& rhs) {
	if (this != &rhs) {
		this->m_credentials = rhs.m_credentials;
	}
	return *this;
}

const int Teacher::getPatents() const {
	return m_credentials;
}

void Teacher::setPatents(int c) {
	m_credentials = c;

	return;
}

const string Teacher::info() const {
//	cout << "Age: " << m_age << endl; // can not access private base class member
	std::stringstream ss;
	ss << Person::info() << "; a teacher with : " << this->getPatents() << " U.S. patents."<< std::endl;
	return ss.str();
}

const string Teacher::speak(void) const {
	string s = "I'm a teacher!!";

	return (s);
}

bool Teacher::operator<(const Teacher &rhs) const {
	return this->getPatents()<rhs.getPatents() ;
}

bool Teacher::operator>(const Teacher &rhs) const {
	return this->getPatents()>rhs.getPatents() ;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
