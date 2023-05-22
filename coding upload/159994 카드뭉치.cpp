#include <string>
#include <vector>
#include <iostream>

using namespace std;

// goal�� �ε����� ��ȸ�ϸ鼭 ���� ī�并ġ�� �ε����� ������� ��ġ�Ǿ��ִ��� Ȯ���ϴ� ������ �����̴�.
// for���� ����� �ε����� ��ȸ �ϰ� ���ǹ��� ���������� ��� �� ��ġ�Ǿ������� Yes ���� , �ƴϸ� No�� ����

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