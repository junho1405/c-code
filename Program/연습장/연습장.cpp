#include <iostream>
using namespace std;

class Item
{
private:
    char grade;
    int* price;

public:
    Item()
    {
        grade = 'A';
        price = new int;
        *price = 0;
    }

    // 얕은 복사 생성자
    Item(const Item& clone)
    {
        grade = clone.grade;
        price = new int;
        *price = *(clone.price);
    }

    void information()
    {
        cout << "등급 : " << grade << endl;
        cout << "가격 : " << *price << endl;
    }

    // 소멸자에서 delete 하지 않음 -> 얕은 복사 안전하게 사용 가능
    ~Item()
    {
        delete price;
        cout << "소멸자 작동" << endl;
    }
};

int main()
{
    Item item1;
    Item item2(item1);

    item1.information();
    item2.information();

    return 0;
}
