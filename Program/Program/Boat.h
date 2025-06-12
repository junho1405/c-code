#pragma once
#include<iostream>
#include"vehicle.h"
class Boat : public vehicle
{
private:
	int Oil;
public:
	Boat() :vehicle(200)
	{
		Oil = 250;
	}

	void Move();
	~Boat()
	{
		cout << "º¸Æ®¼Ò¸êÀÚ" << endl;
	}
};


