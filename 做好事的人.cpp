#include <iostream>
using namespace std;
int main()
{
	char good_man;             // 定义变量，表示"做好事的人" 
	for (good_man = 'A'; good_man <= 'D'; good_man++)
	{
		int count = 0;         // 说真话的人数
		if (good_man != 'A')   // A说了真话
			count++;           
		if (good_man == 'C')   // B说了真话
			count++;
		if (good_man == 'D')   // C说了真话
			count++;
		if (good_man != 'D')   // D说了真话
			count++;
		if (count == 3)        // 有3个人说了真话
		{
			cout << good_man << endl; // 输出做好事的人
			break; 
		} 
	}
	return 0;
}
