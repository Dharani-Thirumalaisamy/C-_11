/*
 * Mapping.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Mapping.h"
#include "Applestore.h"
#include "Sfm.h"
#include"Item.h"
#include<string>
#include<vector>

namespace edu {
namespace neu {
namespace csye6205 {

Mapping::Mapping() {
	// TODO Auto-generated constructor stub

}

Mapping::~Mapping() {
	// TODO Auto-generated destructor stub
}

void Mapping::inventory(){
	Sfm factory;
	Applestore* item1 = factory.getinstance(0);
	Applestore* item2 = factory.getinstance(0);
	Applestore* item3 = factory.getinstance(0);
	Applestore* item4 = factory.getinstance(0);
	Applestore* item5 = factory.getinstance(0);
	Applestore* item6 = factory.getinstance(1);
	Applestore* item7 = factory.getinstance(1);
	Applestore* item8 = factory.getinstance(2);
	Applestore* item9 = factory.getinstance(2);

    std::vector<Applestore*>shelf;
    shelf.push_back(item1);
    shelf.push_back(item2);
    shelf.push_back(item3);
    shelf.push_back(item4);
    shelf.push_back(item5);
    shelf.push_back(item6);
    shelf.push_back(item7);
    shelf.push_back(item8);
    shelf.push_back(item9);
}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
