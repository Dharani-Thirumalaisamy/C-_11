/*
 * Sfm.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef SFM_H_
#define SFM_H_
#include"Applestore.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Sfm {
public:
	Sfm();
	virtual ~Sfm();
    Applestore *getinstance(int criteria);
	virtual void freeobject(Applestore *s);
	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* SFM_H_ */
