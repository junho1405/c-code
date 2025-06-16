#pragma once
#include<iostream>
#include "Paint.h"
using namespace std;

class Brush :public Paint {// Paint 클래스의 자식클래스 Brush를 만든다.
public:
	void draw() override;//부모에게 있는 draw가 선언되어 있기에 따로 public으로 선언안해도 작동한다
	virtual ~Brush();
};

