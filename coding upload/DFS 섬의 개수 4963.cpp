#include <vector>
#include <iostream>

using namespace std;
// https://www.acmicpc.net/problem/4963
vector<vector<int>>land;
vector<vector<bool>>visited;

int width, hight;
int dx[] = { -1,-1,-1,0,0,1,1,1 };
int dy[] = { -1,0,1,-1,1,-1,0,1 };

void dfs(int x, int y)
{
	visited[x][y] = true;

	for (int i = 0; i < 8; ++i)
	{
		int nx = dx[i] + x;
		int ny = dy[i] + y;

		if (nx >= 0 && ny >= 0 && nx < hight && ny < width && land[nx][ny] == 1 && !visited[nx][ny])
		{
			dfs(nx, ny);

		}
	}
}

int main()
{
	while (true)
	{
		int count = 0;
		cin >> width >> hight;

		if (width == 0 && hight == 0) break;

		land.clear();
		visited.clear();
		land.resize(hight, vector<int>(width));
		visited.resize(hight, vector<bool>(width, false));

		for (int i = 0; i < hight; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				cin >> land[i][j];
			}
		}

		for (int i = 0; i < hight; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				if (land[i][j] == 1 && !visited[i][j])
				{
					dfs(i, j);
					count++;
				}
			}
		}
		cout << count << "\n";

	}

	return 0;
}