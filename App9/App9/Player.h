#pragma once
class Player
{

public:
	Player();
	Player(int _power, float _health);
	~Player();

	int power;
	int health;

	void Attack();
	void walk();
	int getmana();

	void setmana(int _mana);

private:
	int mana;

};

