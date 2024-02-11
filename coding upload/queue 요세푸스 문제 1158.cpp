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

	for (int i = 1; i <= n; i++) // 1���� n ������ ���� ť�� push
	{
		q.push(i);
	}
	while (!q.empty()) // ť�� �������� 
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			q.pop();
		}
		vec.push_back(q.front()); // k��° ���ڸ� vec�� �߰� �� ť���� ����
		q.pop();
	}

	cout << "<";
	for (size_t i = 0; i < vec.size(); ++i)
	{
		cout << vec[i];
		if (i < vec.size() - 1) // ������ ���ҿ��� ��ǥ �ȳ����� ���ǹ� ó��
		{
			cout << ", ";
		}
	}
	cout << ">";
}


