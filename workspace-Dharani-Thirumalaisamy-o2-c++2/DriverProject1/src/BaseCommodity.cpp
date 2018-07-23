/*
 * BaseCommodity.cpp
 *
 *  Created on: Nov 13, 2017
 *      Author: danielgmp
 */

#include <iostream>
#include <string>
#include <sstream>	// std::stringStream
#include <vector>
//#include <cctype>	// toupper
//#include <ctype.h>	// toupper
#include <algorithm>	 // std::sort, std::transform
#include "BaseCommodity.h"

//using namespace std;  // this hides ::toupper function from C with std::toupper from C++

namespace edu {
namespace neu {
namespace csye6205 {

/**
 * showVector:
 *
 * Output, preceded by supplied text banner,
 * all elements contained in vector to console
 * EITHER in compact (single line) format:
 *
 * supplied_text_banner
 *  	 e1,e2,e3,
 * OR line per element format:
 *
 * supplied_text_banner
 *   e1
 *   e2
 *   e3
 *
 *   Parameters:
 *   vector of elements
 *   string banner
 *   compact boolean (true for single line compact format)
 */
template <typename T>
void showVector(std::vector<T> v, std::string title, bool compact) {
	std::cout << title << std::endl;
	for (auto d: v) {
		(true == compact) ?
				std::cout << d << "," : std::cout << d << std::endl ;
	}
	std::cout << std::endl;
	std::cout << " Total Items: " << v.size() << std::endl;
}

/**
 * Overloaded Output (<<) operator for this class
 * NOTE: this function is deliberately not a member of this class.
 *
 * Parameters:
 * 	ostream output stream to use for output
 * 	BaseCommodity object instance whose state is to be output.
 *
 * Return:
 * 	ostream output stream used for output
 */
std::ostream &operator<<( std::ostream &output, const BaseCommodity &c ) {
   output
		<< " " << c.getId()
		<< "    $" << c.getPrice()
		<< "\t " << c.getName();
   ;
   return output;
}

/**
 * Overloaded Input (>>) operator for this class
 * NOTE: this function is deliberately not a member of this class.
 *
 * Parameters:
 * 	istream input stream to read for input
 * 	BaseCommodity object instance whose state is to receive input parameters.
 *
 * Return:
 * 	istream input stream used for input
 */
std::istream &operator>>( std::istream  &input, BaseCommodity &c ) {
   input >> c.id >> c.name >> c.price;
   return input;
}

BaseCommodity::BaseCommodity() : id(1), name("someItem"), price(0.01){
}

BaseCommodity::BaseCommodity(int _id, std::string _name, double _price) : id(_id), name(_name), price(_price){
}
/**
 * Copy Constructor:
 *	Performs member-by-member assignment
 *
 * Parameters:
 * 	const reference to another object, like itself.
 *
 * Return:
 *
 */
BaseCommodity::BaseCommodity(const BaseCommodity& rhs) {	// copy constructor
//	cout << "BaseCommodity Copy constructor." << endl;
	this->id = rhs.id;
	this->name = rhs.name;
	this->price = rhs.price;
}

BaseCommodity::~BaseCommodity() {
}
/**
 * Copy Assignment Operator:
 *
 * Insures other object is NOT itself.
 * Performs member-by-member assignment
 *
 * Parameters:
 * 	const reference to another object, like itself.
 *
 * Return:
 *	itself
 */
BaseCommodity& BaseCommodity::operator= (const BaseCommodity& rhs) {	// copy assignment operator
//	cout << "BaseCommodity Copy assignment operator." << endl;
	if (this != &rhs) {
		this->id = rhs.id;
		this->name = rhs.name;
		this->price = rhs.price;
	}
	return *this;
}

int BaseCommodity::getId() const {
	return id;
}

void BaseCommodity::setId(int id) {
	this->id = id;
}

const std::string& BaseCommodity::getName() const {
	return name;
}

void BaseCommodity::setName(const std::string& name) {
	this->name = name;
}

double BaseCommodity::getPrice() const {
	return price;
}

void BaseCommodity::setPrice(double price) {
	this->price = price;
}

std::string BaseCommodity::info() const {
	std::stringstream ss;

	ss
		<< " " << this->id
		<< "    $" << this->price
		<< "\t " << this->name;

	return ss.str();
}

void BaseCommodity::show() const {
	std::cout << this->info() << std::endl;
	return;
}
/**
 * overloaded boolean less than (<) operator:
 * Used for sort comparator for ascending price.
 *
 */
bool BaseCommodity::operator<(const BaseCommodity &rhs) const {
	return this->getPrice() < rhs.getPrice();
}

/**
 * overloaded boolean greater than (>) operator:
 * Used for sort comparator for descending price.
 *
 */
bool BaseCommodity::operator>(const BaseCommodity &rhs) const {
	return this->getPrice() > rhs.getPrice();
}

/**
 * simpleSort()
 *
 * demonstrate use of std::sort()
 */
void BaseCommodity::simpleSort() {
	std::vector<int> numbers;
	numbers.push_back(3);
	numbers.push_back(1);
	numbers.push_back(2);
	showVector(numbers, "BaseCommodity::simpleSort() numbers BEFORE sort:", true);
	sort(numbers.begin(), numbers.end(), [](int a, int b){ return a < b; } );
	showVector(numbers, "BaseCommodity::simpleSort() numbers AFTER sort:", true);
//	cout << "BaseCommodity::simpleSort() 3,1,2 => " << endl;
//	for (auto n :numbers) {
//		cout << n << ",";
//	}
//	cout << endl;

	int ASIZE = 3;
	std::string aStrings[] = {"dog", "cat", "rat"};
	std::vector<std::string> vStrings (aStrings, aStrings+ASIZE);
	showVector(vStrings, "BaseCommodity::simpleSort() strings BEFORE sort:", true);
	sort(vStrings.begin(), vStrings.end());
	showVector(vStrings, "BaseCommodity::simpleSort() strings AFTER sort:", true);
//	cout << "BaseCommodity::simpleSort() \"dog\", \"cat\", \"rat\"  => " << endl;
//	for (auto s :vStrings) {
//		cout << s << ",";
//	}
//	cout << endl;

	return;
}
/**
 * uppercaseString:
 * for_each function.
 */
void uppercaseString(std::string &s) {
	// use global toupper C function
	std::transform(s.begin(), s.end(), s.begin(), toupper);

//	for (int i=0; i < s.size(); i++) {
//		s[i] = toupper(s[i]);
//	}
}
/**
 * lowercaseString:
 * for_each function.
 */
void lowercaseString(std::string &s) {
	// use global tolower C function
	std::transform(s.begin(), s.end(), s.begin(), tolower);
}

/**
 * simpleTransform:
 * demonstrate use of std::transform()
 */
void BaseCommodity::simpleTransform() {
	std::vector<int> v;
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);

