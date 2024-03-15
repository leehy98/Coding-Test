#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return  a > b;
};

int main()
{
	int n, k, count = 0;
	cin >> n >> k;
	vector<int> coins(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> coins[i];
	}
	sort(coins.begin(), coins.end(), compare);


	for (int i = 0; i < n; ++i)
	{
		while (coins[i] <= k)
		{
			if (k == 0)
			{
				break;
			}
			k -= coins[i];
			count++;
		}
	}
	cout << count;
	return 0;
}