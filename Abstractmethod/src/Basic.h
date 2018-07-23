/*
 * Basic.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef BASIC_H_
#define BASIC_H_
#include<string>

namespace edu {
namespace neu {
namespace csye6205 {

class Basic {
public:
	Basic();
	virtual ~Basic();
	virtual std::string name()=0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASIC_H_ */
