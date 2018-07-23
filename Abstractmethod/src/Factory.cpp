/*
 * Factory.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Factory.h"
#include<iostream>
#include<string>
#include"Smart.h"
#include"Basic.h"
#include"Galaxy.h"
#include"Lumina.h"
#include"Asha.h"
#include"Fliptype.h"
#include"Samsungfactory.h"
#include"Nokiafactory.h"

namespace edu {
namespace neu {
namespace csye6205 {

Factory::Factory() {
	// TODO Auto-generated constructor stub

}

Factory::~Factory() {
	// TODO Auto-generated destructor stub
}

Factory* Factory::createFactory(Phone factory){
	if(factory==Phone::Samsung){
		return new Samsungfactory();
	}
	if(factory ==Phone::Nokia){
		return new Nokiafactory();
	}

}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
