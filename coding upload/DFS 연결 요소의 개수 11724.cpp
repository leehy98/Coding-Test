#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> computer;
vector<bool>visited;

void dfs(int num)
{

	visited[num] = true;
	for (size_t i = 0; i < computer[num].size(); ++i)
	{
		int connected = computer[num][i];
		if (!visited[connected])
		{
			dfs(connected);
		}
	}
}

int main()
{
	int n, m, count = 0;
	cin >> n >> m;

	computer.resize(n + 1);
	visited.resize(n + 1, false);

	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		computer[u].push_back(v);
		computer[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i)
	{
		if (!visited[i])
		{
			dfs(i);
			count++;
		}
	}
	cout << count;
	return 0;
}