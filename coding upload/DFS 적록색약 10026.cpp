#include <vector>
#include <iostream>

using namespace std;

//5
//RRRBB
//GGBBB
//BBBRR
//BBRRR
//RRRRR
int N;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
char R = 82, G = 71, B = 66;

vector<vector<char>> vec;
vector<vector<bool>> visited;

void dfs(int x, int y, char color, bool colorBlind)
{
	visited[x][y] = true;

	for (int i = 0; i < 4; ++i)
	{
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if (nx >= 0 && ny >= 0 && nx < N && ny < N && !visited[nx][ny])
		{
			if (colorBlind) // »ö¸Í
			{
				if ((color == 'R' || color == 'G') && (vec[nx][ny] == 'R' || vec[nx][ny] == 'G')) // R G ÃÊ·Ï »¡°£»ö
				{
					dfs(nx, ny, color, colorBlind);
				}
				else if (color == vec[nx][ny]) // B ÆÄ¶õ»ö 
				{
					dfs(nx, ny, color, colorBlind);
				}
			}
			else // »ö¸Í x 
			{
				if (color == vec[nx][ny])
				{
					dfs(nx, ny, color, colorBlind);
				}
			}
		}
	}

}

int countRegions(bool colorBlind)
{
	int count = 0;
	visited.assign(N, vector<bool>(N, false));
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
		{
			if (!visited[i][j])
			{
				dfs(i, j, vec[i][j], colorBlind);
				count++;
			}
		}
	return count;
}

int main()
{
	cin >> N;
	vec.resize(N, vector<char>(N));

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> vec[i][j];
		}
	}
	int RGColorBlindness = countRegions(true);
	int NonRGColorBlindness = countRegions(false);

	cout << NonRGColorBlindness << " " << RGColorBlindness;

	return 0;
}