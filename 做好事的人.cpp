#include <iostream>
using namespace std;
int main()
{
	char good_man;             // �����������ʾ"�����µ���" 
	for (good_man = 'A'; good_man <= 'D'; good_man++)
	{
		int count = 0;         // ˵�滰������
		if (good_man != 'A')   // A˵���滰
			count++;           
		if (good_man == 'C')   // B˵���滰
			count++;
		if (good_man == 'D')   // C˵���滰
			count++;
		if (good_man != 'D')   // D˵���滰
			count++;
		if (count == 3)        // ��3����˵���滰
		{
			cout << good_man << endl; // ��������µ���
			break; 
		} 
	}
	return 0;
}
