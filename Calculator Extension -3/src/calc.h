
#ifndef CALC_H_
#define CALC_H_


template <class T>
class Calc {
public:
	int number_of_inputs;
	Calc(int val);
	void calculate();
	//overload calculate to perform operation on string
	void calculate(string str);
	void print(T num);
};


#endif /* CALC_H_ */
