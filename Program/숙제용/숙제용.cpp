#include<iostream>
using namespace std;

// 다중상속에 대해 알아보자

// 다중상속이란?
// 하나의 클래스가 여러 부모 클래스를 동시에 상속받는 것
// 
class Fly {
public:
    void Fling() 
    {
        cout << "날아갑니다!" << endl;
    }
};

class Swim {
public:
    void Swimming() 
    {
        cout << "수영합니다!" << endl;
    }
};

class Duck : public Fly, public Swim {
    // Fly()와 Swim() 모두 사용 가능
};


int main() {
    Duck d;
    d.Fling();   // 출력: 날아갑니다!
    d.Swimming();  // 출력: 수영합니다!
}

// 설명
// class fly와 swim을 duck에 상속시킨다.
// duck d를 만든다.
// d.Fling(); d.Swimming();으로 날아갑니다. 수엽합니다. 를 한번에 호출한다.
// 
// 특징
// 부모클래스를 여러 개 둘수 있다.
// 
// 문제점
// 부모에 같은 이름의 멤버가 있을 경우 충돌발생
// 부모가 많다고 좋은건 아니다.
// 
// 다이아몬드 상속 문제!!중요
// 동일한 조상 클래스를 중복 상속하는 경우,
// 조상 클래스의 멤버가 2번 생성되어 의도하지 않은 동작 발생 가능
// 
// 다이아몬드 상속을 피하면 되는데 가능한 안쓰는 게 베스트
// 
// 실무에선 가급적피한다고함
// 
