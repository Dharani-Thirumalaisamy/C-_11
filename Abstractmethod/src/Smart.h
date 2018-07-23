/*
 * Smart.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef SMART_H_
#define SMART_H_
#include<string>
namespace edu {
namespace neu {
namespace csye6205 {

class Smart {
public:

	Smart();
	virtual ~Smart();
	virtual std::string name() =0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* SMART_H_ */
