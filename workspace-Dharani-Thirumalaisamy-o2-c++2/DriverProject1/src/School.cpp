/*
 * School.cpp
 *
 *  Created on: Nov 10, 2017
 *      Author: danielgmp
 */

#include <iostream>
#include "BaseStudent.h"
#include "School.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

School::School() {
}

School::~School() {
}

/**
 * demo()
 *
 * Demonstrate how to use this class.
 */
void School::demo() {
	cout << "\t School::demo  starting... \n" << endl;
	School obj;
	BaseStudent dgp(7, "Dave", "Poole", 17, 3.75);
	obj.addStudent(&dgp);
	BaseStudent jfk(35, "John", "Kennedy", 43, 2.55);
	obj.addStudent(&jfk);
	obj.showStudents();
	cout << "School::demo  done! \n" << endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
