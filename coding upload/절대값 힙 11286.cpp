#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

struct compare
{
	bool operator() (int a, int b)
	{
		if (abs(a) == abs(b)) return a > b;
		return abs(a) > abs(b);
	}
};

int main()
{
	ios_base::sync_with_stdio(NULL); cin.tie(NULL);
	int n, x;
	cin >> n;
	priority_queue<int, vector<int>, compare> pq;

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