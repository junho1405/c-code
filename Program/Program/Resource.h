#pragma once
#include<iostream>
using namespace std;
class Resource
{
	shared_ptr<Resource> y;
public:
	Resource();
	void share(const shared_ptr<Resource>& x);
		//(shared_ptr<Resource> x);
	~Resource();
};

