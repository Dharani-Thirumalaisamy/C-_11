/*
 * Light.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Light.h"
#include<iostream>

namespace edu {
namespace neu {
namespace csye6205 {

Light::Light() {
	// TODO Auto-generated constructor stub

}

Light::~Light() {
	// TODO Auto-generated destructor stub
}
void Light::on(){
	std::cout<<"The light is on"<<std::endl;
}
void Light::off(){
	std::cout<<"the light is off"<<std::endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
