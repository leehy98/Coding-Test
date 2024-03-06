#include <vector>
#include <iostream>

using namespace std;

int C, R;
vector<vector<char>> vec;
vector<vector<bool>> visited;
vector<bool>alphabet(26, false);

int maxCount = 0;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void dfs(int x, int y, int count)
{
	maxCount = max(maxCount, count);

	for (int i = 0; i < 4; ++i)
	{
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if (nx >= 0 && ny >= 0 && nx < R && ny < C && !visited[nx][ny] && !alphabet[vec[nx][ny] - 'A'])
		{
			visited[nx][ny] = true;
			alphabet[vec[nx][ny] - 'A'] = true;
			dfs(nx, ny, count + 1);
			visited[nx][ny] = false;
			alphabet[vec[nx][ny] - 'A'] = false;

		}
	}
}

int main()
{
	cin >> R >> C;
	vec.resize(R, vector<char>(C));
	visited.resize(R, vector<bool>(C, false));

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			cin >> vec[i][j];
		}
	}
	visited[0][0] = true;
	alphabet[vec[0][0] - 'A'] = true;

	dfs(0, 0, 1);
	cout << maxCount;
}