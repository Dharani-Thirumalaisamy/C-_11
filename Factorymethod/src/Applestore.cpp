/*
 * Applestore.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: Dell-pc
 */

#include "Applestore.h"
#include<iostream>

namespace edu {
namespace neu {
namespace csye6205 {

Applestore::Applestore(int mprice,std::string mname):price(mprice),name(mname) {
	// TODO Auto-generated constructor stub

}

Applestore::~Applestore() {
	// TODO Auto-generated destructor stub
}

void Applestore::info(){
	std::cout<<"The name of the product is "<<name<<" and the price is "<<price<<std::endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
