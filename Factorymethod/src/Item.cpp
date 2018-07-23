/*
 * Item.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: Dell-pc
 */

#include "Item.h"
#include"Iphone.h"
#include"Ipad.h"
#include"Macbook.h"
#include"Applestore.h"
#include<string>
#include<iostream>
#include<vector>

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
        v->info();
 }


}
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
