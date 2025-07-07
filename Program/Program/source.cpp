#include<iostream>
#include<vector>
using namespace std;

int main()
{
#pragma region 반복자

	vector<int> vector;
	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(40);
	std:: vector<int>::iterator iterator;
	for (iterator =vector.begin() ; iterator != vector.end(); ++iterator)
	//inerator은 vector.begin()의 값을 가진다.
	//반복할때마다 inerator의 다음값 출력
	//vector.end()값이 나오지 않는한 반복
	{
		cout << *iterator << endl << endl;
	}
#pragma endregion

}