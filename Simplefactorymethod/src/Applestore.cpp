/*
 * Applestore.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Applestore.h"
#include<iostream>

namespace edu {
namespace neu {
namespace csye6205 {

Applestore::Applestore() {
	// TODO Auto-generated constructor stub

}

Applestore::Applestore(int price , std::string name):price(price),name(name){

}
Applestore::~Applestore() {
	// TODO Auto-generated destructor stub
}


void Applestore::info(){
	std::cout<<"The name of the product is "<<name<<" ,price ="<<price<<std::endl;
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
