#include <iostream>
using namespace std;

int main()
{
	string input;
	string city[] = { "�̱�", "����", "�ѱ�", "�Ϻ�", "�߱�" };

	cin >> input;

	if (input == "list")
	{
		for (string country : city)
		{
			cout << country << endl;
		}
	}

	for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++)
	{
		if (input == city[i])
		{
			cout << "�ε���: " << i << ", �����̸�: " << city[i] << endl;
			break;
		}
		else
		{
			cout << "����! �ش� �����̸��� �������� �ʽ��ϴ�." << endl;
			break;
		}
	}


	return 0;
}