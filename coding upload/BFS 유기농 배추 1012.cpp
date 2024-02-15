#include <iostream>
#include <vector>

using namespace std;

int dx[] = { -1,1,0,0, };
int dy[] = { 0,0,-1,1 };
int m, n, k;

vector<vector<int>> field;
vector<vector<bool>> visited;

void dfs(int x, int y)
{
	visited[x][y] = true;
	for (int i = 0; i < 4; ++i)
	{
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if (nx >= 0 && nx < m && ny >= 0 && ny < n && field[nx][ny] == 1 && !visited[nx][ny])
		{
			dfs(nx, ny);
		}
	}
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		cin >> m >> n >> k;
		field = vector<vector<int>>(m, vector<int>(n, 0));
		visited = vector<vector<bool>>(m, vector<bool>(n, false));
		/*field.resize(m, vector<int>(n, 0));
		visited.resize(m, vector<bool>(n, false));*/

		for (int i = 0; i < k; ++i)
		{
			int x, y;
			cin >> x >> y;
			field[x][y] = 1;
		}

		int count = 0;
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (field[i][j] == 1 && !visited[i][j])
				{
					dfs(i, j);
					count++;
				}
			}
		}
		cout << count << '\n';
	}
}