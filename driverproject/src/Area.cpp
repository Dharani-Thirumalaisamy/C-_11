/*
 * Area.cpp
 *
 *  Created on: Oct 23, 2017
 *      Author: Dell-pc
 */

#include "Area.h"
#include<iostream>
#include<string>

namespace edu {
namespace neu {
namespace csye6205 {

Area::Area() {
	// TODO Auto-generated constructor stub

}

Area::~Area() {
	// TODO Auto-generated destructor stub
}


void Area::info(){
	std::cout<<"length =";
	std::cin>>length;
	std::cout<<"\n width =";
	std::cin>>width;
	std::cout<<"\n the area of the rectangle is ="<<length*width<<std::endl;
}


} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
