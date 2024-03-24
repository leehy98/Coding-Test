#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n;
    unordered_map<int, int> card_counts;
    for (int i = 0; i < n; ++i) 
    {
        int num;
        cin >> num;
        card_counts[num]++;
    }

    cin >> m;
    vector<int> queries(m);
    for (int i = 0; i < m; ++i) 
    {
        cin >> queries[i];
    }

    for (int i = 0; i < m; ++i) 
    {
        cout << card_counts[queries[i]] << ' ';
    }
    cout << '\n';
    return 0;
}
