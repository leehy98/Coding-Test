#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string Str[20001];

bool compare(string a, string b)
{
	if (a.length() == b.length()) // ������ �ƽ�Ű������ ����  B C A�� ������  A B C �� ����
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> Str[i];
	}
	sort(Str, Str + n, compare);

	for (int i = 0; i < n; i++)
	{
		if (Str[i] == Str[i - 1]) // ������ �ǳʶ�
		{
			continue;
		}
		cout << Str[i] << '\n';
	}

	return 0;
}