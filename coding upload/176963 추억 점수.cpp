#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

// STL map를 사용해 이름(key), 점수(value) 를 매핑해 2차원 배열이니 2중 for문을 사용하여 순회한 후 키에 해당되는 점수를 score에 더하면서 저장한 후 answer에
// 저장(push_back) 후 리턴
vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
	vector<int> answer;
	map<string, int> NameYear;
	for (int i = 0; i < name.size(); i++)
	{
		NameYear[name[i]] = yearning[i];
	}
	for (const auto& photos : photo)
	{
		int score = 0;
		for (const auto& person : photos)
		{
			if (NameYear.count(person))
			{
				score += NameYear[person];
			}
		}
		answer.push_back(score);
	}
	return answer;
}
int main()
{
	vector<string> name = { "may", "kein", "kain", "radi" };
	vector<int> yearning = { 4,3,2,1 };
	vector<vector<string>> photo = { {"may", "kein"},{"kain","ray"},{"radi","qwerty"} };
	vector<int> res = solution(name, yearning, photo);
	for (auto result : res)
	{
		cout << result << " ";
	}
}