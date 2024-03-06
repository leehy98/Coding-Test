#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr;
	arr.resize(n + 1);

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= n; ++i)
	{
		arr[i] = (arr[i - 2] + arr[i - 1]) % 10007;
	}
	cout << arr[n];
}