#include <iostream>
using namespace std;

int main()
{
	string input;
	string city[] = { "�̱�", "����", "�ѱ�", "�Ϻ�", "�߱�" };

	cout << "list�� �Է��� ���� Ȯ���ϼ���." << endl;

	while (1) {
		cout << endl << "�Է�: ";
		cin >> input;

		if (input == "-1")
		{
			cout << "����" << endl;
			break;
		}
		else if (input == "list")
		{
			for (string country : city)
			{
				cout << country << endl;
			}
		}
		else {
			bool check = false;

			for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++)
			{
				if (input == city[i])
				{
					cout << "�ε���: " << i << ", �����̸�: " << city[i] << endl;
					check = true;
					break;
				}
			}

			if (check == false)
			{
				cout << "����! �ش� �����̸��� �������� �ʽ��ϴ�." << endl;
			}
		}
	}

	return 0;
}