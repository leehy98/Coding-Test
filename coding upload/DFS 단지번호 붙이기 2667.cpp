#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> map;
vector<vector<bool>> visited;
vector<int> houseCounts;

// DFS �Լ�
int dfs(int x, int y) 
{
    /* Ž���� �����Ҽ��ִ� ��ġ���� Ȯ��
        || (OR ������) : �μ��� �ϳ��� true ��� true ��ȯ �ƴϸ� false 
         // x �Ǵ� y�� ���� ���� ���̰ų�, ���� ��ġ�� ���� ���ų�, �̹� �湮�� ��� Ž�� �ߴ�
    */
    if (x < 0 || x >= N || y < 0 || y >= N || map[x][y] == 0 || visited[x][y])
        return 0;

    // ���� ��ġ �湮 ó��
    visited[x][y] = true;
    // ���� �� �����ؼ� 1 ���ϱ�
    int count = 1;
    // �����¿� Ž��
    count += dfs(x - 1, y);
    count += dfs(x + 1, y);
    count += dfs(x, y - 1);
    count += dfs(x, y + 1);
    return count;
}

int main() 
{
    cin >> N;
    map.resize(N, vector<int>(N));
    visited.resize(N, vector<bool>(N, false));

    // ���� ���� �Է�
    for (int i = 0; i < N; i++) 
    {
        string row;
        cin >> row;
        for (int j = 0; j < N; j++) 
        {
            map[i][j] = row[j] - '0';
        }
    }

    // ������ ���� �� ã��
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (map[i][j] == 1 && !visited[i][j]) // ���� ��ġ�� ���� �ְų� && �湮 ���� ���̰ų� 
            {
                houseCounts.push_back(dfs(i, j)); 
            }
        }
    }

    // ���� �� ���� �� �������� ����
    sort(houseCounts.begin(), houseCounts.end());

    // ��� ���
    cout << houseCounts.size() << "\n";
    for (int count : houseCounts) 
    {
        cout << count << "\n";
    }
    return 0;
}
