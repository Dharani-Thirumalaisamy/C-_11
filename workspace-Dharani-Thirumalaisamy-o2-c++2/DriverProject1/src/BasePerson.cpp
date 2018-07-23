/*
 * AbstractPerson.cpp
 *
 *  Created on: Oct 17, 2017
 *      Author: danielgmp
 */

#include "BasePerson.h"

#include <iostream>
#include <vector>
#include <sstream> // std:stringstream
#include<fstream>

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

std::ostream &operator<<( std::ostream &output, const BasePerson &c ) {
   output
		<< " " << c.getId()
		<< "    " << c.getFirstName()
		<< " " << c.getLastName()
		<<" of age " << c.getAge();
   ;
   return output;
}

std::istream &operator>>( std::istream  &input, BasePerson &c ) {
   input >> c.id >> c.firstName >> c.lastName >>c.age;
   return input;
}

BasePerson::BasePerson() : id(1), firstName("john"), lastName("doe"), age(3) {
}

BasePerson::BasePerson(int _id, string _first, string _last, int _age) : id(_id), firstName(_first), lastName(_last), age(_age) {
}

BasePerson::~BasePerson() {
}

BasePerson& BasePerson::operator= (const BasePerson& rhs) {
	if (this != &rhs) {
		this->id = rhs.id;
		this->firstName = rhs.firstName ;
		this->lastName = rhs.lastName ;
		this->age = rhs.age;
	}
	return *this;
}

int BasePerson::getId() const {
	return id;
}

void BasePerson::setId(int id) {
	this->id = id;
}

const string& BasePerson::getFirstName() const {
	return firstName;
}

void BasePerson::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

int BasePerson::getAge() const {
	return age;
}

void BasePerson::setAge(int age) {
	this->age = age;
}

const string& BasePerson::getLastName() const {
	return lastName;
}

void BasePerson::setLastName(const string& lastName) {
	this->lastName = lastName;
}

const string BasePerson::info() const {
	stringstream ss;
	ss
		<< "AbstractPerson:"
		<< " " << this->getFirstName()
		<< " " << this->getLastName()
		<< ", " << " Age: " + std::to_string(this->getAge());
	return ss.str();
}

const string BasePerson::speak() const {
	return this->info();
}

void BasePerson::show() const {
	std::cout << this->info() << std::endl;
	return;
}

bool BasePerson::operator<(const BasePerson &rhs) const {
	return this->getAge()<rhs.getAge() ;
}

bool BasePerson::operator>(const BasePerson &rhs) const {
	return this->getAge() > rhs.getAge();
}

void BasePerson::demo() {
	cout << "\t BasePerson::demo starting... \n" << endl;

	vector<BasePerson> v;
	BasePerson obj;
	BasePerson jfk(1, "John", "Kennedy", 43);
	v.push_back(obj);
	v.push_back(jfk);

	cout << "\n ID   COST \t ITEM" << endl;
	for (BasePerson p
			: v) {
		p.show();
	}
	cout << " Total Persons: " << v.size() << endl;
	cout << "BasePerson::demo done! \n" << endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
