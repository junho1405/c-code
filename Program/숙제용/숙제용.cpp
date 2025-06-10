#include <iostream>
using namespace std;
class gameobject
{
public:
int x = 0;
int y = 0;
int z = 0;
static int count;

    void SetX(int value)
    {
        if (value >= 100)
        {
            cout << "실패" << endl;
        }
        else
        {
            x = value;
        }
    }
    int& GetX()
    {
        return x;
    }
    // Y값을 구한다.
    void SetY(int value)
    {
        if (value >= 100)
        {
            cout << "실패" << endl;
        }
        else
        {
            y = value;
        }
    }
    int& GetY()
    {
        return y;
    }
    //Z값을 구한다.
    void SetZ(int value)
    {
        if (value >= 100)
        {
            cout << "실패" << endl;
        }
        else
        {
            z = value;
        }
    }
    int& GetZ()
    {
        return z;
    }
    
    void increase()
    {
        count = count + 1;
    }
};

int gameobject::count = 110;

int main()
{
    gameobject gameobject1;

    //object1
    gameobject1.SetX(10);
    gameobject1.SetY(10);
    gameobject1.SetZ(10);
    gameobject1.count;

    gameobject1.GetX();
    gameobject1.GetY();
    gameobject1.GetZ();



    cout << "gameobject1의 GetX의 값:" << gameobject1.GetX() << endl;
    cout << "gameobject1의 GetY의 값:" << gameobject1.GetY() << endl;
    cout << "gameobject1의 GetZ의 값:" << gameobject1.GetZ() << endl;
    cout << "생성된 객체 수: " << gameobject::count << endl;

#pragma endregion

}

