#pragma once
#include<iostream>
#include "Paint.h"
using namespace std;

class Brush :public Paint {// Paint Ŭ������ �ڽ�Ŭ���� Brush�� �����.
public:
	void draw() override;//�θ𿡰� �ִ� draw�� ����Ǿ� �ֱ⿡ ���� public���� ������ص� �۵��Ѵ�
	virtual ~Brush();
};

