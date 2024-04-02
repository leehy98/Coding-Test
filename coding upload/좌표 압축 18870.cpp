#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// https://chanhuiseok.github.io/posts/algo-55/
// https://velog.io/@christer10/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EC%A2%8C%ED%91%9C-%EC%95%95%EC%B6%95
int n;
int a[1000001];
vector<int> v;

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		v.push_back(a[i]);
	}

	//오름차순 정렬
	sort(v.begin(), v.end());

	// 중복요소 제거
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < n; i++) 
	{
		int idx = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
		cout << idx << " ";
	}

	return 0;
}