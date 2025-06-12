#pragma once
#include <iostream>
using namespace std;

class vehicle
{
protected:
	int speed;
public:
	vehicle();


	vehicle(int s);

	void Move();
	
	~vehicle()
	{
		cout << "vehicle¼Ò¸êÀÚ" << endl;
	}
};