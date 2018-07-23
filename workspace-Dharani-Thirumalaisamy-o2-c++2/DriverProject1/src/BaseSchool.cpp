/*
 * BaseSchool.cpp
 *
 *  Created on: Nov 10, 2017
 *      Author: danielgmp
 */
#include <iostream>
#include "BaseStudent.h"
#include "BaseSchool.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

BaseSchool::BaseSchool() {
}

BaseSchool::~BaseSchool() {
}

void BaseSchool::addStudent(BaseStudent *p) {
	cout << "\t BaseSchool::addStudent  starting... \n" << endl;
	this->students.push_back(p);
	cout << "BaseSchool::addStudent  done! \n" << endl;
}

void BaseSchool::showStudents() {
	cout << "\t BaseSchool::showStudents  starting... \n" << endl;

	for (BaseStudent *p : this->students) {
		p->show();
	}
	cout << " Total Students: " << this->students.size() << endl;
	cout << "BaseSchool::showStudents  done! \n" << endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
