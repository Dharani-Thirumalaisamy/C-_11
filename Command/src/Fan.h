/*
 * Fan.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef FAN_H_
#define FAN_H_

namespace edu {
namespace neu {
namespace csye6205 {

class Fan {
public:
	Fan();
	virtual ~Fan();
	void on();
	void off();

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* FAN_H_ */
