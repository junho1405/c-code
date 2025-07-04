#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<set>
//unordered는 중복값을 처리하지 않는다.
//unordered set/map 이렇게 두종류
//set은 키만 저장/map은 값도 저장

using namespace std;

int main()
{
#pragma region 연관컨체이너
#pragma region unoredered_set
	//unordered_set<const char*> unorderedset;
	//unorderedset.max_load_factor(2.0f);
	//unorderedset.insert("가렌");
	//unorderedset.insert("갈리오");
	//unorderedset.insert("갱플랭크");
	//unorderedset.insert("쉔");
	//unorderedset.insert("제드");
	//unorderedset.insert("아칼리");
	//unorderedset.insert("케넨");
	//unorderedset.insert("진");
	//unorderedset.insert("스몰더");
	//cout << "사용중인 버켓의 갯수 : "<< unorderedset.size()<<endl;
	//cout << "총 버켓의 카운트 : "<< unorderedset.bucket_count()<<endl;
	//cout << "로드팩터는 " << unorderedset.load_factor() << endl;
	//cout << "최대로드팩터는 " << unorderedset.max_load_factor() << endl;
	//unorderedset.erase("진");
	//if (unorderedset.find("가렌") != unorderedset.end())
	//{
	//	cout << "가렌있음" << endl;
	//}
	//if (unorderedset.find("진") == unorderedset.end())
	//{
	//	cout << "진없음" << endl;
	//}
	//string input;
	//cin >> input;
	//cin.ignore();
	//if (unorderedset.find(input) != unorderedset.end())
	//{
	//	cout << input <<"는 존재합니다." << endl;
	//}
	//else
	//{
	//	cout << input << "는 존재하지 않습니다." << endl;
	//}
	//
	//for (const char* champ : unorderedset)
	////for (const auto& champ : unorderedset)이것도 가능하다.
	////auto를 쓸거면 레퍼런스 타입으로 사용해야합니다.
	//{
	//	cout << champ << endl;
	//}


#pragma endregion

#pragma region Set

#pragma endregion



#pragma endregion

}