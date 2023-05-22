#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

// STL map�� ����� �̸�(key), ����(value) �� ������ 2���� �迭�̴� 2�� for���� ����Ͽ� ��ȸ�� �� Ű�� �ش�Ǵ� ������ score�� ���ϸ鼭 ������ �� answer��
// ����(push_back) �� ����
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