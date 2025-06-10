#include <iostream>//입출력 스트림
using namespace std;//이걸 넣으면 std::를 생략해도 좋다.그러니 작업할때 미리 쓰고 하면 취향에 따라 편할듯

#pragma region 이름공간 참고자료
//int packet = 20;
//using namespace std;//이걸 넣으면 std::를 생략해도 좋다.그러니 작업할때 미리 쓰고 하면 취향에 따라 편할듯
//
//namespace Module
//{
//	float time = 5.0f;
//	void Function()
//	{
//		cout << "Module Functon"<<endl;
//	}
//}
//
//namespace library
//{
//	const char* manual = "manual";
//	void Function()
//	{
//		cout << "library Functon" <<endl;
//	}
//
//}
//using namespace library;

#pragma endregion



int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의
	// 흐름입니다.

	//	int series = 5;
	//	std::cout << "내가 원하는 시리즈" << std::endl;
	//	int count = 0;
	//	std::cin >> count;
	//	
	//	for (int i = 0; i < count;)
	//	{
	//		i++;
	//		std::cout << "Playstaiton" << i<< std::endl;
	//	}
	//	std::cout <<"a" << series << std::endl;
	//	std::cout << "Program";

		// 스트림은 운영체제에 의해 생성되며
		// 스트림 자체에 버퍼라는 임시 메모리 공간이 존재합니다.
		//
#pragma endregion
#pragma region 범위지정연산자
	// 여러 범위에서 사용되는 식별자를 구분하는 데
	// 사용하는 연산자입니다.

	//int packet = 10;
	//
	//std::cout << "packey변수의 값:" << packet<<std::endl;
	//std::cout << "packey변수의 값:" << ::packet<<std::endl;//::변수이름을 넣으면 함수 밖의것을 불러온다.


	// 범위 지정 연산자는 전역 변수와 같은 이름의
	// 지역 변수ㅠ가 선언되었을 때 가장 가까운 범위가
	// 선언된 변수의 이름을 사용하는 범위 규칙이
	// 존재하기 때문에 전역 변수가 호출되지 않습니다.
	// 
#pragma endregion
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	//Module::Function();
	//Function();
	//
	//
	//




#pragma endregion
#pragma region 동적활당
	// 
	//
	//int* x = new int;
	//*x = 100;
	//cout << "값:" << *x << endl;
	//
	//x = new int[5];
	//for (int i = 0; i < 5; i++)
	//{
	//	x[i] = (i + 1) * 10;
	//
	//	cout<< "x의[" << i << "]의 값은" << x[i] << endl;
	//}
	//delete[] x;


#pragma endregion
}

