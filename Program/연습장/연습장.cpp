#include<iostream>


int main()
{

	int p = 0;
	int l = 0;
	int w = 0;
	consum* inventory[3];
	lantern lantern1;
	water water1;
	potion potion1;
	inventory[0] = &lantern1;
	inventory[1] = &potion1;
	inventory[2] = &water1;
	while (true)
	{

		cout << "[1]포션 [2]랜턴 [3]물" << endl;
		cout << " 포션 : " << p << " 랜턴 :" << l << " 물 : " << w << endl;
		int input;
		cin >> input;
		if (input == 1)
		{
			if (p + l + w < 5)
			{
				cout << "포션이 생성되었습니다." << endl;
				p++;
			}
			else
			{
				cout << "인벤토리가 가득찼습니다." << endl;
			}
		}
		else if (input == 2)
		{
			if (p + l + w < 5)
			{
				cout << "랜턴이 생성되었습니다." << endl;
				l++;
			}
			else
			{
				cout << "인벤토리가 가득찼습니다." << endl;
			}
		}
		else if (input == 3)
		{
			if (p + l + w < 5)
			{
				cout << "물이 생성되었습니다." << endl;
				w++;
			}
			else
			{
				cout << "인벤토리가 가득찼습니다." << endl;
			}
		}
		else if (input == p)
		{
			if (p > 0)
			{
				for (int i = 0; i < 3; i++) {
					if (p <= 0) break;
					inventory[i]->use();
					p--;
				}
			}else 
			{
				cout << "포션이 부족합니다." << endl;
			}
			
		}
		else {
			cout << "잘못된 값을 입력했습니다." << endl;
		}


	}


}