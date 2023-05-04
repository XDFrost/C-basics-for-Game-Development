//CLASSES AND OBJECT



//.h file is used for declaration
//cpp file is for implementation



#include <iostream>
#include "Player.h"
using namespace std;

/*

class Player 
{

public:                  //Public is used to access variables in main
	int power;
	int health;
	int mana;

private:                 //Private makes the variables in-accessible in main
	int magic;
};

*/


int main()
{
	/*

	Player wizard = Player();
	wizard.power = 10000;

	//wizard.magic = 100;               //It won't work because magic is private

	cout << "Power level is: " << wizard.power << endl;

	*/


	/*

	Player wizard = Player();

	Player knight = Player();

	wizard.power = 99;

	cout << "Mana: " << wizard.getmana() << endl;
	cout << "Power: " << wizard.power << endl;
	cout << "Health: " << wizard.health << endl;

	wizard.setmana(11);

	cout << "Changed mana value: " << wizard.getmana() << endl;;

	wizard.Attack();
	wizard.walk();


	knight.health = 101;

	cout << "Knight's helth: " << knight.health << endl << "Wizard's health: " << wizard.health << endl;

	*/

	Player Wizard = Player(34, 69);

	cout << "Health: " << Wizard.health << endl;
	cout << "Power: " << Wizard.power << endl;

	}
 