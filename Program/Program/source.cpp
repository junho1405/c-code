#include<iostream>
#include"consum.h"
#include"potion.h"
#include"water.h"
#include"lantern.h"
#include"rope.h"
#include <vector>

using namespace std;
void Square(int x)
{
	cout << "int x :" << x << endl;
}
void Square(double x)
{
	cout << "double x :" << x << endl;
}


int main()
{

#pragma region 다형성
	// 여러개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 작업입니다.







	// 다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을
	// 하지 않고, 실행 시간에 함수와 속성이 결정될 수 있는
	// 동적 바인딩을 가능하게 합니다.
	//

#pragma endregion
#pragma region 함수의 오버로딩
	// 같은 이름의 함수를 매개변수의 자료형과 매개변수의 수로 구분하여
	// 여러개를 선언할 수 있는 기능입니다.

	//Square(3.14);
	//Square(3);


	// 함수의 오버로딩의 경우 함수의 매개변수에 절달하는
	// 인수의 형태를 보고 호출하므로, 반환형으로
	// 함수의 오버로딩은 생성할 수 없습니다.
	//
#pragma endregion
#pragma region 함수의 오버라이딩
	// 상위 클래스에 잇는 함수를 하위 클래스에서 재정의하여
	// 사용하는 기능입니다.




	//cout << "예제종료" << endl;
	//consum* use_water = new water();
	//use_water->use();
	//static_cast<water*>(use_water)->use();
	//cout << "예제종료" << endl;
	////강사님 답안
	//lantern lantern1;
	//water water1;
	//potion potion1;
	//
	//consum* inventory[3];
	//inventory[0] = &lantern1;
	//inventory[1] = &potion1;
	//inventory[2] = &water1;
	//for (int i = 0; i < 3; i++) {
	//	inventory[i]->use();
	//}//지금은 부모 클래스의 포인터로 접근해서 부모가 나온다.
	//cout << sizeof(potion1) << endl;
	//cout << sizeof(consum) << endl;

#pragma region 가상함수
	// 가상함수의 경우에는 가상함수 테이블을 사용하여
	// 함수가 호출되는 시간을 런타임에 결정하여 한개이상의
	// 가상함수를 포함하는 클래스가 있을 때가상 함수 포인터가 추가됩니다.
	int p = 0;
	int l = 0;
	int w = 0;
	consum* inventory[3];
	lantern lantern1;
	water water1;
	potion potion1;
	inventory[0] = &lantern1;
	inventory[1] = &potion1;
	inventory[2] = &water1;
	while (true)
	{

		cout << "[1]포션 [2]랜턴 [3]물" << endl;
		cout << " 포션 : " << p << " 랜턴 :" << l << " 물 : " << w << endl;
		int input;
		cin >> input;
		if (input == 1)
		{
			if (p + l + w < 5)
			{
				cout << "포션이 생성되었습니다." << endl;
				p++;
			}
			else
			{
				cout << "인벤토리가 가득찼습니다." << endl;
			}
		}
		else if (input == 2)
		{
			if (p + l + w < 5)
			{
				cout << "랜턴이 생성되었습니다." << endl;
				l++;
			}
			else
			{
				cout << "인벤토리가 가득찼습니다." << endl;
			}
		}
		else if (input == 3)
		{
			if (p + l + w < 5)
			{
				cout << "물이 생성되었습니다." << endl;
				w++;
			}
			else
			{
				cout << "인벤토리가 가득찼습니다." << endl;
			}
		}
		else if (input == p)
		{
			if (p > 0)
			{
				for (int i = 0; i < 3; i++) {
					if (p <= 0) break;
					inventory[i]->use();
					p--;
				}
			}else 
			{
				cout << "포션이 부족합니다." << endl;
			}
			
		}
		else {
			cout << "잘못된 값을 입력했습니다." << endl;
		}


	}


		// 가상함수는 실행 시간에 상위 클래스에 대한 참조로 하여
		// 수 있습니다.
		//
#pragma endregion



	// 함수의 오버라이딩은 상수 관계에서만 이루어지며,
	// 클래스에 함수를 재정의할 때 상위 클래스의 함수 형태와
	// 일치해야 합니다.
	//
#pragma endregion

}


