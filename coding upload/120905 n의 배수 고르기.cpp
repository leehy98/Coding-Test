#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n, vector<int> numlist)
{
	vector<int> answer;
	for (int i = 0 ; i< numlist.size();i++)
	{
		if ((numlist[i] % n) == 0)
		{
			answer.push_back(numlist[i]);
		}
	}
	return answer;
}

int main()
{
	int n = 4;
	vector<int> numlist = { 1,2,3,4,5,6,7,8 };
	vector<int> result = solution(n, numlist);
	for (int res : result)
	{
		cout << res << " ";
	}

}