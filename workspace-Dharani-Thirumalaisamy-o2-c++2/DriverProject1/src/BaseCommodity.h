/*
 * BaseCommodity.h
 *
 *  Created on: Nov 13, 2017
 *      Author: danielgmp
 */

#ifndef BASECOMMODITY_H_
#define BASECOMMODITY_H_

#include <iostream>		// ostream
#include "AbstractComodity.h"

namespace edu {
namespace neu {
namespace csye6205 {

class BaseCommodity: public AbstractComodity {
private:
	int id;
	std::string name;
	double price;
public:
	BaseCommodity();
	BaseCommodity(int id, std::string name, double price);

	/*
	 * Copy constructor:
	 *
	 * Required for std::transform
	 */
	BaseCommodity(const BaseCommodity& rhs);
	virtual ~BaseCommodity();


	int getId() const;
	void setId(int id);
	const std::string& getName() const;
	void setName(const std::string& name);
	double getPrice() const;
	void setPrice(double price);

	void simpleSort();
	void simpleTransform();

	/*
	 * overloaded operators:
	 *
	 *  = Copy assignment operator for obj1 = obj2;
	 *  		NOTE: Copy assignment operator is Required for std::transform
	 *
	 *  < sort comparison operator for ascending price
	 *  > sort comparison operator for descending price
	 *  << customized output of object state.
	 *  >> customized input for object state.
	 *
	 */
	BaseCommodity& operator= (const BaseCommodity& rhs);
	bool operator<(const BaseCommodity &rhs) const; // ascending price
	bool operator>(const BaseCommodity &rhs) const; // descending price

	friend std::ostream &operator<<( std::ostream &output, const BaseCommodity &c );
    friend std::istream &operator>>( std::istream  &input, BaseCommodity &c );

//    /**
//     * Inline but NOT actually part of this class (hence the need for 'friend' designation).
//     */
//    friend std::ostream &operator<<( std::ostream &output, const BaseCommodity &c ) {
//       output
//			<< " " << c.getId()
//			<< "    $" << c.getPrice()
//			<< "\t " << c.getName();
//	   ;
//       return output;
//    }
//    /**
//     * Inline but NOT actually part of this class (hence the need for 'friend' designation).
//     */
//    friend std::istream &operator>>( std::istream  &input, BaseCommodity &c ) {
//       input >> c.id >> c.name >> c.price;
//       return input;
//    }

	static BaseCommodity increasePriceBy10(BaseCommodity c);

	static bool sortByPrice(BaseCommodity c1, BaseCommodity c2);
	static bool sortByName(BaseCommodity c1, BaseCommodity c2);

	virtual std::string info() const;
	virtual void show() const;
	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASECOMMODITY_H_ */
