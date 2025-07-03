#pragma once
#include<iostream>
using namespace std;

class Character
{
private:
	weak_ptr<Character> pointer;
public:
	Character();
	void Partner(const weak_ptr<Character>& character);
	//const를 사용하는 이유 : 읽기전용/참조하는 용도만으로 사용할거라서
	//
	~Character();
};

