#include <iostream>
using namespace std;

void main()
{
	int intArray[5] = { 6, 7, 8, 9, 10 };
	int arraySize = sizeof(intArray) / sizeof(intArray[0]);

	// for-each: 배열의 모든 요소를 처음부터 끝까지 탐색
	int target_min = 2; // 인덱스 번호 최소값
	int target_max = 4; // 인덱스 번호 최대값
	int loop_count = 0;

	for (int num : intArray) // 인덱스 0번부터, 1씩 증가
	{
		if (loop_count > target_min && loop_count < target_max)
		{
			cout << "for-each문 " << num << endl;
		}
		loop_count++;
	}
	for (int i = target_min + 1; i < target_max; i++)
	{
		cout << "for문 " << intArray[i] << endl;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << intArray[i] << endl;
	}
}