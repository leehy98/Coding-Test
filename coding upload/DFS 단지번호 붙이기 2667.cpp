#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> map;
vector<vector<bool>> visited;
vector<int> houseCounts;

// DFS 함수
int dfs(int x, int y) 
{
    /* 탐색을 진행할수있는 위치인지 확인
        || (OR 연산자) : 인수중 하나라도 true 라면 true 반환 아니면 false 
         // x 또는 y가 지도 범위 밖이거나, 현재 위치에 집이 없거나, 이미 방문한 경우 탐색 중단
    */
    if (x < 0 || x >= N || y < 0 || y >= N || map[x][y] == 0 || visited[x][y])
        return 0;

    // 현재 위치 방문 처리
    visited[x][y] = true;
    // 현재 집 포함해서 1 더하기
    int count = 1;
    // 상하좌우 탐색
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

    // 지도 정보 입력
    for (int i = 0; i < N; i++) 
    {
        string row;
        cin >> row;
        for (int j = 0; j < N; j++) 
        {
            map[i][j] = row[j] - '0';
        }
    }

    // 단지별 집의 수 찾기
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (map[i][j] == 1 && !visited[i][j]) // 현재 위치에 집이 있거나 && 방문 안한 집이거나 
            {
                houseCounts.push_back(dfs(i, j)); 
            }
        }
    }

    // 단지 내 집의 수 오름차순 정렬
    sort(houseCounts.begin(), houseCounts.end());

    // 결과 출력
    cout << houseCounts.size() << "\n";
    for (int count : houseCounts) 
    {
        cout << count << "\n";
    }
    return 0;
}
