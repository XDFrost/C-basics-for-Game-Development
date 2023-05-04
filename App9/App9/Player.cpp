#include "Player.h"
#include <iostream>
using namespace std;


Player::Player()
{

	health = 100;
	power = 900;
	mana = 200;

}


Player::Player(int _power, float _health)
{
	this->health = _health;
	this->power = _power;
}


Player::~Player()
{

}


int Player::getmana()
{
	return this->mana;
}


void Player::setmana(int _mana)
{
	this->mana = _mana;
}


void Player::Attack()
{
	cout << "Player is attacking" << endl;
}


void Player::walk()
{
	cout << "Player is walking" << endl;
}