/*
 * Storeitems.h
 *
 *  Created on: Sep 26, 2017
 *      Author: Dell-pc
 */

#ifndef STOREITEMS_H_
#define STOREITEMS_H_
#include<iostream>
#include<String>
using namespace std;

namespace edu {
namespace neu {
namespace cyse6205 {

class Store_items {
private :
	string product;
    int stockleft = 0;
    double price = 0.0;

public:
	Store_items(string);
	Store_items(string,int);
	Store_items(string, int, double);
    virtual ~Store_items();
	virtual void printStore_items() const ;

} ;



} /* namespace cyse6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STOREITEMS_H_ */
