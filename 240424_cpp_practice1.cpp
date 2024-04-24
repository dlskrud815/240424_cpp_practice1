#include <iostream>
using namespace std;

//함수명은 대문자로 시작
int GetTen() //int형 변수 리턴
{
	return 10; //int 10 리턴
}

int IntSum(int n1, int n2)
{
	return n1 + n2;
}


void PrintSomething(string message) //void형 ruturn x
{
	cout << message << endl;
}

int main() //cout 처리는 main문에서 처리하는 것이 이상적
{
	int num1, num2;

	cin >> num1 >> num2;

	int ten = GetTen(); //ten = 10;
	int result = IntSum(num1, num2);

	PrintSomething("안녕하세요:)");

	return 0;
}