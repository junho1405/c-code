﻿#include<iostream>
#include<cstring>
#define SIZE 5
using namespace std;
template<typename T>
bool Same(T left, T right)
{
	return left == right;
}
template<>
bool Same(const char* left, const char* right)//특수 템플릿은 기존 같은이름의 템플릿이있어야 사용가능
{
	//길이가 같은지 구분하는 거 만들기
	return strlen(left) == strlen(right);
}


template<typename T>
class Container
{
private:
	int index;
	T list[SIZE];

public:
	Container()
	{
		index = 0;
		for (int i = 0; i < SIZE; i++)
		{
			list[i] = NULL;
		}
	}
	const T& operator[](int count)
	{
		return list[count];
	}
	void Add(T data)
	{
		if (index < SIZE)
		{
			list[index++] = data;
		}
		else
		{
			cout << "index out of range" << endl;
		}
	}
};



int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러
	// 형식을 가질 수 있는 기술에 중점을 ㄷ어 재사용성을 
	// 높일 수 있는 기능입니다.

	//bool Same(char x, char y);
	//bool Same(int x, int y);
	//bool Same(double x , double y);
	//bool Same(const char * x, const char *y);
	//템플릿을 쓰면 이렇게 귀찮게 안해도 된다.

	//cout << "값 : "<< Same(5, 5) << endl;					//1이나옴
	//cout << "값 : "<< Same(L'a', L'가나다라마바사') << endl;	//0이나옴
	//cout << "값 : "<< Same('a', 'a') << endl;				//1이나옴
	//cout << "값 : "<< Same(3.14, 3.12) << endl;				//0이나옴
	// 정리하자면 다양한 자료형을 사용할 수 있다.
	// 오버로딩과 비교 : 로직이 복잡한건 오버로딩 추천
	//





#pragma endregion
#pragma region 템플릿의 특수함
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 특수한 자료형만 다른 형식으로 동작시키는 기능입니다.
	//
	//const char* x = "abc";
	//const char* y = "def";
	//cout << "길이가 같은가?" << Same(x,y) << endl;
	//cout << "길이가 같은가?" << Same("asbb", "sasas") << endl;
#pragma endregion
#pragma region 클래스 템플릿

	Container<int> container;
	container.Add(10);
	container.Add(20);
	container.Add(30);
	container.Add(40);
	container.Add(50);

	for (int i = 0; i < SIZE; i++)
	{
		cout << container[i] << endl;
	}
#pragma endregion


}