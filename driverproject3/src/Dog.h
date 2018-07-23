/*
 * Dog.h
 *
 *  Created on: Sep 26, 2017
 *      Author: Dell-pc
 */

#ifndef DOG_H_
#define DOG_H_
#include<iostream>
#include<string>

#include "Animal.h"

namespace edu {
namespace neu {
namespace cyse6205 {

class Dog: public Animal {
public:
	Dog();
	virtual ~Dog();
	 void info();
};

} /* namespace cyse6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* DOG_H_ */
