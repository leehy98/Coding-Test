#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 4 7 20 10 15 17
int main() 
{
    ios_base::sync_with_stdio(NULL); cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> trees(N);

    for (int i = 0; i < N; i++) 
    {
        cin >> trees[i];
    }

    int start = 0;
    int end = *max_element(trees.begin(), trees.end());
    int result = 0;
   // cout << "end : " << end << '\n';
    while (start <= end) 
    {
       
        int mid = start + (end - start) / 2;
       // cout << "mid : " << mid << '\n';
        long long total = 0;

        for (int tree : trees) 
        {
            if (tree > mid) 
            {
                total += tree - mid;
              // cout <<  "total : " << total << '\n';
            }
        }
        if (total >= M) 
        {
            result = mid;
            start = mid + 1;
            //cout << "start : " << start << '\n';
           // cout << endl;
        }
        else 
        {
            end = mid - 1;
            //cout << endl;
        }
    }

    cout << result << endl;
    return 0;
}
