/*
 * Item.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Dell-pc
 */

#ifndef ITEM_H_
#define ITEM_H_
#include<string>

namespace edu {
namespace neu {
namespace csye6205 {

class Item {
public:

	Item();
	virtual ~Item();
	static void inventory();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ITEM_H_ */
