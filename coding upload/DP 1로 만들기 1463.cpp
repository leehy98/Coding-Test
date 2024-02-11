#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> dp(n + 1, 0); 

	for (int i = 2; i <= n; i++) // 1�� 1�� ����� Ƚ���� 0���� 2���� ���� 
	{
		dp[i] = dp[i - 1] + 1; // i��° �ε����� ���� i - 1 ��° �ε����� �� + 1
		if (i % 2 == 0) // 2�� ������ �������� 
		{
			dp[i] = min(dp[i], dp[i / 2] + 1); // i��° �ε����� ���� min�� �Ű����� �� ���� ��
		}
		if (i % 3 == 0) // 3�� ������ �������� 
		{
			dp[i] = min(dp[i], dp[i / 3] + 1);  // i��° �ε����� ���� min�� �Ű����� �� ���� ��
		}
	}

	cout << dp[n];
	return 0;
}
