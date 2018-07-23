/*
 * Sfm.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Sfm.h"
#include"Applestore.h"
#include"Item.h"
#include"Iphone.h"
#include"Ipad.h"
#include"Macbook.h"
#include<vector>

namespace edu {
namespace neu {
namespace csye6205 {

Sfm::Sfm() {
	// TODO Auto-generated constructor stub

}

Sfm::~Sfm() {
	// TODO Auto-generated destructor stub
}

void Sfm::freeobject(Applestore *s){
	delete s;
	s= nullptr;

}

Applestore *Sfm::getinstance(int criteria){
	Applestore *s = (Applestore*)s;
	switch(criteria){
	case(0) :{
			s=new Iphone();
            break;
	        }
	case(1):{
		  s=new Ipad();
		  break;
	}
	case(2):{
		s=new Macbook();
		break;
	}
	 return s;
	}
}

void Sfm::demo() {
	Sfm obj;

	Applestore *s0,*s1,*s2;
	s0 = obj.getinstance(0);
	s1 = obj.getinstance(1);
	s2 = obj.getinstance(2);

	std::vector<Applestore *>v = std::vector<Applestore *>();
	v.push_back(s0);
	v.push_back(s1);
	v.push_back(s2);
    for(auto *s:v){
    	s->info();
    }

	obj.freeobject(s0);
	obj.freeobject(s1);
	obj.freeobject(s2);

}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

