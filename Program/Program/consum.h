#pragma once
#include<iostream>
using namespace std;
class consum
{
public:
	virtual void use();
	virtual ~consum() {
		cout << "�θ�Ҹ�" << endl;
	}
};

