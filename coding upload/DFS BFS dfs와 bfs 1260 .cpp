#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<bool>Visited;
vector<vector<int>>Vertexs;

void BFS(int SearchStartNum)
{
	queue<int> q;
	Visited[SearchStartNum] = true;
	q.push(SearchStartNum);

	while (!q.empty())
	{
		int current = q.front();
		q.pop();
		cout << current << " ";

		for (size_t i = 0; i < Vertexs[current].size(); i++)
		{
			int Connected = Vertexs[current][i];
			if (!Visited[Connected]) 
			{
				Visited[Connected] = true;
				q.push(Connected);
			}
		}
	}
}

int DFS(int SearchStartNum)
{
	Visited[SearchStartNum] = true;
	cout << SearchStartNum << " ";

	for (size_t i = 0; i < Vertexs[SearchStartNum].size(); i++)
	{
		int Connected = Vertexs[SearchStartNum][i];
		if (!Visited[Connected])
		{
			DFS(Connected);

		}

	}
	return 0;
}

int main()
{
	int Vertex, Edge, SearchStartNum;
	int ConnectedVertex, ConnectedVertexPair;
	cin >> Vertex >> Edge >> SearchStartNum;

	Visited.resize(Vertex + 1, false);
	Vertexs.resize(Vertex + 1);

	for (int i = 0; i < Edge; i++)
	{
		cin >> ConnectedVertex >> ConnectedVertexPair;
		Vertexs[ConnectedVertex].push_back(ConnectedVertexPair);
		Vertexs[ConnectedVertexPair].push_back(ConnectedVertex);

	}
	for (int i = 1; i <= Vertex; i++)
	{
		sort(Vertexs[i].begin(), Vertexs[i].end());
	}

	DFS(SearchStartNum);
	fill(Visited.begin(), Visited.end(), false);
	cout << '\n';
	BFS(SearchStartNum);
	return 0;
}