	std::string banner1 = "BaseCommodity::simpleTransform() values BEFORE transform";
	showVector(v, banner1, true);
//	cout << banner1 << endl;
//	for (auto n : v) {
//		cout << n << ",";
//	}
//	cout << endl;

	std::transform(v.begin(), v.end(), v.begin(), [](int a){ return a *100; } );
	std::string banner2 = "BaseCommodity::simpleTransform() values multiplied by 100 AFTER transform ";
	showVector(v, banner2, true);

	std::transform(v.begin(), v.end(), v.begin(), [](int a){ return a/10; } );
	std::string banner3 = "BaseCommodity::simpleTransform() values divided by 10 AFTER transform ";
	showVector(v, banner3, true);


	int ASIZE = 3;
	std::string aStrings[] = {"dog", "cat", "rat"};
	std::vector<std::string> vStrings (aStrings, aStrings+ASIZE);
	showVector(vStrings, "BaseCommodity::simpleTransform() strings BEFORE transform:", true);

	std::for_each(vStrings.begin(),vStrings.end(), uppercaseString);
	showVector(vStrings, "BaseCommodity::simpleTransform() strings AFTER UPPERCASE transform:", true);

	std::for_each(vStrings.begin(),vStrings.end(), lowercaseString);
	showVector(vStrings, "BaseCommodity::simpleTransform() strings AFTER LOWERCASE transform:", true);

}

bool BaseCommodity::sortByPrice(BaseCommodity c1, BaseCommodity c2) {
	return (c1.getPrice() < c2.getPrice());
}

bool BaseCommodity::sortByName(BaseCommodity c1, BaseCommodity c2) {
	return (c1.getName() < c2.getName());
}

BaseCommodity BaseCommodity::increasePriceBy10(BaseCommodity c) {
	c.setPrice(c.getPrice() + 10);
	return c;
}

void BaseCommodity::demo() {
	std::cout << "\t BaseCommodity::demo() starting...\n" << std::endl;
	BaseCommodity obj;	// default commodity object

	obj.simpleSort();
	obj.simpleTransform();

	// an iPhone commodity object
	BaseCommodity iphone(2, "iPhone X", 999.99);

	// an iPhone commodity object
	BaseCommodity macBook(3, "macBook Air", 1599.99);

	std::vector<BaseCommodity> v;
	v.push_back(obj);
	v.push_back(iphone);
	v.push_back(macBook);

	std::string banner = "\n ID   COST \t ITEM";

	std::sort(v.begin(), v.end(), [](BaseCommodity c1, BaseCommodity c2){ return c1.getId() <  c2.getId(); });
	showVector<class BaseCommodity>(v, banner +" (sorted by ID)", false);

	std::transform(v.begin(), v.end(), v.begin(), BaseCommodity::increasePriceBy10);
	std::sort(v.begin(), v.end(), BaseCommodity::sortByName);
	showVector<class BaseCommodity>(v, banner +" (sorted by name)", false);

	std::transform(v.begin(), v.end(), v.begin(), [](BaseCommodity c){ c.setPrice(c.getPrice() + 10); return c; });
	std::sort(v.begin(), v.end(), BaseCommodity::sortByPrice);
	showVector<class BaseCommodity>(v, banner +" (sorted by increasing price)", false);
	std::sort(v.begin(), v.end(), [](BaseCommodity c1, BaseCommodity c2){ return c1 < c2; });
	showVector<class BaseCommodity>(v, banner +" (sorted by ascending value)", false);
	std::sort(v.begin(), v.end(), [](BaseCommodity c1, BaseCommodity c2){ return c1 > c2; });
	showVector<class BaseCommodity>(v, banner +" (sorted by descending value)", false);

//	cout << banner << endl;
//	for (BaseCommodity c : v) {
//		cout << c.info() << endl;
//	}
//	cout << " Total Items: " << v.size() << endl;


	std::cout << "BaseCommodity::demo() done!\n" << std::endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
