#pragma once
#include <iostream>
using namespace std;

class Paint {
public:
	virtual void draw() = 0;

	virtual ~Paint() {
		cout << "Paint ¼Ò¸êÀÚ È£ÃâµÊ" << endl;
	}
};