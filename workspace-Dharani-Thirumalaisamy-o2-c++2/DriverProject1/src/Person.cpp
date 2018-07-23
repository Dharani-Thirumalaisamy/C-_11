/*
 * Person.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: danielgmp
 */

#include <iostream>
#include <vector>
#include "Person.h"
#include<algorithm>

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {


std::istream &operator>>( std::istream  &input, Person &p ) {
   input >> p.id >> p.firstName >> p.lastName>>p.age;
   return input;
}


Person::Person() {
	// TODO Auto-generated constructor stub

}

Person::Person(string fname, string lname, int age) {
	// TODO Auto-generated destructor stub
	m_fname = fname;
	m_lname = lname;
	m_age = age;
}

Person::Person(string fname, string lname, int age, double gpa) {
	// TODO Auto-generated destructor stub
	m_fname = fname;
	m_lname = lname;
	m_age = age;
	m_gpa = gpa;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

Person& Person::operator= (const Person& rhs) {
	if (this != &rhs) {
		this->id = rhs.id;
		this->m_fname = rhs.m_fname ;
		this->m_lname = rhs.m_lname ;
		this->m_age = rhs.m_age;
	}
	return *this;
}
int Person::getAge() const {
	return m_age;
}

void Person::setAge(int age) {
	m_age = age;
}

double Person::getGpa() const {
	return m_gpa;
}

void Person::setGpa(double gpa) {
	m_gpa = gpa;
}

const string& Person::getFname() const {
	return m_fname;
}

void Person::setFname(const string& fname) {
	m_fname = fname;
}

const string& Person::getLname() const {
	return m_lname;
}

void Person::setLname(const string& lname) {
	m_lname = lname;
}

int Person::getMaxBooks() const {
	return m_maxBooks;
}

void Person::setMaxBooks(int maxBooks) {
	m_maxBooks = maxBooks;
}

const string Person::info() const {
	return "Person: " + this->getLname()
			+ ", " + this->getFname()
			+ " Age: " + std::to_string(this->getAge())
			+ ", Max Books Allowed: " + std::to_string(this->getMaxBooks());
}

void Person::show() const {
	std::cout << this->info() << std::endl;
	return;
}

const string Person::speak() const {
	return this->info();
}

ostream &operator<<(ostream & output, const Person& p) {

	string str = "Person: " + p.getLname()
			+ ", " + p.getFname()
			+ " Age: " + std::to_string(p.getAge())
			+ ", Max Books Allowed: " + std::to_string(p.getMaxBooks());

	output << str;
	return output;
}
bool Person::operator<(const Person &rhs) const {
	return this->getAge()<rhs.getAge() ;
}

bool Person::operator>(const Person &rhs) const {
	return this->getAge() > rhs.getAge();
}

bool Person::sortByFName(Person p1, Person p2) {
	return (p1.getFname()< p2.getFname());
}
template <typename T>
   static bool sortObjByLastNameT(T& o1, T& o2) {
       return
o1.getLastName()< o2.getLastName();
   }
template <typename T>
   static bool sortPtrByLastNameT(T p1, T p2) {
           return p1.getLastName()
<
p2.getLastName()
;
   }
bool Person::sortByLName(Person p1, Person p2) {
	return (p1.getLname() < p2.getLname());
}

bool Person::sortByaAge(Person p1, Person p2){
	return (p1.getAge() < p2.getAge());
}

bool Person::sortBydAge(Person p1, Person p2){
	return (p1.getAge() > p2.getAge());
}
void Person::demo() {
	cout << "\t Person.demo() starting...\n" << endl;
	{
		Person obj;
		cout << obj.info() << endl;
	}
	{
		Person obj("Jane", "Smith", 29, 3.0);
		cout << obj.info() << endl;
	}
	{
		Person *ptr = new Person;
		cout << (*ptr).info() << endl;	// retrieve object using indirection FIRST, THEN use dot on object
//		cout << ptr->info() << endl;	// use address pointing to object; must use pointer syntax
		delete ptr;
		ptr = nullptr;
	}
	{
		Person *ptr = new Person();
		cout << ptr->info() << endl;
		delete ptr;
		ptr = nullptr;
	}
	{
		Person *ptr = new Person("Dan", "Peters", 19, 4.0);
		cout << ptr->info() << endl;
		delete ptr;
		ptr = nullptr;
	}

	{
		cout << "NOT Using Polymorphism with vector<AbstractPerson> ..." << endl;

		// instantiated automatic vector object on stack using default constructor
		vector<BasePerson> v;
		// add elements to vector
		Person p1("jon", "doe", 1);
		Person p2("jan", "smith", 2);
		Person p3("jim", "jones", 3);
		v.push_back(p1);
		v.push_back(p2);
		v.push_back(p3);
		// show contents of vector
		std::cout << v.size() << " Persons in vector<Person>." << endl;
		for (BasePerson p : v) {
			p.show();	// AbstractPerson base class implementation only
		}
		cout << endl;

	}
	{
		cout << "Using Polymorphism with vector<AbstractPerson *> ..." << endl;

		// instantiated automatic vector object on stack using default constructor
		vector<Person> v;
		// add elements to vector
		Person p1("jon", "doe", 1);
		Person p2("jan", "smith", 2);
		Person p3("jim", "jones", 3);
		v.push_back(p1);
		v.push_back(p2);
		v.push_back(p3);



		std::string banner = "\n First name      Last Name \t Age";

		std::sort(v.begin(), v.end(), [](Person p1, Person p2){ return p1.getId() <  p2.getId(); });
	//	showVector<class Person>(v, banner +" (sorted by ID)", false);
		for(auto i:v)
		{
		  std::cout<<"The sorted by ID list is : " << i <<std::endl;
		}


		std::sort(v.begin(), v.end(), Person::sortByFName);
	//	showVector<class Person>(v, banner +" (sorted by First name)", false);
		for(auto f:v)
		{
			std::cout<<"The sorted by First name list is : " << f <<std::endl;
				}

		std::sort(v.begin(), v.end(), Person::sortByLName);
	//	showVector<class Person>(v, banner +" (sorted by Last name)", false);
		for(auto l:v)
		{
			std::cout<<"The sorted by Last name is : " << l <<std::endl;
				}

		std::sort(v.begin(), v.end(), Person::sortByaAge);
//		showVector<class Person>(v, banner +" (sorted by increasing Age)", false);
		std::sort(v.begin(), v.end(), [](Person p1, Person p2){ return p1 < p2; });
//		showVector<class Person>(v, banner +" (sorted by ascending value)", false);
		for(auto a:v)
		{
			std::cout<<"The sorted by ascending age is : " << a <<std::endl;
				}
		std::sort(v.begin(), v.end(), Person::sortBydAge);
		std::sort(v.begin(), v.end(), [](Person p1, Person p2){ return p1 > p2; });
//		showVector<class Person>(Person, banner +" (sorted by descending value)", false);

		for(auto d:v)
		{
			std::cout<<"The sorted by descending age is : " << d <<std::endl;
			}

		// show contents of vector
	//	std::cout << v.size() << " Persons in vector<Person>." << endl;
	//	for (BasePerson *p : v) {
	//		p->show();	// Polymorphism: Person derived class implementation
	//	}
	//	cout << endl;

	}
	cout << "Person.demo() done!\n" << endl;
}
} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */
