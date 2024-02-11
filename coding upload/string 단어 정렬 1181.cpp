#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string Str[20001];

bool compare(string a, string b)
{
	if (a.length() == b.length()) // 사전순 아스키값으로 정렬  B C A가 들어오면  A B C 로 정렬
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
		if (Str[i] == Str[i - 1]) // 같으면 건너뜀
		{
			continue;
		}
		cout << Str[i] << '\n';
	}

	return 0;
}