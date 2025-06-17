#include "Vector2D.h"
#include<iostream>
using namespace std;

Vector2D::Vector2D(int x, int y)
{
#pragma region this 포인터
	// 자기 자신을 가르키는 포인터입니다.
	this-> x = x;
	this-> y = y;
#pragma endregion

}

void Vector2D::Position() const
{
	cout << "x의 값은 : " << x << endl;
	cout << "y의 값은 : " << y << endl;

}

const Vector2D& Vector2D::operator+(const Vector2D& vector2)
{
	Vector2D clone(this->x + vector2.x, this->y + vector2.y);
	return clone;
	// TODO: 여기에 return 문을 삽입합니다.
}

const Vector2D& Vector2D::operator-(const Vector2D& vector2)
{
	Vector2D clone(this->x - vector2.x, this->y - vector2.y);
	return clone;
	// TODO: 여기에 return 문을 삽입합니다.
}

const Vector2D& Vector2D::operator*(const Vector2D& vector2)
{
	Vector2D clone(this->x * vector2.x, this->y * vector2.y);
	return clone;
	// TODO: 여기에 return 문을 삽입합니다.
}

const Vector2D& Vector2D::operator/(const Vector2D& vector2)
{
	Vector2D clone(this->x / vector2.x, this->y / vector2.y);
	return clone;
	// TODO: 여기에 return 문을 삽입합니다.
}

const Vector2D& Vector2D::operator%(const Vector2D& vector2)
{
	 Vector2D clone(this->x % vector2.x, this->y % vector2.y);
	 return clone;
	// TODO: 여기에 return 문을 삽입합니다.
}


