#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> dp(n + 1, 0); 

	for (int i = 2; i <= n; i++) // 1을 1로 만드는 횟수는 0번임 2부터 시작 
	{
		dp[i] = dp[i - 1] + 1; // i번째 인덱스의 값은 i - 1 번째 인덱스의 값 + 1
		if (i % 2 == 0) // 2로 나누어 떨어지면 
		{
			dp[i] = min(dp[i], dp[i / 2] + 1); // i번째 인덱스의 값은 min의 매개변수 중 작은 값
		}
		if (i % 3 == 0) // 3로 나누어 떨어지면 
		{
			dp[i] = min(dp[i], dp[i / 3] + 1);  // i번째 인덱스의 값은 min의 매개변수 중 작은 값
		}
	}

	cout << dp[n];
	return 0;
}
