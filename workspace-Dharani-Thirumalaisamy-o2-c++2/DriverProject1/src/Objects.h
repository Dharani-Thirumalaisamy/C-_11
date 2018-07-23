/*
 * Objects.h
 *
 *  Created on: Nov 7, 2017
 *      Author: danielgmp
 */

#ifndef OBJECTS_H_
#define OBJECTS_H_

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

template <typename T, typename U>
T addSomethingSpecial(T a, U b);

template<typename T, typename U>
T addSomethingSpecial(T a, U b) {
	return (T)(a + b);
}

template<class T>
class Objects {
private:
	vector<T*> v;
public:
	Objects(){};
	virtual ~Objects(){};

	void add(T *a) {
		v.push_back(a);
	}

	void useFunc() {
		double x = 3.1;
		int n = 10;
		cout << "addSomethingSpecial(" << x << "," << n <<") returns:  " << addSomethingSpecial<double, int>(x, n) << endl;
		string s1 = "my age is: ";
		string s2 = "mature";
		cout << "addSomethingSpecial(" << s1 << "," << s2 <<") returns:  " << addSomethingSpecial<string, string>(s1, s2) << endl;
		char c = '?';
		cout << "addSomethingSpecial(" << s1 << "," << c <<") returns:  " << addSomethingSpecial<string, char>(s1, c) << endl;
		cout << "addSomethingSpecial(" << x << "," << c <<") returns:  " << addSomethingSpecial<double, char>(x, c) << endl;
		n = 0;
		c = 'B';
		cout << "addSomethingSpecial(" << n << "," << c <<") returns:  " << addSomethingSpecial<int, char>(n, c) << endl;
	}

	void show() {
		cout << "show: " << v.size() << " objects." << endl;
		for (T *p : this->v) {
			cout << p->info() << endl;
		}
	}
	static void demo() {
		cout << "\t Objects::demo() starting... \n" << endl;
		Person p;
		Student s;
		Teacher t;
		Objects<Person> obj;
		obj.add(&p);
		obj.add(&s);
		obj.add(&t);
		obj.show();

		obj.useFunc();

		cout << "Objects::demo() done! \n" << endl;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* OBJECTS_H_ */
