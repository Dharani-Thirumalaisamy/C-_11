/*
 * UseLambda.cpp
 *
 *  Created on: Nov 30, 2016
 *      Author: danielgmp
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include<fstream>
#include<cstring>
#include<string>

#if defined(_WIN32)		// Windows, mingw
#include <cstring>		// Windows MinGw strtok, getline
#include <cstdlib>		// Windows MinGW need atoi, atod
#endif  // WIN32

#include "DemoLambda.h"


using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

template<typename T>
void tokenizer(vector<T> v) {
	const char  *delimiter = ",";		// constant
	for (T s : v) {
		cout << s << "," << endl;	// string to parse

		std::vector<char> v(s.begin(), s.end());
		v.push_back('\0');  // null terminate

//		string lname = string(strtok(v.data(), delimiter));
		string fname = string(strtok(v.data(), delimiter));

#if defined(_WIN32)
		int age = stoi(string(strtok(NULL, delimiter)));
		double grade = stod(string(strtok(NULL, delimiter)));
#else
		int age = stoi(string(strtok(NULL, delimiter)));
		double grade = stod(string(strtok(NULL, delimiter)));
#endif  // WIN32

		cout << "First Name: " << fname << ", Age: " << age << ", GPA: " << grade << endl;
	}
	cout << endl;
}


DemoLambda::DemoLambda() : m_criterion(3), m_count(0){
}

DemoLambda::DemoLambda(int count) : m_criterion(3) {
	// initializer list initializes immutable m_criterion
	m_count = count;
}

// immutable (const) criterion

const int DemoLambda::getCriterion() const {
	return m_criterion;
}

// variable criterion

//UseLambda::UseLambda(int criterion, int count){
//	m_criterion = criterion;
//	m_count = count;
//}
//
//int UseLambda::getCriterion() const {
//	return m_criterion;
//}
//
//void UseLambda::setCriterion(int criterion) {
//	m_criterion = criterion;
//}


DemoLambda::~DemoLambda() {
	// TODO Auto-generated destructor stub
}

int DemoLambda::accumulate() {
	cout << "UseLambda::accumulate()..." << endl;
	m_count = 0;
	const int myints[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const int SIZE = sizeof(myints) / sizeof(int);
	std::vector<int> m_numbers(myints, myints + SIZE);
	for (int i : m_numbers) {
		if ( i > m_criterion) {
			m_count++;
		} // end if
	} // end for
	show();
	return m_count;
}

int DemoLambda::accumulate2() {
	cout << "UseLambda::accumulate2()..." << endl;
	m_count = 0;
	const int myints[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const int SIZE = sizeof(myints) / sizeof(int);
	std::vector<int> m_numbers(myints, myints + SIZE);
	for (int i : m_numbers) {
		// lambda statement ";" terminator is required
		[this] (int i) {
			if ( i > m_criterion) {
				m_count++;
			} // end if
		}(i);
	}	// end for
	show();
	return m_count;
}

int DemoLambda::getCount() const {
	return m_count;
}

void DemoLambda::setCount(int count) {
	m_count = count;
}

void DemoLambda::show() {
	cout << "Count of numbers greater than "<< getCriterion() << " is " << getCount() << endl;
}

bool is_greater_than_5(int value)
{
    return (value > 5);
}

void DemoLambda::countNumber() {
    vector<int> numbers { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto greater_than_5_count = count_if(numbers.begin(), numbers.end(), is_greater_than_5);

    cout << "The number of elements greater than 5 is: "
        << greater_than_5_count << "." << endl;
}

void DemoLambda::countNumberLambda() {
	   vector<int> numbers { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	    auto greater_than_5_count = count_if(numbers.begin(), numbers.end(), [](int x) { return (x > 5); });
	    cout << "The number of elements greater than 5 is: " << greater_than_5_count << "." << endl;
}

void DemoLambda::sort() {
	std::cout << "UseLambda::sort()..."  << std::endl;

	int myints[] = {32,71,12,45,26,80,53,33};
	std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

	// print out content:
	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	// using default comparison (operator <):
	std::sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33

	// print out content:
	std::cout << "myvector contains (sorting only first four integers using default comparison, i.e. operator '<':";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	// using lambda as comp
	std::cout << "DemoContainer::DemoSort(): Use Lambda as a comparator" << std::endl;
//	std::sort (myvector.begin()+4, myvector.end(), [](int x, int y) { return x < y; }); // 12 32 45 71(26 33 53 80)
	std::sort (myvector.begin(), myvector.end(), [](int x, int y) { return x < y; }); // 12 32 45 71(26 33 53 80)
	std::sort (myvector.begin(), myvector.end(), [](int x, int y) { return x > y; }); // 12 32 45 71(26 33 53 80)

	// using function as comp
//	std::sort (myvector.begin()+4, myvector.end(), mySortfunction); // 12 32 45 71(26 33 53 80)

	// print out content:
	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	// ASCENDING Sort: using object as comp
	std::sort (myvector.begin(), myvector.end(), [] (int i, int j) -> bool {return i<j;});     //(80 71 53 45 33 32 26 12)
//	std::sort (myvector.begin(), myvector.end(), mySortobject);     //(12 26 32 33 45 53 71 80)

	// print out content:
	std::cout << "myvector contains (ASCENDING):";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	// DESCENDING Sort: using object as comp
	std::sort (myvector.begin(), myvector.end(), [] (int i, int j) -> bool {return i>j;});     //(80 71 53 45 33 32 26 12)
//	std::sort (myvector.begin(), myvector.end(), myDescendingSortobject);     //(80 71 53 45 33 32 26 12)

	// print out content:
	std::cout << "myvector contains (DESCENDING):";
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << " : " << myvector.size() << " values in total"<< std::endl;

	return;
}

void DemoLambda::capture() {
	cout << "UseLambda::capture()..." << endl;
	// enclosing scope defines candidates for lambda capture
	int age = 7;
	double pi = 3.14;
	auto f = [age, pi]()	// capture context for use by lambda
	{
		int zip=11234;
		cout << endl << "age=" << age
		<< " pi=" << pi << " zip=" << zip << endl;
	};
	f();	// call lambda
//	[age, pi]()	// capture context for use by lambda
//	{
//		int zip=11234;
//		cout << endl << "age=" << age
//		<< " pi=" << pi << " zip=" << zip << endl;
//	}();

}

void DemoLambda::forEachLambda() {
	cout << "\t UseLambda::forEachLambda()..." << endl;
	// enclosing scope defines candidates for lambda capture
	const int ASIZE3 = 3;
	int a[] = {1, 2, 3};
	vector <int> numbers(a, a+ASIZE3);

	for_each(numbers.begin(),numbers.end(), [](int i){cout << i <<",";});
	cout << endl;
	cout << "UseLambda::forEachLambda()...done!" << endl;
}

void DemoLambda::transformLambda() {
	cout << "\t UseLambda::transformLambda()..." << endl;
	// enclosing scope defines candidates for lambda capture
	const int ASIZE3 = 3;
	int a[] = {1, 2, 3};
	vector <int> numbers(a, a+ASIZE3);
	auto addL = [](int n){ return n+1; };
	auto outN = [](int n){ cout << n << ",";};

	transform(numbers.begin(),numbers.end(), numbers.begin(), addL);
	for_each(numbers.begin(),numbers.end(), outN);

	cout << endl;
	cout << "UseLambda::transformLambda()...done!" << endl;
}

void DemoLambda::tokenize() {
	cout << "\t UseLambda::transformLambda()...\n" << endl;
		const int ASIZE = 3;
		string a[] = {"dan,16,4.0", "joe,15,3.91", "Jill,14, 3.95"};
		vector<string> v(a, a+ASIZE);
		tokenizer<string>(v);
	cout << "UseLambda::transformLambda()...done!\n" << endl;
}

void DemoLambda::demo() {
	cout << "UseLambda::demo()..." << endl;
	DemoLambda obj;

//	obj.accumulate();
//	obj.accumulate2();
//	obj.countNumberLambda();
//	obj.capture();
	obj.forEachLambda();
	obj.transformLambda();
	obj.tokenize();

	return;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
