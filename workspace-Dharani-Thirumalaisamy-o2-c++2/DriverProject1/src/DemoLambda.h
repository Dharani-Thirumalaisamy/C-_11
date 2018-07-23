/*
 * UseLambda.h
 *
 *  Created on: Nov 30, 2016
 *      Author: danielgmp
 */

#ifndef DEMOLAMBDA_H_
#define DEMOLAMBDA_H_

namespace edu {
namespace neu {
namespace csye6205 {

class DemoLambda {
private:
	const int m_criterion;
	int m_count;
	void show();

public:
	DemoLambda();
	DemoLambda(int count);

	// immutable criterion
	const int getCriterion() const;

	// variable criterion
//	UseLambda(int criterion, int count);
//	int getCriterion() const;
//	void setCriterion(int criterion);

	virtual ~DemoLambda();

	int getCount() const;
	void setCount(int count);
	int accumulate();
	int accumulate2();
	void countNumber();
	void countNumberLambda();
	void sort();
	void capture();
	void forEachLambda();
	void transformLambda();
	void tokenize();
	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* DEMOLAMBDA_H_ */
