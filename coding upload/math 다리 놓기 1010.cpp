#include <iostream>

using namespace std;

long long combination(int n, int m) 
{
	long long result = 1;
	for (int i = 1; i <= n; ++i) 
	{
		result *= (m - n + i);
		result /= i;
	}
	return result;
}

int main()
{
	int t, n, m;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> n >> m;
		cout << combination(n, m) << '\n';
	}
	return 0;
}