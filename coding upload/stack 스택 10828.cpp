#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL); cin.tie(NULL);

	int n = 0;
	cin >> n;
	stack<int> st;
	while (n != 0)
	{
		string order;
		int pushNum;
		cin >> order;
		if (order == "push")
		{
			cin >> pushNum;
			st.push(pushNum);
		}
		else if (order == "top")
		{
			if (!st.empty()) cout << st.top() << '\n';

			else cout << -1 << '\n';
		}
		else if (order == "empty")
		{
			if (st.empty())cout << 1;
			else cout << 0;
			cout << '\n';
		}
		else if (order == "size")
		{
			cout << st.size() << '\n';
		}
		else if (order == "pop")
		{
			if (!st.empty())
			{
				cout << st.top() << '\n';
				st.pop();
			}
			else cout << -1 << '\n';

		}
		n -= 1;
	}
	return 0;
}