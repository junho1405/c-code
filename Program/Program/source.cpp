#include<iostream>
#include "Paint.h"
#include "Brush.h"
#include "Pencil.h"
#include"Vector2D.h"

using namespace std;


int main(){
#pragma region 추상클래스
	// 함수의 특정한 내용이 구현되어 있지 않고, 선언만
	// 되어있는 클래스입니다.
	//Pencil p;	 //Pencil타입에 객체 p를 생성한다.
	//Brush b;
	//Paint* Paint_Pencil = &p; //객체 p의 주소를 가리키는 Paint클래스의 포인터 편수 Paint_Pencil를 만든다.
	//Paint* Paint_Brush = &b;
	//Paint_Pencil->draw();//Paint_Pencil로 Paint클래스에 접근해 자식클래스 Pencil클래스의 draw를 실행한다.
	//Paint_Brush->draw();
	// 추상클래스는 정의되어 있지 않은 함수가 있으므로,
	// 객체를 생성할 수 없습니다.
	//
#pragma endregion
#pragma region 연산자 오버로딩
	Vector2D point1D(3, 4);
	Vector2D point2D(1, 2);

	Vector2D directon = point1D + point2D;
	
	directon.Position();


#pragma endregion



}//int main()