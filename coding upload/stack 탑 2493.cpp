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
			//����ž �߰����� ��
			if (height < tops.top().second)
			{ // s.top().second
				cout << tops.top().first << " ";
				break;
			}
			//����ž ã�� ������ ��� pop
			tops.pop();
		}
		//���� ž�� ���ٸ�
		if (tops.empty())
		{
			cout << 0 << " ";
		}
		//���� ���̸� ���ÿ� Ǫ��
		tops.push(make_pair(i + 1, height));
	}

	return 0;
}