//ARRAYS


/*
Array Declaration:
	
	datatype array_name[array_size] = {array_values}

*/



#include <iostream>
using namespace std;

int main()
{
	/*

	int a[10] = {1,3,94,56,5,6,7,9,4,90};           //Last Array element will always be size of the array; if we add more than initialised elements(10), we'll get error
	a[0];                                           //Accessing Array Element

	*/


	/*
	* 
	int a[10] = { 1,3,94,56,5,6,7,9,4,90 };
	for (int i = 0; i < size(a); i++)               //size(a) tells the number of elements an array can express
	{
		cout << "The value of integer is: "<<a[i]<<endl;
	}

	*/


	/*
	
	int a[10] = { 1,3,94,56,5,6,7,9,4,90 };
	cout << "The value is: "<< a[11];               //Will give a random value because we are trying to access an element that doesn't exist; Called Garbage value

	*/


	/*
	
	string name[4] = { "Luffy", "Zoro", "Sanji", "Jimbei" };
	for (int i = 0; i < size(name); i++)
	{

		cout << "Names are: "<<name[i]<<endl;

	}

	*/


	int a[10] = { 1,3,94,56,5,6,7,9,4,90 };
	int i = 0;
	while (i < size(a))
	{
		cout << "The value of integer is: " << a[i] << endl;
		i++;
	}
}
