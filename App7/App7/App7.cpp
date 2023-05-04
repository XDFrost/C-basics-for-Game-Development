//Pointers




#include <iostream>
using namespace std;

int main()
{

	int a = 5;
	int *pointer_to_a = &a;					//Pointer pointing to the memory address of variable a
	void *some_pointer = &a;


	cout << "Value is: " <<a<<endl;
	cout << "Memory Address is: "<<&a<< endl;            //& is used to get memory address
	

	//cout << "The value of Some Pointer is: " << *some_pointer << endl;             //Gives error because type of variable isn't specified

	
	cout << "The value of Some Pointer is: " << *pointer_to_a << endl;               //*pointer_to_a is called dereferencing i.e. getting value located at that memory
	cout << "The Memory Address of pointer_to_a is: " << pointer_to_a << endl;
	

	*pointer_to_a = 67;			//Changing pointer value

	cout << "The value of Some Pointer is: " << *pointer_to_a << endl;
	cout << "The Memory Address of pointer_to_a is: " << pointer_to_a << endl;            //We'll have same memory address because pointer is pointing to the memory address, not to the value


	a = 43;

	cout << "The value of Some Pointer is: " << *pointer_to_a << endl;
	cout << "The Memory Address of pointer_to_a is: " << pointer_to_a << endl;

}
