#include<iostream>
using namespace std;

// 멤버 이니셜 라이저
// 왜? 멤버 이니셜 라이저를 사용해야하는가?
// 실행해보기
//


// 멤버 이니셜 라이저의 정의
// 클래스의 멤버 변수를 초기화하는 방법
// 생성자에서 사용되며, 멤버 초기화 리스트라고도 불린다.


//기본 문법
class RefHolder {
private:
    int& ref;

public:
    RefHolder(int& r) : ref(r) {}

    void print() {
        cout << "참조된 값: " << ref << endl;
    }
};

int main() {
    int x = 42; // 자료형 int에 변수 x를 생성한다.
    RefHolder rh(x);
    rh.print();
    x = 100;
    rh.print();
    return 0;
}