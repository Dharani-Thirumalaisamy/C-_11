//============================================================================
// Name        : driverproject3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;
using namespace edu::neu::cyse6205;

int main() {
	cout << "driverproject3..." << endl;
	Animal *ptr;
    Animal a1;
    Dog a2;
    a1.info();
    ptr = &a1;
    ptr->info();
    a2.info();
    ptr = &a2;
    ptr->info();
	return 0;
}
