/*
 * Fan.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Fan.h"
#include<iostream>

namespace edu {
namespace neu {
namespace csye6205 {

Fan::Fan() {
	// TODO Auto-generated constructor stub

}

Fan::~Fan() {
	// TODO Auto-generated destructor stub
}
void Fan::on(){
	std::cout<<"The fan is on"<<std::endl;
}

void Fan::off(){
	std::cout<<"the fan is off"<<std::endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
