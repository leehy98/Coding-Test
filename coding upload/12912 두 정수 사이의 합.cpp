#include <iostream>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long sum = 0;
	long long start = min(a, b); // a,b �� ������
	long long end = max(a, b); // a,b �� ū��
	for (int i = start; i <= end; i++)
	{
		sum += i;
		
	}
	return sum;
}

int main()
{
	long long result = solution(5, 3);
	cout << result;
}