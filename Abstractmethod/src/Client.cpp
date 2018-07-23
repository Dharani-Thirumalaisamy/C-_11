/*
 * Client.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Client.h"
#include<iostream>
#include<string>
#include"Smart.h"
#include"Basic.h"
#include"Galaxy.h"
#include"Lumina.h"
#include"Asha.h"
#include"Fliptype.h"
#include"Factory.h"

namespace edu {
namespace neu {
namespace csye6205 {

Client::Client() {
	// TODO Auto-generated constructor stub

}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

void Client::demo(){
	Factory*factory=Factory::createFactory(Factory::Phone::Samsung);
	std::cout<<"Basic model from Samsung is "<<factory->getbasic()->name()<<std::endl;
	delete factory->getbasic();
	std::cout<<"The smart phone model is "<<factory->getsmart()->name()<<std::endl;
	delete factory->getsmart();

	factory =Factory::createFactory(Factory::Phone::Nokia);
	std::cout<<"Basic model from Nokia is "<<factory->getbasic()->name()<<std::endl;
	delete factory->getbasic();
	std::cout<<"The smart phone is "<<factory->getsmart()->name()<<std::endl;
	delete factory->getsmart();

	delete factory;


}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
