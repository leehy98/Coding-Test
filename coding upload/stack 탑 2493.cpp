#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL);

	stack<pair<int, int>> tops;
	int n, height;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> height;

		while (!tops.empty())
		{
			//수신탑 발견했을 때
			if (height < tops.top().second)
			{ // s.top().second
				cout << tops.top().first << " ";
				break;
			}
			//수신탑 찾을 때까지 계속 pop
			tops.pop();
		}
		//수신 탑이 없다면
		if (tops.empty())
		{
			cout << 0 << " ";
		}
		//현재 높이를 스택에 푸쉬
		tops.push(make_pair(i + 1, height));
	}

	return 0;
}