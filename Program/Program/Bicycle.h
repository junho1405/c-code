#pragma once
#include<iostream>
#include "vehicle.h"
class Bicycle : public vehicle
{
protected:
public:
	Bicycle() : vehicle(25)
	{	}

	void Move();

	~Bicycle()
	{
		cout << "�����żҸ���" << endl;
	}

};