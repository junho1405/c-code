#include<iostream>
using namespace std;

class unit
{
private:
	int health;
	int defence;

public:
	unit()//생성잔느 클래스와 이름같게할것
	{
		health = 40;
		defence = 0;
		cout << "유닛이 생성되었습니다." << endl;
	}
	void stat()
	{

		cout << "Health : " << health << endl;
		cout << "Defence : " << defence << endl;
	}
	~unit()
	{
		cout << "삭제" << endl;
	}
};
class Item
{
private:
	char grade;
	int* price;
public:
	Item()
	{
		grade = 'A';
		price = new int;
		*price = 0;

	}

	Item(Item& clone)
	{
		grade = clone.grade;
		price = new int;
		*price = *(clone.price);
		//*price 이기 때문에 포인터를 써야한다
		//그래서 *()안에 내가 불러오고 싶은 값을 넣어
		//포인터화시킨거다
	}
	void information()
	{
		cout << "등급 : " << grade << endl;
		cout << "가격 : " << *price << endl;
	}
	~Item()
	{
		delete price;
		cout << "소멸자작동" << endl;
	}
};
void Position(int x = 10, int y = 100, int z = 1000)
{
	cout << "x의 값은 : " << x << endl;
	cout << "y의 값은 : " << y << endl;
	cout << "z의 값은 : " << z << endl;
}

int main()
{
#pragma region 생성자	//초기값 세팅용으로 쓰임
	// 클래스의 인스턴스가 생성되는 시점에서 자동으로
	// 호출된느 특수한 멤버 함수입니다.

	//unit unit1;



	// 생성자의 경우 객체가 생성될 때 단 한 번 만 호출되며,
	// 생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기
	// 전에는 개체에 대한 메모리는 할당하지 않습니다.
	//
#pragma endregion
#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스 영역 함수 입니다.

	//unit *marine = new unit;
	//marine ->stat();
	//delete marine;
	// 소멸자는 개체가 메모리에서 해제될 때
	// 소멸자에는 매개변수를 생성하여 사용할 수 있습니다.
	//
#pragma endregion
#pragma region 복사 생성자
	// 같은객체를 복사하여 생성할때
	// 호출되는 생성자입니다
	// 
	// 원래 이부분에 있던 코드는
	// 깊은복사에서 쓰기에 그쪽거를 참조
	// 
	//int x(1);
	//cout << x << endl;
	//같다.
	// 복사 생성자를 정의하지 않고, 객체를
	// 복샇게 되면 기본 복사 생성자가 호출되기 때문에
	// 얕은 복사로 개체가 복사됩니다.
#pragma region 깊은복사
// 객체를 복사할 때 참조값이 아닌 객체 자체를
// 새로 복사하여 서로 다른 메모리를 생성하는 복사입니다.
	//Item item1;
	//Item item2(item1);
	//item1.information();
	//item2.information();

#pragma endregion


#pragma endregion
#pragma region  얕은 복사
	// 
	// 
	//pointer1,2가 가르키는 값이 같게하기
	//int* pointer1 = new int;
	//int* pointer2 = pointer1;
	//*pointer1 = 20;
	//cout << "pointer1의 값 : "<<*pointer1<<endl;
	//cout << "pointer2의 값 : "<<*pointer2<<endl;
	//delete pointer1;

	//Item item1;
	//Item item2(item1);
	//item1.information();
	//item2.information();


	// 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
	// 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
	// 서로 참조된 객체도 함께 영향을 받습니다.
	//
#pragma endregion
#pragma region 기본매개 변수
	// 함수의 매개변수의 값이 전달되지 않을 때
	// 미리 값을 설정해두는 매개변수입니다.
	// 적당히 값이 입력 안되도 디폴트값을 지정할 수 있다는 것
	// 
	//Position();
	//Position(10,20,30);

	// 기본 매개 변수를 지정하려면 오른쪽에서 부터 값을
	// 지정해 주어야합니다.
	//
#pragma endregion





}