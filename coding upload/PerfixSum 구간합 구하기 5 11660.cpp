#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> vec(N + 1, vector<int>(N + 1, 0)); 
    vector<vector<int>> prefixSum(N + 1, vector<int>(N + 1, 0));

   
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= N; j++) 
        {
            cin >> vec[i][j];
        }
    }

  
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= N; j++) 
        {
            prefixSum[i][j] = vec[i][j] + prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
        }
    }

    // 쿼리 처리
    for (int i = 0; i < M; i++) 
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // 구간 합 계산
        int sum = prefixSum[x2][y2] - prefixSum[x1 - 1][y2] - prefixSum[x2][y1 - 1] + prefixSum[x1 - 1][y1 - 1];
        cout << sum << '\n';
    }

    return 0;
}
