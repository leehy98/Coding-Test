#include <string>
#include <vector>
#include <iostream>
using namespace std;
// �׸��� �˰��� : �׸���˰����� �� �״�� ������ �������� ���� ���տ� ���̴� ������ ��Ȳ���� �Ѿ� �������� �ش信 �����ϴ� ����̴�

int solution(int n, int m, vector<int> section)
{
	int answer = 1; // �ּ�  1���� ĥ�ؾ��ϴ� 1
	int num = section[0] + m - 1; // ĥ ���� ���� : section�� 0��° �ε���(2) + �ѷ� ����(4) - 1
												//ex) 2������ ĥ�ؾ��ϴϱ� 4���� �ѷ��� ������ 2 3 4 5 �� ĥ������ ����
	for (int i = 1; i < section.size(); i++) // for������ section ��ȸ 
	{

		if (num < section[i]) // ���� num�� section �� �ε������� ������ 
		{
			num = section[i] + m - 1; // ���� ������ ���� 
			answer++;					   // ĥ�ϴ� Ƚ�� ����
		}

	}
	return answer;
}
int main()
{
	int n = 8;
	int m = 4;
	vector<int> section = { 2,3,6 };
	int Result = solution(n, m, section);
	cout << Result << " ";
}
