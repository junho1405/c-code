#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include"../Program/Packet.h"
#include"../Program/Resource.h"
#include"../Program/Character.h"

using namespace std;

int main()
{
#pragma region 잡다한거
	// ptr1,2를 stack에 만들고 Heap에 동적할당
	// 1을지우고 2로 100/끝나고 딜리트
	//
	//int* ptr2 = nullptr;//ptr2에 빈주소 입력
	//cout << "ptr2\n" << ptr2 << endl;
	//{
	//	cout << "ptr2\n" << ptr2 << endl;
	//int* ptr1 = new int;//heap에 새로운거 창조
	//	cout << "ptr1\n" << ptr1 << endl;
	//ptr2 = ptr1;
	//cout << "ptr1\n" << ptr1 << endl;
	//cout << "ptr2\n" << ptr2 << endl;
	//}
	//*ptr2 = 100;
	//
	////cout << ptr1 << endl;{}에 있던거라 밖에 나가면서 소멸
	//cout << "ptr\n2" << ptr2 << endl;
	//delete ptr2;
	//cout << "ptr2\n" << ptr2 << endl;
	//return 0;
#pragma endregion



#pragma region 스마트포인터

#pragma region unuquepointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록
	// 되어있는 포인터입니다.
	//
	//unique_ptr <Packet> pointer = make_unique<Packet>();//packet.h내용 불러오기 성공

	//pointer->Receive();
	//unique_ptr<Packet> pointer2 = pointer; 간섭실패
	//unique_ptr <Packet> reference = std::move(pointer);
	//pointer->Receive();//



#pragma endregion
#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며
	// 모든 포인터 객체가 지원 객체를 필ㅇ안을 때 지원 객체를
	// 해제하도록 설계 되어있다.
	// 신규 = Reference Count - 참조하고 있는 갯수
	// 클래스 이름 Reoure 포인터이름은 oil/mineral
	// 생성자 소멸자사용/순환참조자를 하기 앞써 똑같은 구도로하기
	// 맴버변수를 가기고 있어야 함 


	// 레퍼런스가 0이되면 디스트로이
	//shared_ptr<Resource> oil = make_shared<Resource>();//깊은복사
	//shared_ptr<Resource> mineral = make_shared<Resource>();

	//shared_ptr<Resource> oil = make_shared<Resource>(); 
	//shared_ptr<Resource> mineral = make_shared<Resource>(); 
	//shared_ptr<Resource> w = oil;                   
	//
	//cout << "유저카운트: " << oil.use_count() << endl;  // 2 출력됨

	//shared_ptr<Resource> oil = make_shared<Resource>(); 
	//shared_ptr<Resource> mineral = make_shared<Resource>();
	//oil->share(mineral);
	//mineral->share(oil);

	//여기서는 객체 oil과 mineral이 서로가 서로를 잡고있기에 소멸자가 발동해서는 안된다.
	//소멸자가 안되서 메모리 누수가 발생
	//약한참조로 건다.

	//cout << "유저카운트: " << oil.use_count() << endl;	
#pragma endregion
#pragma region weak pointer
	// 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는객체를
	// 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터입니다.
	// **그럼 use_count에 카운팅안되나?
	// shared로 먼저하나 만들고 참조를걸어준다.
	// 선언방식 std::weak<자료형> 변수명
	// 
	// 
	//shared_ptr<Character> wizard = make_shared<Character>();
	//shared_ptr<Character> warrior = make_shared<Character>();
	//
	//wizard->Partner(warrior);
	//warrior->Partner(wizard);
	//
	//cout << "Reference Count : " << wizard.use_count() << endl;
	//cout << "Reference Count : " << warrior.use_count() << endl;
	//shared만했을 때는 유즈카운트가 2가 나왔지만 weak로 했을 때는 1이 나오는 것을 볼 수 잇다.
	//또한 소멸자도 제대로 작동한다.


#pragma endregion

#pragma endregion

}