/*
 * Storeitems.cpp
 *
 *  Created on: Sep 26, 2017
 *      Author: Dell-pc
 */

#include "Storeitems.h"
#include <iostream>
#include<string>

namespace edu {
namespace neu {
namespace cyse6205 {

Store_items::Store_items(string p) {
	product = p;
	stockleft = -1;
	price = 0.0;
}

Store_items::Store_items(string p,int stklft){
	product = p;
	stockleft = stklft;
	price =0.0;
}

Store_items::Store_items(string p,int stklft,double cost ){
	product = p;
	stockleft = stklft;
	price = cost;
}


Store_items::~Store_items() {
}

void Store_items::printStore_items() const {
	     std::cout <<"The product name is : "<<this->product;
	           cout<<"Number of items left in the stock = "<<this->stockleft;
	           cout<<"The price of each item is = "<<this->price;
	           cout<<endl;
}


} /* namespace cyse6205 */
} /* namespace neu */
} /* namespace edu */
