/*
 * Products.cpp
 *
 *  Created on: Oct 24, 2017
 *      Author: Dell-pc
 */

#include "Products.h"
#include"Iphone.h"
#include"Ipad.h"
#include"Macbook.h"
#include"Store.h"
#include<iostream>
#include<vector>
#include<iomanip>

namespace edu {
namespace neu {
namespace csye6205 {

Products::Products() {
	// TODO Auto-generated constructor stub

}

Products::~Products() {
	// TODO Auto-generated destructor stub
}

void Products::inventory(){
	Iphone a1();
	Iphone a2();
	Iphone a3();
	Iphone a4();
	Iphone a5();
	Ipad a6();
	Ipad a7();
	Macbook a8();
	Macbook a9();
}

void Products::demo(){

	vector<Iphone>b;
	b.push_back(800);
	b.push_back(800);
	b.push_back(800);
	b.push_back(800);
	b.push_back(800);
	/*b.push_back(1500);
	b.push_back(1500);
	b.push_back(2500);
	b.push_back(2500);
*/
	std::sort(inventory.begin(),inventory.end());
	 std::cout<<"";

}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
