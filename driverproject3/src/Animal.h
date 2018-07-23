/*
 * Animal.h
 *
 *  Created on: Sep 26, 2017
 *      Author: Dell-pc
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <iostream>
#include<string>

namespace edu {
namespace neu {
namespace cyse6205 {

class Animal {
public:
	Animal();
	virtual ~Animal();
	 virtual void info();
};

} /* namespace cyse6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ANIMAL_H_ */
