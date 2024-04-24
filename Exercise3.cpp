#include <iostream>
using namespace std;

int main()
{
	string input;
	string city[] = { "미국", "영국", "한국", "일본", "중국" };

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
			cout << "인덱스: " << i << ", 나라이름: " << city[i] << endl;
			break;
		}
		else
		{
			cout << "오류! 해당 나라이름은 존재하지 않습니다." << endl;
			break;
		}
	}


	return 0;
}