#include "Resource.h"

Resource::Resource()
{
	cout << "불러오기성공" << endl;
}

void Resource::share(const shared_ptr<Resource>& x)
{
	y = x; 
	cout << "겳합" << endl;
}

//void Resource::share(shared_ptr<Resource> x)
//{
//	y = x;
//	cout << "결합" << endl;
//}


Resource::~Resource()
{
	cout << "소멸자성공" << endl;
}
