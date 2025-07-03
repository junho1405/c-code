#include "Character.h"



Character::Character()
{
	cout << "积己己傍" << endl;
}

void Character::Partner(const weak_ptr<Character>& character)
{
	pointer = character;

}



Character::~Character()
{
	cout << "家戈磊 己傍" << endl;
}
