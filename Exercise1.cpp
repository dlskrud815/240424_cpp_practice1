#include <iostream>
using namespace std;

int Add(int num1, int num2)
{
	return num1 + num2;
}

int Sub(int num1, int num2)
{
	if (num1 >= num2)
	{
		return num1 - num2;
	}
	else
	{
		return num2 - num1;
	}
}

int Mul(int num1, int num2)
{
	return num1 * num2;
}

float Divide(int num1, int num2)
{
	return (float)num1 / (float)num2; //강제 형변환
}

/*
float Divide(float num1, float num2) //자동 형변환
{
	return num1 / num2;
}
*/

int main()
{
	int num1, num2;

	cin >> num1 >> num2;

	cout << "Add: " << Add(num1, num2) << endl;
	cout << "Sub: " << Sub(num1, num2) << endl;
	cout << "Mul: " << Mul(num1, num2) << endl;
	cout << "Divide: " << Divide(num1, num2) << endl;

	return 0;
}