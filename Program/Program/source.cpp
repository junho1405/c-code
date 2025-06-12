#include<iostream>
#include "Bicycle.h"
#include "Scooter.h"
#include "Boat.h"
using namespace std;

//상속클래스는 모두 쓰는것만 넣어라
//

class Monster
{
protected:
	int health;
	int defense;
public :
	Monster(int h, int d)
	{
		health = h;
		defense = d;
	}

};
class Goblin : public Monster
{
private:
	int attack;
public:
	Goblin() : Monster(100, 5)
	{
		attack = 30;
	}
	void information()
	{
		cout << "고블린" << endl;
		cout << "체력 : "<< health << endl;
		cout << "공격력 : "<< attack << endl;
		cout << "방어력 : "<<defense << endl;

		cout << endl;

	}
};
class JuniorGolem : public Monster
{
private:
	int attack;
public :
	JuniorGolem() : Monster(200, 10)
	{
		attack = 55;
	}
	void information()
	{
		cout << "주니어골렘" << endl;
		cout << "체력 : " << health << endl;
		cout << "공격력 : " << attack << endl;
		cout << "방어력 : " << defense << endl;

		cout << endl;

	}

};
class Slime : public Monster
{
public:
	Slime() : Monster(50, 1)
	{	}
	void information()
	{
		cout << "슬라임" << endl;
		cout << "체력 : " << health << endl;
		cout << "방어력 : " << defense << endl;

		cout << endl;

	}
	
	
};

int main()
{
	//Boat boat1;
	//boat1.Move();
	//
	//Scooter scooter1;
	//scooter1.Move();
	//
	//Bicycle bicycle1;
	//bicycle1.Move();

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 
	// 사용할 수 있도록 설정해주는 기능입니다.
	

	// 클래스의 상속 관계에서 상위 클래스는
	// 하위 클래스의 속성을 사용할 수 없으며,
	// 하위 클래스는 상위 클래스의
	// 메모리를 포함한 상태로 메모리의 크기가 결정됩니다.
	//
#pragma endregion

}