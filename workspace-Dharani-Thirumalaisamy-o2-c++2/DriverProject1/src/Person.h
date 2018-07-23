/*
 * Person.h
 *
 *  Created on: Sep 27, 2016
 *      Author: danielgmp
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>

#include "BasePerson.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class Person : public BasePerson {
public:
	int m_age = 0;
	double m_gpa = 0.0;
	string m_fname = "John";
	string m_lname = "Doe";
	int	m_maxBooks = 3;
	// most books the person can check out

	Person();
	Person(string fname, string lname, int age);
	Person(string fname, string lname, int age, double gpa);
	virtual ~Person();
	int getAge() const;
	void setAge(int age);
	double getGpa() const;
	void setGpa(double age);
	const string& getFname() const;
	void setFname(const string& fname = "John");
	const string& getLname() const;
	void setLname(const string& lname = "Doe");
	int getMaxBooks() const;
	void setMaxBooks(int maxBooks);

	const string info() const;
	void show() const;
	virtual const string speak() const;		// virtual allows overriding for dynamic polymorphism
//	virtual string speak() = 0;		// pure virtual allows overriding for dynamic polymorphism

	static void demo();

	Person& operator= (const Person& rhs);
	bool operator<(const Person &rhs) const;
    bool operator>(const Person &rhs) const;
	// overload output and input operators for this class
	friend ostream &operator<<(ostream&, const Person&);
	friend istream &operator>>(istream&, const Person&);

	static bool sortByFName(Person p1, Person p2);
	static bool sortByLName(Person p1, Person p2);
	static bool sortByaAge(Person p1, Person p2);
	static bool sortBydAge(Person p1, Person p2);
};

} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */

#endif /* PERSON_H_ */
