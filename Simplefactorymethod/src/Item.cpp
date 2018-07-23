/*
 * Item.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#include "Item.h"
#include"Applestore.h"
#include"Iphone.h"
#include"Ipad.h"
#include"Macbook.h"
#include<iostream>
#include<vector>
#include"Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

Item::Item() {
	// TODO Auto-generated constructor stub

}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

void Item::inventory(){
              Iphone a1,a2,a3,a4,a5;
              Ipad b1,b2;
              Macbook c1,c2;
              std::vector<Applestore*>d;
              d.push_back(&a1);
              d.push_back(&a2);
              d.push_back(&a3);
              d.push_back(&a4);
              d.push_back(&a5);
              d.push_back(&b1);
              d.push_back(&b2);
              d.push_back(&c1);
              d.push_back(&c2);

              for(auto v:d){
            	  std::cout<<"The size of the container is "<<d.size()<<std::endl;
            	  }

}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
