#include <iostream>
#include <vector>
using namespace std;

vector<int> Nums;
vector<int> Sums; // 0 1 3 6 10

// Prefix Sum ´©ÀûÇÕ 
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N, M, Num, I, J;
	cin >> N >> M;

	Nums.resize(N);
	Sums.resize(N + 1, 0); 
	
	for (int i = 0; i < N; i++)
	{
		cin >> Nums[i];
		Sums[i + 1] = Sums[i] + Nums[i];
	}

	for (int i = 0; i < M; i++)
	{
		cin >> I >> J;
		cout << Sums[J] - Sums[I - 1] << '\n';  
	}

	return 0;
}
