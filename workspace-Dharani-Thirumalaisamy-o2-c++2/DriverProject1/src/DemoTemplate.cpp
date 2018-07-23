/*
 * DemoTemplate.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: danielgmp
 */

#include <iostream>
#include <string>
#include <vector>
#include "DemoTemplate.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

template<typename T>
void show(vector<T> v) {
	for (auto x : v) {
		cout << x << ", " ;
	}
	cout << endl;
}

DemoTemplate::DemoTemplate() {

}

DemoTemplate::~DemoTemplate() {
}

void DemoTemplate::numbers() {
	cout << "\t DemoTemplate::numbers() starting ...\n" << endl;
	const int ASIZE = 3;
	int a[] = {1,2,3};
	vector<int> v1(a, a+ASIZE);
	double b[] = {3.1,4.2,5.3};
	vector<double>v2(b,b+ASIZE);
	string c[] = {"apple","peach", "grape"};
	vector<string> v3(c, c+ASIZE);
	show(v1);
	show(v2);
	show(v3);
	cout << "DemoTemplate::numbers() done\n" << endl;
}

void DemoTemplate::demo() {
	cout << "\t DemoTemplate::demo() starting ...\n" << endl;
	DemoTemplate obj;
	obj.numbers();
	cout << "DemoTemplate::demo() done\n" << endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
