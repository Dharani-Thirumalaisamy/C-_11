/*
 * AbstractPerson.h
 *
 *  Created on: Oct 17, 2017
 *      Author: danielgmp
 */

#ifndef BASEPERSON_H_
#define BASEPERSON_H_

#include <string>
#include "AbstractPersonAPI.h"

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class BasePerson: public AbstractPersonAPI {
public:
	int id;
	string firstName;
	string lastName;
	int age;

	BasePerson();
	BasePerson(int id, string first, string last, int age);
	virtual ~BasePerson();

	int getId() const;
	void setId(int id);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	int getAge() const;
	void setAge(int age);

	virtual const string speak() const;	// pure virtual method: overridable, must be implemented
	virtual const string info() const;	// pure virtual method: overridable, must be implemented
	virtual void show() const;		// pure virtual method: overridable, must be implemented
	static void demo();

	BasePerson& operator= (const BasePerson& rhs);
	bool operator<(const BasePerson &rhs) const;
	bool operator>(const BasePerson &rhs) const;

	friend std::ostream &operator<<( std::ostream &output, const BasePerson &c );
	friend std::istream &operator>>( std::istream  &input, BasePerson &c );
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASEPERSON_H_ */
