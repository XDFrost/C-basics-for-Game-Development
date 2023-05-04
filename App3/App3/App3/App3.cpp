//FUNCTIONS




#include <iostream>
using namespace std;


void Calculate(int a, int b) {        //Function Defining; void tells that function doesn't return value
    //int a = 7;
    //int b = 10;

    int subtraction = a - b;

    cout << "Subtraction of a and b gives: " << subtraction;
}


int Calculate2(){                     //Function that returns a value; can be int, float, bool etc
    int subtract = 10 - 5;
return subtract;
}


int Calculate3(int a, int b){
    int subtract = a - b;
    return subtract;
}


int main()
{
    int a = 7;
    int b = 10;

    //Calculate(15,4);

    int subtraction = Calculate2();
   //cout << subtraction;

    cout << Calculate3(10, 2);
}
