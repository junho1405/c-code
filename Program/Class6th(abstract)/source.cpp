#include<iostream>
#include "../Program/paint.h"
#include "../Program/Brush.h"
#include "../Program/Pencil.h"
#include"../Program/Vector2D.h"

using namespace std;


int main() {
#pragma region �߻�Ŭ����
	// �Լ��� Ư���� ������ �����Ǿ� ���� �ʰ�, ����
	// �Ǿ��ִ� Ŭ�����Դϴ�.
	//Pencil p;	 //PencilŸ�Կ� ��ü p�� �����Ѵ�.
	//Brush b;
	//Paint* Paint_Pencil = &p; //��ü p�� �ּҸ� ����Ű�� PaintŬ������ ������ ��� Paint_Pencil�� �����.
	//Paint* Paint_Brush = &b;
	//Paint_Pencil->draw();//Paint_Pencil�� PaintŬ������ ������ �ڽ�Ŭ���� PencilŬ������ draw�� �����Ѵ�.
	//Paint_Brush->draw();
	// �߻�Ŭ������ ���ǵǾ� ���� ���� �Լ��� �����Ƿ�,
	// ��ü�� ������ �� �����ϴ�.
	//
#pragma endregion
#pragma region ������ �����ε�
	Vector2D point1D(3, 4);
	Vector2D point2D(1, 2);

	Vector2D directon = point1D + point2D;

	directon.Position();


#pragma endregion



}//int main()