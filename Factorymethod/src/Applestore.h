/*
 * Applestore.h
 *
 *  Created on: Oct 30, 2017
 *      Author: Dell-pc
 */

#ifndef APPLESTORE_H_
#define APPLESTORE_H_
#include<string>

namespace edu {
namespace neu {
namespace csye6205 {

class Applestore {
public:
	int price;
	std::string name;
	Applestore();
	Applestore(int price,std::string name);
	virtual ~Applestore();
	virtual void info();

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* APPLESTORE_H_ */
