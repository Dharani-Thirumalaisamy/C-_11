/*
 * Light.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef LIGHT_H_
#define LIGHT_H_

namespace edu {
namespace neu {
namespace csye6205 {

class Light {
public:
	Light();
	virtual ~Light();
	void on();
	void off();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* LIGHT_H_ */
