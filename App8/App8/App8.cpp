//REFERENCES


//Pointer -> Points to an Address -> Points to variable               - Changes memory address
//Reference -> Points to variable              - Changes Value and therefore memory address automatically gets changed


#include <iostream>
using namespace std;
int main()
{

    /*
    
    int a = 5;

    int &ref_to_a = a;            //Creating Reference for variable a; have to be defined, We can't just declare a reference without defining it
    

    cout << "The value of a is: " << a << endl;
    cout << "The value of ref_to_a is: " << ref_to_a << endl << endl;
    

    cout << "The memory address of a is: " << &a << endl;
    cout << "The memory address of ref_to_a is: " << &ref_to_a << endl;

    */


    /*
    
    int a = 5;

    int b = 23;

    int* ptr_to_a = &a;


    cout << "The value of a is: " << a << endl;
    cout << "The value of ptr_to_a is: " << *ptr_to_a << endl;


    ptr_to_a = &b;             //points to the memory address of b but points points to the value of a because we are chaning only memory address not value


    cout << "The value of a is: " << a << endl;
    cout << "The value of ptr_to_a is: " << *ptr_to_a << endl;

    */


    int a = 5;

    int b = 23;

    int &ref_to_a = a;


    cout << "The value of a is: " << a << endl;
    cout << "The value of ref_to_a is: " << ref_to_a << endl;      


    ref_to_a = b;             //We are changing the value in this case, so memory address automatically gets changed


    cout << "The value of a (Original reference variable) is: " << a << endl;
    cout << "The value of ref_to_a is: " << ref_to_a << endl;

}
