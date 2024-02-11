#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

// �����¿� �̵��� ���� ���� ����
int dx[] = { -1, 1, 0, 0 };// ����
int dy[] = { 0, 0, -1, 1 };// �¿� 

int main() 
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> maze(n, vector<int>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<int>> distance(n, vector<int>(m, 0)); 

    for (int i = 0; i < n; ++i) 
    {
        string row;
        cin >> row;
        for (int j = 0; j < m; ++j) 
        {
            maze[i][j] = row[j] - '0';
        }
    }

    queue<pair<int, int>> q; // ��ǥ�� ť
    // �ʱⰪ
    q.push({ 0, 0 });
    visited[0][0] = true;
    distance[0][0] = 1; //��������

    while (!q.empty())
    {
        auto [x, y] = q.front(); q.pop(); // �� �������� ť�� ���� �տ��ִ� ��ǥ��

        // �������� �����ߴ��� Ȯ��
        if (x == n - 1 && y == m - 1) 
        {
            cout << distance[x][y] << endl; // ���
            break; // ���� ��������
        }

        for (int i = 0; i < 4; ++i) // �����¿��̴ϱ� 4
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // n * m���� ����� �ʴ� ���� �̰ų� ��ǥ(x,y)�� ��ġ�� �����ִ� ���� �ְ� �湮���� �ʾҴٸ�
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] == 1 && !visited[nx][ny]) 
            {
                visited[nx][ny] = true; // ���� ��ġ �湮ó��
                q.push({ nx, ny }); // �湮�� ���� ��ġ ť�� ����
                distance[nx][ny] = distance[x][y] + 1; // �湮 ĭ�� ����
            }
        }
    }

    return 0;
}
