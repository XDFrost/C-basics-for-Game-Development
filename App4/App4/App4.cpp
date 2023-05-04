//CONDITION STATEMENTS
//SWICH STATEMENTS



#include <iostream>
using namespace std;

int main()
{
	/*
	
	if (true)
	{
		cout << "The condition is true";
	}
	
	if (false)
	{
		cout << "The condition is true";
	}

	else
	{
		cout << "False Condition";
	}

	*/


	/*
	
	int a = 3;

	if (a > 6)
	{
		cout << "A is greater than 6";                   //First true condition will be executed and other true conditions won't  
	}

	else if(a>=3)
	{
		cout << "A is greater than 3";
	}

	else if (a < 2)
	{
		cout << "A is less than 2";
	}

	else if (a == 3)                      // "==" means we are checking if left and right side values are equal or not; "=" if for assigning
	{
		cout << "A has value 3";
	}

	else
	{
		cout << "Activated because none of the above is true";
	}

	*/


	int a = 0;

	switch (a) {                       //Case with same value as a will be activated

	case 1:
		cout << "A is equal to 1";
		break;

	case 2:
		cout << "A is equal to 2";
		break;

	case 3:
		cout << "A is equal to 3";
		break;

	case 4:
		cout << "A is equal to 4";
		break;

	case 5:
		cout << "A is equal to 5";
		break;

	default:
		cout << "Executed because no case matches the given value";
		break;

	}
}
