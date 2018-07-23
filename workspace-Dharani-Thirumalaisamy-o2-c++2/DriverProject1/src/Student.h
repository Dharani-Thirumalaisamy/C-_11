/*
 * Student.h
 *
 *  Created on: Sep 28, 2016
 *      Author: danielgmp
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class Student : public Person {
public:
	double m_gpa;
	double m_xoffset = 0;
	double m_xscale = 1;

	Student();
	Student(string fname, string lname, int age, double gpa);
	Student(const Student& obj);		// copy constructor
	virtual ~Student();

	double getXoffset() const;
	void setXoffset(double xoffset);
	double getXscale() const;
	void setXscale(double xscale);
	double getGpa() const;
	void setGpa(double gpa);

	static bool sortStudentsByAge(Student *s1, Student *s2);
	static Student offsetStudentsGPA(const Student& s);

	const string info() const;
	void showStudents(std::string title, std::vector<Student *> students);
	void showStudents(std::string title, std::vector<Student > students);
	virtual const string speak() const;		// virtual allows overriding for dynamic polymorphism
	void sort(std::vector<Student *> v);
	void transform(std::vector<Student > v);
	void transform();
	Student& operator= (const Student& rhs);
	bool operator<(const Student &rhs) const;
	bool operator>(const Student &rhs) const;
	friend ostream &operator<<(ostream& output, const Student& s);
	friend istream &operator>>(istream& input, const Student& s);

	bool static sortbyGpa(Student s1 , Student s2);

	static void demo();

//	friend Student offsetStudentsGPA(const Student&);
};

} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */

#endif /* STUDENT_H_ */
