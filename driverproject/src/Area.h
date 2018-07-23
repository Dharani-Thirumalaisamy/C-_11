/*
 * Area.h
 *
 *  Created on: Oct 23, 2017
 *      Author: Dell-pc
 */

#ifndef AREA_H_
#define AREA_H_

namespace edu {
namespace neu {
namespace csye6205 {

class Area {
private:
	float length;
	float width;
public:
	Area();
	virtual ~Area();
	void info();

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* AREA_H_ */
