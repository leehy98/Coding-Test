#include <string>
#include <cmath>
#include <iostream>

using namespace std;
//sqrt�� Square Root(������)�� ���ڷ� �������� ���ϴ� �Լ���.C++�� <cmath> ���̺귯���� ���ԵǾ� ����
//sqrt �Լ��� �ϳ��� �Ű������� �޾� �� ���� �������� ��ȯ�Ѵ�.
//sqrt �Լ��� ����ϱ� ���ؼ��� ���α׷� ��ܿ� #include <cmath>�� �߰��ؾ� ��.
long long solution(long long n) {
	int answer = -1;
	long long sqrtN = static_cast<long long>(sqrt(n));
	if (sqrtN * sqrtN == n)
	{
		return (sqrtN + 1) * (sqrtN + 1);
	}
	else
	{
		return answer;
	}

}
int main()
{
	long long n = 3;
	long long result = solution(n);
	cout << result;
}