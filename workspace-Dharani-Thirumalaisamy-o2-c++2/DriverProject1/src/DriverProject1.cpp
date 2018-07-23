//============================================================================
// Name        : DriverProject1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#if defined(_WIN32)		// Windows, mingw
#include <cstring>		// Windows MinGw strtok, getline
#include <cstdlib>		// Windows MinGW need atoi, atod
#endif  // WIN32

#include <vector>
#include "DemoTemplate.h"
#include "DemoLambda.h"
#include "Objects.h"
#include "BaseCommodity.h"
#include "School.h"
#include"Person.h"
#include"Student.h"
#include"BasePerson.h"

using namespace std;
using namespace edu::neu::csye6205;

//template<typename T>
//void tokenizer(vector<T> v) {
//	const char  *delimiter = ",";		// constant
//	for (T s : v) {
//		cout << s << "," << endl;	// string to parse
//
//		std::vector<char> v(s.begin(), s.end());
//		v.push_back('\0');  // null terminate
//
////		string lname = string(strtok(v.data(), delimiter));
//		string fname = string(strtok(v.data(), delimiter));
//
//#if defined(_WIN32)
//		int age = atoi(string(strtok(NULL, delimiter)));
//		double grade = atod(string(strtok(NULL, delimiter)));
//#else
//		int age = stoi(string(strtok(NULL, delimiter)));
//		double grade = stod(string(strtok(NULL, delimiter)));
//#endif  // WIN32
//
//		cout << "First Name: " << fname << ", Age: " << age << ", GPA: " << grade << endl;
//	}
//	cout << endl;
//}

