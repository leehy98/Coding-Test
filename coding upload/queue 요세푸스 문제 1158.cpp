#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	queue<int>q;
	vector<int>vec;

	for (int i = 1; i <= n; i++) // 1부터 n 까지의 숫자 큐에 push
	{
		q.push(i);
	}
	while (!q.empty()) // 큐가 빌때까지 
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			q.pop();
		}
		vec.push_back(q.front()); // k번째 숫자를 vec에 추가 후 큐에서 삭제
		q.pop();
	}

	cout << "<";
	for (size_t i = 0; i < vec.size(); ++i)
	{
		cout << vec[i];
		if (i < vec.size() - 1) // 마지막 원소에는 쉽표 안나오게 조건문 처리
		{
			cout << ", ";
		}
	}
	cout << ">";
}


