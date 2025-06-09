// 숙제용.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>

using namespace std;

int main()
{
    //시퀀스
    //cout << "시퀀스에 대해 알아보자"<<endl;
    ////시퀀스는 "순서가 있는 값들의 나열"입니다.
    // // 예를 들면 배열, 벡터, 문자열 모두 시퀀스이다.
    ////그냥 시퀀스가 배열 상위항목이란 뜻
    //   
    //int array[] = { 10, 20, 30 };         // 배열: 시퀀스
    //std::vector<int> v = { 1, 2, 3 };   // 벡터: 시퀀스
    //std::string str = "hello";           // 문자열: 문자 시퀀스
    //
    //// 배열로 시퀀스 표현
    //int arr[3] = { 10, 20, 30 };
    //cout << "배열 시퀀스: ";
    //for (int i = 0; i < 3; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << endl;
    //
    //// 벡터로 시퀀스 표현
    //vector<int> vec = { 10, 20, 30 };
    //cout << "벡터 시퀀스: ";
    //for (int i = 0; i < vec.size(); i++) {
    //    cout << vec[i] << " ";
    //}
    //cout << endl;
    //
    //return 0;

    //시퀀스 포인트
    //시퀀스 포인트란?
    //변수 값이 확실히 바뀐 다음 코드가 실행되는 시점
    int i = 1;

    int a = i++;  // i는 2가 됨
    int b = i++;  // i는 3이 됨

    cout << "a: " << a << endl;  // 1
    cout << "b: " << b << endl;  // 2
    cout << "i: " << i << endl;  // 3

    //잘못된 예시
    cout << "잘못된 예시"<<endl;
    int x = i++ + i++;
    cout << "x: " << x << endl;
    cout << "i: " << i << endl;
    //i와 x의 값이 같아야하는데 다른걸 볼 수 있다.
    return 0;
    // 왜이렇게 해야하는가?
    //  같은 변수(i)를 한 줄에서 여러 번 바꾸면 위험함
    // 바꾸고 나서 다음 줄에서 다시 쓰면 안전함 ← 시퀀스 포인트!


}