int main() {
	cout << "DriverProject executing main..." << endl; // prints DriverProject executing main...

//	DemoLambda::demo();
//	DemoTemplate::demo();
//	Objects<string>::demo();


//	Objects<Person*>::demo();

	School::demo();
	BaseCommodity::demo();
	BasePerson::demo();
	Person::demo();
	Student::demo();
	return 0;

/* OUTPUT :
 *
 *DriverProject executing main...
	 School::demo  starting...

	 BaseSchool::addStudent  starting...

BaseSchool::addStudent  done!

	 BaseSchool::addStudent  starting...

BaseSchool::addStudent  done!

	 BaseSchool::showStudents  starting...

AbstractPerson: Dave Poole,  Age: 17,  GPA: 3.750000
AbstractPerson: John Kennedy,  Age: 43,  GPA: 2.550000
 Total Students: 2
BaseSchool::showStudents  done!

School::demo  done!

	 BaseCommodity::demo() starting...

BaseCommodity::simpleSort() numbers BEFORE sort:
3,1,2,
 Total Items: 3
BaseCommodity::simpleSort() numbers AFTER sort:
1,2,3,
 Total Items: 3
BaseCommodity::simpleSort() strings BEFORE sort:
dog,cat,rat,
 Total Items: 3
BaseCommodity::simpleSort() strings AFTER sort:
cat,dog,rat,
 Total Items: 3
BaseCommodity::simpleTransform() values BEFORE transform
3,1,2,
 Total Items: 3
BaseCommodity::simpleTransform() values multiplied by 100 AFTER transform
300,100,200,
 Total Items: 3
BaseCommodity::simpleTransform() values divided by 10 AFTER transform
30,10,20,
 Total Items: 3
BaseCommodity::simpleTransform() strings BEFORE transform:
dog,cat,rat,
 Total Items: 3
BaseCommodity::simpleTransform() strings AFTER UPPERCASE transform:
DOG,CAT,RAT,
 Total Items: 3
BaseCommodity::simpleTransform() strings AFTER LOWERCASE transform:
dog,cat,rat,
 Total Items: 3

 ID   COST 	 ITEM (sorted by ID)
 1    $0.01	 someItem
 2    $999.99	 iPhone X
 3    $1599.99	 macBook Air

 Total Items: 3

 ID   COST 	 ITEM (sorted by name)
 2    $1009.99	 iPhone X
 3    $1609.99	 macBook Air
 1    $10.01	 someItem

 Total Items: 3

 ID   COST 	 ITEM (sorted by increasing price)
 1    $20.01	 someItem
 2    $1019.99	 iPhone X
 3    $1619.99	 macBook Air

 Total Items: 3

 ID   COST 	 ITEM (sorted by ascending value)
 1    $20.01	 someItem
 2    $1019.99	 iPhone X
 3    $1619.99	 macBook Air

 Total Items: 3

 ID   COST 	 ITEM (sorted by descending value)
 3    $1619.99	 macBook Air
 2    $1019.99	 iPhone X
 1    $20.01	 someItem

 Total Items: 3
BaseCommodity::demo() done!

	 BasePerson::demo starting...


 ID   COST 	 ITEM
AbstractPerson: john doe,  Age: 3
AbstractPerson: John Kennedy,  Age: 43
 Total Persons: 2
BasePerson::demo done!

	 Person.demo() starting...

Person: Doe, John Age: 0, Max Books Allowed: 3
Person: Smith, Jane Age: 29, Max Books Allowed: 3
Person: Doe, John Age: 0, Max Books Allowed: 3
Person: Doe, John Age: 0, Max Books Allowed: 3
Person: Peters, Dan Age: 19, Max Books Allowed: 3
NOT Using Polymorphism with vector<AbstractPerson> ...
3 Persons in vector<Person>.
AbstractPerson: john doe,  Age: 3
AbstractPerson: john doe,  Age: 3
AbstractPerson: john doe,  Age: 3

Using Polymorphism with vector<AbstractPerson *> ...
The sorted by ID list is : Person: doe, jon Age: 1, Max Books Allowed: 3
The sorted by ID list is : Person: smith, jan Age: 2, Max Books Allowed: 3
The sorted by ID list is : Person: jones, jim Age: 3, Max Books Allowed: 3
The sorted by First name list is : Person: smith, jan Age: 2, Max Books Allowed: 3
The sorted by First name list is : Person: jones, jim Age: 3, Max Books Allowed: 3
The sorted by First name list is : Person: doe, jon Age: 1, Max Books Allowed: 3
The sorted by Last name is : Person: doe, jon Age: 1, Max Books Allowed: 3
The sorted by Last name is : Person: jones, jim Age: 3, Max Books Allowed: 3
The sorted by Last name is : Person: smith, jan Age: 2, Max Books Allowed: 3
The sorted by ascending age is : Person: doe, jon Age: 1, Max Books Allowed: 3
The sorted by ascending age is : Person: smith, jan Age: 2, Max Books Allowed: 3
The sorted by ascending age is : Person: jones, jim Age: 3, Max Books Allowed: 3
The sorted by descending age is : Person: jones, jim Age: 3, Max Books Allowed: 3
The sorted by descending age is : Person: smith, jan Age: 2, Max Books Allowed: 3
The sorted by descending age is : Person: doe, jon Age: 1, Max Books Allowed: 3
Person.demo() done!



	 Student::demo()
Person: doe, jane Age: 19, Max Books Allowed: 3; a student with a GPA of: 4

The sorted by ascending GPA is : Student: Zach, Jones GPA 3.550000, 0.000000 1.000000
The sorted by ascending GPA is : Student: Dan, Peters GPA 3.950000, 0.000000 1.000000
The sorted by ascending GPA is : Student: jane, doe GPA 4.000000, 0.000000 1.000000
The sorted by descending GPA is : Student: jane, doe GPA 4.000000, 0.000000 1.000000
The sorted by descending GPA is : Student: Dan, Peters GPA 3.950000, 0.000000 1.000000
The sorted by descending GPA is : Student: Zach, Jones GPA 3.550000, 0.000000 1.000000
Transform by GPA  3 Students in list.
Person: doe, jane Age: 19, Max Books Allowed: 3; a student with a GPA of: 3

Person: Peters, Dan Age: 17, Max Books Allowed: 3; a student with a GPA of: 2.95

Person: Jones, Zach Age: 27, Max Books Allowed: 3; a student with a GPA of: 2.55



12, 32, 45, 71, 26, 80, 53, 33,
 Student::demo() done!
 *
 *
 */
}
