#include <string>
#include <vector>
#include <iostream>
using namespace std;
// for 루프를 n번만큼 반복 시키고 i 를 long long 타입으로 cast 한 후 x에 곱하면 x만큼 더해진것과 같아진다.
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