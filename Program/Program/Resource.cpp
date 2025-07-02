#include "Resource.h"

Resource::Resource()
{
	cout << "불러오기성공" << endl;
}

void Resource::share(shared_ptr<Resource>)
{
}


Resource::~Resource()
{
	cout << "소멸자성공" << endl;
}
