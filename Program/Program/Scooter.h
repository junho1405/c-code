#pragma once
#include<iostream>
#include"vehicle.h"
class Scooter : public vehicle
{
private:
	int Oil;
public:
	Scooter() :vehicle(50)
	{
		Oil = 100;
	}
	void Move();
	~Scooter()
	{
		cout << "½ºÄíÅÍ¼Ò¸êÀÚ" << endl;
	}
};


