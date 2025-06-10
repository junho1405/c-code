#include <iostream>
using namespace std;

class Dog {
private:
    // 정적 멤버 변수 (모든 Dog 객체가 공유)
    static int count;

public:
    // 생성자: Dog 객체가 생성될 때마다 count 증가
    Dog() {
        count++;
    }

    // 정적 멤버 함수: 전체 개수 반환
    static int GetCount() {
        return count;
    }
};

// 정적 멤버 변수는 클래스 밖에서 정의 및 초기화해야 함
int Dog::count = 0;

int main() {
    Dog d1; // 첫 번째 객체
    Dog d2; // 두 번째 객체

    // 정적 함수는 클래스 이름으로 호출 가능
    cout << "현재 강아지 객체 수: " << Dog::GetCount() << endl;

    return 0;
}
