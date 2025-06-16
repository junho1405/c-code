#pragma once
#include<iostream>
using namespace std;
class Vector2D
{
private:
		int x;
		int y;

public:
	Vector2D(int x, int y);
	void Position() const;

	const Vector2D& operator + ( const Vector2D &vector2 );
};

