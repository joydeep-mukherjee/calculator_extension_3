/*
We extend the calculator extension-2 project to perform string calculations
We concatenate string inputs with a string passed as input in the middle
for eg, if the user inputs "cse" & "305" we want to output "cse 305" or "cse+305" depending on the string we pass
*/
#include<iostream>
using namespace std;
#include "calc.h"
#include "calc.cpp"



int main()
{
	/*
	cout<<"Performing Calculations on Double Data Type:"<<endl;
	Calc <double> obj1(2);
	obj1.calculate();

	cout<<"Performing Calculations on Integer Data Type:"<<endl;
	Calc <int> obj2(2);
	obj2.calculate();
	*/

	cout<<"Performing Calculations on String Data Type:"<<endl;
	//note the use of string template
	Calc <string> obj3(2);
	//note the use of function overloading for calculate() method
	obj3.calculate(" ");
}
