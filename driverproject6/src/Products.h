/*
 * Products.h
 *
 *  Created on: Oct 24, 2017
 *      Author: Dell-pc
 */

#ifndef PRODUCTS_H_
#define PRODUCTS_H_
#include<vector>

namespace edu {
namespace neu {
namespace csye6205 {

class Products {
public:
	Products();
	virtual ~Products();
	virtual void inventory();
	virtual void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* PRODUCTS_H_ */
