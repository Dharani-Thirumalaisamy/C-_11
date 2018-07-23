//============================================================================
// Name        : APPLESTORE.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include "Storeitems.h"

using namespace std;
using namespace edu::neu::cyse6205 ;

int main() {
	cout << "Model of an Apple Store" << endl;
    Store_items product1();
    Store_items product2();
    Store_items product3();
    Store_items product4 ();

     printStore_items(product2);
     printStore_items(product3);
     printStore_items(product4);


	return 0;
}
