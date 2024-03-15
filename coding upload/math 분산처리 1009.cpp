#include <iostream>

using namespace std;

int main()
{
	int a, b, t, mul = 1;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> a >> b;
		mul = 1;
		for (int j = 0; j < b; ++j)
		{
			mul = (mul * a) % 10;
		}
		if (mul == 0)
		{
			cout << 10 << '\n';
		}
		else
		{
			cout << mul << '\n';
		}

	}
	return 0;
}