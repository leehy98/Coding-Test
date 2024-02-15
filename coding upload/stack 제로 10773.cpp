#include <stack>
#include <iostream>

using namespace std;

int main()
{
	int k, sum = 0;
	cin >> k;
	stack<int> st;

	for (int i = 0; i < k; ++i)
	{
		int num;
		cin >> num;

		if (num > 0)
		{
			st.push(num);
			sum += num;
		}
		else if (num == 0 && !st.empty())
		{
			sum -= st.top();
			st.pop();
		}
	}
	cout << sum;

	return 0;
}