#include "Vector2D.h"
#include<iostream>
using namespace std;

Vector2D::Vector2D(int x, int y)
{
#pragma region this ������
	// �ڱ� �ڽ��� ����Ű�� �������Դϴ�.
	this-> x = x;
	this-> y = y;
#pragma endregion

}

void Vector2D::Position() const
{
	cout << "x�� ���� : " << x << endl;
	cout << "y�� ���� : " << y << endl;

}

const Vector2D& Vector2D::operator+(const Vector2D& vector2)
{
	Vector2D clone(this->x + vector2.x, this->y + vector2.y);
	return clone;
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Vector2D& Vector2D::operator-(const Vector2D& vector2)
{
	Vector2D clone(this->x - vector2.x, this->y - vector2.y);
	return clone;
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Vector2D& Vector2D::operator*(const Vector2D& vector2)
{
	Vector2D clone(this->x * vector2.x, this->y * vector2.y);
	return clone;
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Vector2D& Vector2D::operator/(const Vector2D& vector2)
{
	Vector2D clone(this->x / vector2.x, this->y / vector2.y);
	return clone;
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Vector2D& Vector2D::operator%(const Vector2D& vector2)
{
	 Vector2D clone(this->x % vector2.x, this->y % vector2.y);
	 return clone;
	// TODO: ���⿡ return ���� �����մϴ�.
}


