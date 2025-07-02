#pragma once
#include<iostream>
using namespace std;
class Resource
{
public:
	Resource();
	void share(shared_ptr<Resource>);
	~Resource();
};

