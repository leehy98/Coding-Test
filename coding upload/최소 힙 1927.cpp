#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL); cin.tie(NULL);
	int n, x;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 0)
		{
			if (pq.empty())
			{
				cout << 0 << '\n';
			}
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
		{
			pq.push(x);
		}

	}

	return 0;
}