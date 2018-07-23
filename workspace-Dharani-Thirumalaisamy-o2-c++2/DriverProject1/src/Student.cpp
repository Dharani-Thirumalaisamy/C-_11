/*
 * Student.cpp
 *
 *  Created on: Sep 28, 2016
 *      Author: danielgmp
 */

#include "Student.h"
#include"Person.h"

#include <iostream>
#include <string>
#include <sstream>	// stringstream
#include<algorithm>
#include<fstream>

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {


bool mySortFunction(int a, int b) {
	return a < b;
}

void sortInts() {
	int myints[] = {32,71,12,45,26,80,53,33};
	std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

	std::sort (myvector.begin(), myvector.begin()+4, mySortFunction);
	for (int n : myvector)
		cout << n << ", ";
	cout << endl;
}

bool Student::sortStudentsByAge(Student *s1, Student *s2) {
	return s1->getAge() > s2->getAge();
}

bool sortStudentsByGPA(Student *s1, Student *s2) {
	return s1->getGpa() > s2->getGpa();
}

Student Student::offsetStudentsGPA(const Student& s) {
	// returned transformed Student (Copy constructor used here as Student passed by value on return)
	return Student(s.getFname(), s.getLname(), s.getAge(), (s.getGpa() - 1));
}

double offsetDouble(const double& d) {
	// returned transformed Student (Copy constructor used here as Student passed by value on return)
	return (d+10);
}


Student::Student() : Person("jane", "doe", 19), m_gpa(4.0)  {
}

Student::Student(string fname, string lname, int age, double gpa) : Person(fname, lname, age), m_gpa(gpa) {
}

Student::Student(const Student& _s) : Person(_s.getFname(), _s.getLname(), _s.getAge()), m_gpa(_s.getGpa())  {
}

Student::~Student() {
}

std::istream &operator>>( std::istream  &input, Student &s ) {
   input >> s.m_fname>>s.m_lname>>s.m_age>>s.m_gpa>>s.m_xoffset>>s.m_xscale;
   return input;
}

std::ostream &operator<<(ostream & output, const Student& s) {

	string str = "Student: " + s.getFname()
			+ ", " + s.getLname()
			+ " GPA " + std::to_string(s.m_gpa)
			+ ", " + std::to_string(s.m_xoffset)
	        +" "+std::to_string(s.m_xscale);

	output << str;
	return output;
}

Student& Student::operator= (const Student& rhs) {
	if (this != &rhs) {
		this->m_fname = rhs.m_fname ;
		this->m_lname = rhs.m_lname ;
		this->m_gpa = rhs.m_gpa;
		this->m_xoffset =rhs.m_xoffset;
		this->m_xscale = rhs.m_xscale;
	}
	return *this;
}

double Student::getGpa() const {
	return m_gpa;
}

void Student::setGpa(double gpa) {
	m_gpa = gpa;
}

const string Student::speak() const {
	return this->info();
}

double Student::getXoffset() const {
	return m_xoffset;
}

void Student::setXoffset(double xoffset) {
	m_xoffset = xoffset;
}

double Student::getXscale() const {
	return m_xscale;
}

void Student::setXscale(double xscale) {
	m_xscale = xscale;
}

void Student::sort(vector<Student*> students) {
	// input container range, unaryOp (static class member)
	std::sort(students.begin(), students.end(), Student::sortStudentsByAge);
	this->showStudents("Sort by AGE ", students);

	// input container range, unaryOp (function)
	std::sort(students.begin(), students.end(), sortStudentsByGPA);
	this->showStudents("Sort by GPA ", students);
	/*
	 * OUTPUT
	 *
Sort by AGE  3 Students in list.
Person: Jones, Zach Age: 27, Max Books Allowed: 3; a student with a GPA of: 3.55

Person: doe, jane Age: 19, Max Books Allowed: 3; a student with a GPA of: 4

Person: Peters, Dan Age: 17, Max Books Allowed: 3; a student with a GPA of: 3.95


Sort by GPA  3 Students in list.
Person: doe, jane Age: 19, Max Books Allowed: 3; a student with a GPA of: 4

Person: Peters, Dan Age: 17, Max Books Allowed: 3; a student with a GPA of: 3.95

Person: Jones, Zach Age: 27, Max Books Allowed: 3; a student with a GPA of: 3.55

	 *
	 */
}

void Student::transform(vector<Student> students) {
	std::transform(students.begin(), students.end(), students.begin(), Student::offsetStudentsGPA);
	this->showStudents("Transform by GPA ", students);

	std::cout << std::endl;
}

void Student::transform() {
	std::vector<double> doubles;
	doubles.push_back(1.05);
	doubles.push_back(2.05);
	doubles.push_back(3.05);
	std::transform(doubles.begin(), doubles.end(), doubles.begin(), offsetDouble);
	for (double d : doubles) {
		std::cout << d << ", ";
	}
	std::cout << std::endl;
	/*
	 * OUTPUT
	 * 11.05, 12.05, 13.05,
	 *
	 */
}

const string Student::info() const {
//	cout << "Age: " << m_age << endl; // can not access private base class member
	std::stringstream ss;
	ss << Person::info() << "; a student with a GPA of: " << this->getGpa() << std::endl;
	return ss.str();
}

void Student::showStudents(std::string title, std::vector<Student*> students) {
	std::cout << title << " " << students.size() << " Students in list." << endl;
	for (Student *p : students) {
		std::cout << p->info() << std::endl;
	}
	std::cout << std::endl;
}

void Student::showStudents(std::string title, std::vector<Student> students) {
	std::cout << title << " " << students.size() << " Students in list." << endl;
	for (Student s : students) {
		std::cout << s.info() << std::endl;
	}
	std::cout << std::endl;
}

bool Student::operator<(const Student &rhs) const {
	return this->getGpa()<rhs.getGpa() ;
}

bool Student::operator>(const Student &rhs) const {
	return this->getGpa() > rhs.getGpa();
}

bool Student::sortbyGpa(Student s1,Student s2){
	return (s1.getGpa()<s2.getGpa());
}

void Student::demo() {
	std::cout << "\n\n\t Student::demo()" << std::endl;
	Student s1;	// instantiate object
	std::cout << s1.info() << std::endl;

	Student s2("Dan", "Peters", 17, 3.95);
	Student s3("Zach", "Jones", 27, 3.55);
	std::vector<Student> students;
	students.push_back(s1);
	students.push_back(s2);
	students.push_back(s3);
	//s1.sort(students);

	std::string banner = " has GPA";


	std::sort(students.begin(), students.end(), Student::sortbyGpa);
//	showVector<class Student>(students, banner +" (sorted by increasing GPA)", false);
	std::sort(students.begin(), students.end(), [](Student s1, Student s2){ return s1 < s2; });
//	showVector<class Student>(students, banner +" (sorted by ascending value)", false);
	for(auto a:students)
	{
	  std::cout<<"The sorted by ascending GPA is : " << a <<std::endl;
	}
	std::sort(students.begin(), students.end(), [](Student s1, Student s2){ return s1 > s2; });
//	showVector<class Student>(students, banner +" (sorted by descending value)", false);
	for(auto d:students)
	{
		std::cout<<"The sorted by descending GPA is : " << d <<std::endl;
	}

	vector<Student> students2;
	students2.push_back(s1);
	students2.push_back(s2);
	students2.push_back(s3);
	s1.transform(students2);

//	s1.transform();

	sortInts();
	std::cout << " Student::demo() done!" << std::endl;

}

} /* namespace CSYE6205 */
} /* namespace NEU */
} /* namespace EDU */
