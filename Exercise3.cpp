#include <iostream>
using namespace std;

int main()
{
	string input;
	string city[] = { "미국", "영국", "한국", "일본", "중국" };

	cout << "list를 입력해 나라를 확인하세요." << endl;

	while (1) {
		cout << endl << "입력: ";
		cin >> input;

		if (input == "-1")
		{
			cout << "종료" << endl;
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
					cout << "인덱스: " << i << ", 나라이름: " << city[i] << endl;
					check = true;
					break;
				}
			}

			if (check == false)
			{
				cout << "오류! 해당 나라이름은 존재하지 않습니다." << endl;
			}
		}
	}

	return 0;
}