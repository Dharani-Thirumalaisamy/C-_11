;/*
 * Factory.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef FACTORY_H_
#define FACTORY_H_
#include<iostream>
#include<string>
#include"Smart.h"
#include"Basic.h"
#include"Galaxy.h"
#include"Lumina.h"
#include"Asha.h"
#include"Fliptype.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Factory {

public:
	enum Phone{
			Samsung,
			Nokia,
		};
	Factory();
	virtual ~Factory();
	virtual Smart* getsmart()=0;
	virtual Basic* getbasic()=0;
	static Factory* createFactory(Phone factory);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* FACTORY_H_ */
