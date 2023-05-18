#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

//���ڿ� my_string�� �Ű������� �־��� ��, my_string �ȿ� �ִ� ���ڸ� ��� �������� ������ ����Ʈ�� return �ϵ��� solution �Լ��� �ۼ��غ�����.

// isdigit �Լ��� ����� char�� ��ȯ�� str ���ڿ��� ������ ��ȯ ������ ���ڸ� ������ ��ȯ�� �� '0'�� ���� ��
//answer�� push.back �� ����  sort �Լ��� ����� ���� �������� ������ ���
using namespace std;

vector<int> solution(string my_string)
{
	vector<int> answer;

	for (char str : my_string)
	{
		if (isdigit(str))
		{
			answer.push_back(str - '0');
		}

	}
	sort(answer.begin(), answer.end());
	return answer;
}

int main()
{
	string my_string = "hi12392";
	vector<int> result = solution(my_string);
	for (int results : result)
	{
		cout << results << ",";
	}
}