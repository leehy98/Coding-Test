#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
//5
//3 1 4 3 2

int main()
{
	int n, time = 0, sum = 0;
	cin >> n;
	vector<int>atm(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> atm[i];
	}
	sort(atm.begin(), atm.end());

	for (int i = 0; i < n; ++i)
	{
		sum += atm[i];
		time += sum;
	}
	cout << time;

	return 0;
}