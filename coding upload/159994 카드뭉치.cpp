#include <string>
#include <vector>
#include <iostream>

using namespace std;

// goal의 인덱스를 순회하면서 각각 카드뭉치의 인덱스가 순서대로 배치되어있는지 확인하는 간단한 문제이다.
// for문을 사용해 인덱스를 순회 하고 조건문을 빠져나오면 모두 잘 배치되어있으니 Yes 리턴 , 아니면 No를 리턴

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
	int Cards1_Index = 0;
	int Cards2_Index = 0;

	for (const string& word : goal)
	{
		if (Cards1_Index < cards1.size() && word == cards1[Cards1_Index])
		{
			Cards1_Index++;
		}
		else if (Cards2_Index < cards2.size() && word == cards2[Cards2_Index])
		{
			Cards2_Index++;
		}
		else
		{
			return "No";
		};
	}
	return "Yes";

};
int main()
{
	vector<string> cards1 = { "i", "drink", "water" };
	vector<string> cards2 = { "want", "to" };
	vector<string> goal = { "i", "want", "to", "drink", "water" };

	string res = solution(cards1, cards2, goal);
	cout << res << " ";
};