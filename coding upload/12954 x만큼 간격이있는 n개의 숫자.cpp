#include <string>
#include <vector>
#include <iostream>
using namespace std;
// for ������ n����ŭ �ݺ� ��Ű�� i �� long long Ÿ������ cast �� �� x�� ���ϸ� x��ŭ �������Ͱ� ��������.
vector<long long> solution(int x, int n)
{
	vector<long long> answer;
	for (int i = 1; i <= n; i++)
	{
		answer.push_back(static_cast<long long>(i)*x);
	}
	return answer;
}
int main()
{
	int x = 5;
	int n = 2;
	vector<long long> result = solution(x, n);
	for (long long res : result)
	{
		cout << res << " ";
	}
}