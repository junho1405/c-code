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
#pragma region 연관컨테이너
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

#pragma region map
	//unordered_map<string, int> item;
	//unordered_map<string, int>* item2 = new unordered_map<string, int>;
	////아이템["이름"] = 14;
	//item.insert({ "도란의 검", 450 });
	//item.insert({ "도란의 반지", 400 });
	//item["롱소드"] = 350;
	//item2->insert({ "라바돈의 죽음모자", 3600 });
	//cout << "도란의 검의 가격 : " << item["도란의 검"] << " Gold" << endl;
	//cout << "롱소드의 가격 : " << item["롱소드"] << " Gold" << endl;
	//cout << "라바돈의 갯수 : " << item2->count({ "라바돈의 죽음모자" }) << endl;
	//cout << "라바돈의 갯수 : " << item2->at({ "라바돈의 죽음모자" }) << endl;
	//item.clear();
	//item2->clear();
	//cout << "도란의 검의 가격 : " << item["도란의 검"] << " Gold" << endl;
	//cout << "라바돈의 갯수 : " << item2->count({ "라바돈의 죽음모자" }) << endl;
	////cout << "라바돈의 가격 : " << item2->at({ "라바돈의 죽음모자" }) << endl;
	////키값없어서 터짐
	//강사님버전
	//unordered_map은 정렬이 안된다.
	//unordered_map<string, int> unordered_map;
	//unordered_map.insert({ "스테락", 3100 });
	//unordered_map.insert({ "죽무", 3200 });
	//unordered_map.insert({ "트포", 3300 });
	//unordered_map.insert({ "무대", 3400 });
	//unordered_map.insert({ "발분", 3500 });
	//cout << "unordered_map.size :" << unordered_map.size() << endl;
	//
	//for (const auto& element : unordered_map)
	//{
	//	cout << "key :" << element.first << endl;
	//	cout << "value :" << element.second << endl;
	//}
	//unordered_map.clear();
	//cout << "load :" << unordered_map.load_factor() << endl;

#pragma endregion
#pragma region Set
	//unordered_set<int> set;
	//set.insert(10);
	//set.insert(20);
	//set.insert(30);
	//set.insert(40);
	//set.insert(50);
	//
	//unordered_map<const char*, float>map;
	//map.insert({"tem", 36.5f});
	//map.insert({ "gravity", 9.8f });
	//
	//for (const auto & element.)
	//{
	//
	//}
	//for (int x : set)
	//{
	//	cout << x << endl;
	//}


#pragma endregion





#pragma endregion

}