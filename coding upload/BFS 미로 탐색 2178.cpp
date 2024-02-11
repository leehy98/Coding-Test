#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

// 상하좌우 이동을 위한 방향 벡터
int dx[] = { -1, 1, 0, 0 };// 상하
int dy[] = { 0, 0, -1, 1 };// 좌우 

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

    queue<pair<int, int>> q; // 좌표값 큐
    // 초기값
    q.push({ 0, 0 });
    visited[0][0] = true;
    distance[0][0] = 1; //시작지점

    while (!q.empty())
    {
        auto [x, y] = q.front(); q.pop(); // 매 루프마다 큐의 제일 앞에있는 좌표값

        // 도착점에 도달했는지 확인
        if (x == n - 1 && y == m - 1) 
        {
            cout << distance[x][y] << endl; // 출력
            break; // 루프 빠져나감
        }

        for (int i = 0; i < 4; ++i) // 상하좌우이니까 4
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // n * m에서 벗어나지 않는 범위 이거나 좌표(x,y)깂 위치에 갈수있는 길이 있고 방문하지 않았다면
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] == 1 && !visited[nx][ny]) 
            {
                visited[nx][ny] = true; // 현재 위치 방문처리
                q.push({ nx, ny }); // 방문한 현재 위치 큐에 넣음
                distance[nx][ny] = distance[x][y] + 1; // 방문 칸수 증가
            }
        }
    }

    return 0;
}
