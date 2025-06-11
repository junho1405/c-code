#include <iostream>
using namespace std;
class gameobject
{
#pragma region 접근지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.
	// 접근지정자의 종류
	// public :		클래스 내부와 자기가 상속하고 있는 클래스
	//				그리고 클래스 외부에서도 접근을 허용하는 지정자입니다.
	// 
	// protected :	클래스 내부와 자기가 상속하고 있는 클래스까지만
	//				접근을 허용하는 지정자입니다.
	// 
	// private	:	클래스 내부까지만 접근을 허용하는 지정자입니다.
	//

#pragma endregion
private:
	static int count;//갯수세는거
public:
	gameobject()
	{
		count++;
	}
	static int GetCount()
	{
		return count;
	}

	int x = 0;
	int y = 0;
	int z = 0;


	void SetX(int value)
	{
		if (value >= 100)
		{
			cout << "Exeception " << endl;
		}
		else
		{
			x = value;
		}
	}
	int& GetX()
	{
		return x;
	}
	// Y값을 구한다.
	void SetY(int value)
	{
		if (value >= 100)
		{
			cout << "Exeception " << endl;
		}
		else
		{
			y = value;
		}
	}
	int& GetY()
	{
		return y;
	}
	//Z값을 구한다.
	void SetZ(int value)
	{
		if (value >= 100)
		{
			cout << "Exeception " << endl;
		}
		else
		{
			z = value;
		}
	}
	int& GetZ()
	{
		return z;
	}
};

int gameobject::count = 0;


#pragma region 참조자에 사용된 함수
//void swap(int& x, int& y)
//{
//	cout << &x << endl;
//	x = 1010;
//	y = 2020;
//}

#pragma endregion
class KillCount
{
private:
	static int count;
public:
	KillCount() {
		count++;
	}
	static int GetKillCount()
	{
		return count;
	}
};
int KillCount::count = 0;
int main()
{
#pragma region 참조자
	// 하나의 변수에 또 다른 이름을 저장하는 저장자입니다.
	// 사용이유, 값만을 가져와서 연산할때 씀
	//
	//int x = 10;
	//int& reference = x;
	//
	//cout << "x의 값은 :" << x << endl;
	//cout << "x의 주소 :" << &x << endl;
	//cout << "reference의 값은 :" << reference << endl;
	//cout << "reference의 주소 :" << &reference << endl;


	//int leftValue = 10;
	//int rightValue = 20;
	//swap(leftValue,rightValue);
	//cout << leftValue << endl;
	//cout << rightValue << endl;


#pragma endregion
#pragma region 클래스
	// 사용자 정의 자료형으로 속성과 함수가 포함되어 있으며,
	// 클래스를 통해 객체를 생성하여 접근하고 사용하는 집합체입니다.


	gameobject gameobject1;

	//object1
	gameobject1.SetX(10);
	gameobject1.SetY(12);
	gameobject1.SetZ(15);
	gameobject1.GetX();
	gameobject1.GetY();
	gameobject1.GetZ();

	cout << "gameobject1의 GetX의 값:" << gameobject1.GetX() << endl;
	cout << "gameobject1의 GetY의 값:" << gameobject1.GetY() << endl;
	cout << "gameobject1의 GetZ의 값:" << gameobject1.GetZ() << endl;
	cout << "gameobject의 크기:" << sizeof(gameobject) << endl;
	cout << "gameobject에 등록된 갯수 : " << gameobject::GetCount() << "개" << endl;

	//클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에
	// 포함되지만, 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않습니다.
	//

#pragma endregion

}

