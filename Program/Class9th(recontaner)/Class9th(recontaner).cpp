#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<unordered_map>

using namespace std;

int main()
{
#pragma region 선형 컨테이너
	// 
	//
#pragma region vector containor
	//std::vector<int> vector;
	//vector.reserve(10);
	//
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);
	//vector.push_back(40);
	//vector.push_back(50);
	//
	//
	//cout <<"vector의 크기(배열의 갯수) : " << vector.size() << endl;
	//cout << "capacity의 값 : " << vector.capacity() << endl;
	////잘못쓰면 용량 차지 엄청함
	//
	//
	//
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//	//cout << &vector[i] << endl;
	//}


#pragma endregion
#pragma region  list container
	std::list <int> list;
	//[20]
	//[20] - [30]
	//[10] - [20] - [30]
	//[20] - [30]

	//list.push_back(20);
	//list.push_back(30);
	//list.push_front(10);
	//list.pop_front();
	//list.assign(3,10);
	//
	//for (int value : list)// int 변수 : 벡터
	//{
	//	cout <<"[" << value<<"]"<<endl;
	//}
	//cout << "list의 사이즈 : "<<list.size()<<endl;
#pragma endregion
#pragma region string
	// 문자열클래스
	//

	//string contents;
	//cout << contents.capacity() << endl;//capacity를 기본적으로 15로 잡는다
	//contents = "League Of Legend";
	//contents.append("League Of Legend");
	//
	//cout << contents << endl;
	//cout << contents.capacity() << endl;
	//
	//contents = "Battle Field";
	//contents.append("Battle Fiel");
	//cout << contents << endl;
	//cout << contents.capacity() << endl;

#pragma endregion
#pragma region 컨테이너

	//stack<int> stack;
	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//
	//
	//while (!stack.empty())
	//{
	//	cout << stack.top() << endl;
	//	stack.pop();	
	//	
	//}
	//cout << stack.empty()<<endl;
	//cout << " 1이 나오면 모두 비어낸 겁니다." << endl;
#pragma endregion
#pragma region  queuecontainor
	//queue<int> Q;
	//Q.push(10);
	//Q.push(20);
	//Q.push(30);
	//Q.push(40);
	//Q.push(50);
	//cout << Q.empty() << endl;
	//while (Q.empty() == false)//!Q.empty()라고 적어도 됨
	//{
	//	cout << Q.front() << endl;
	//	Q.pop();
	//}
	//cout << Q.empty() << endl;
#pragma endregion
#pragma region deque container
	//Double Ending Queue 
	//요약 : push_back/ push_front다 됨

	//목표 데큐만들고 위에거 하기
	std::deque<int> Deque;
	//Deque.push_front(10);
	//Deque.push_front(20);
	//Deque.push_front(30);
	//Deque.push_front(40);
	//Deque.push_front(50);
	//Deque.push_front(5);
	//Deque.push_front(1);
	//
	//Deque.push_back(60);
	//Deque.push_back(75);
	//
	//for (int i = 0; i<Deque.)
	//{
	//
	//}
	//
	//while(Deque.empty()== false)
	//{
	//cout << Deque.front() << endl;
	//Deque.pop_front();
	//}


#pragma endregion
#pragma region priority_queue
	//priorityqueue의 속도는 node n이다.
	//이건 무조건 1개씩만 꺼내진다.
	//priority_queue<int> priorityqueue;
	//priorityqueue.push(10);
	//priorityqueue.push(20);
	//priorityqueue.push(40);
	//priorityqueue.push(30);
	//priorityqueue.push(50);
	//int pq_size = priorityqueue.size();
	//while (!priorityqueue.empty())
	////while (priorityqueue.empty()==false) 로도 쓸 수 있다.
	//{
	//cout <<"top값 : " << priorityqueue.top() << endl;
	//cout <<"size : " << priorityqueue.size() << endl;
	//priorityqueue.pop();
	//}
	//for (int i=0; i < pq_size; i++)
	//{
	//	cout << "for문버전" << endl;
	//	cout << "top값 : " << priorityqueue.top() << endl;
	//	cout << "size : " << priorityqueue.size() << endl;
	//	priorityqueue.pop();
	//}

#pragma endregion


#pragma endregion
}