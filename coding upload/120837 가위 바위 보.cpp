#include <iostream>
#include <string>
#include <vector>
using namespace std;
// ������ 2 ������ 0 ���� 5�� ǥ���մϴ�. ���� ���� ���� ���� ������� ��Ÿ�� ���ڿ� rsp�� �Ű������� �־��� ��, 
//rsp�� ����� ���� ���� ���� ��� �̱�� ��츦 ������� ��Ÿ�� ���ڿ��� return�ϵ��� solution �Լ��� �ϼ��غ�����.

//for������ rsp ���������鼭 switch�� ���� �ش� ���̽��� �´� ���ڸ� answer�� ������ ����

string solution(string rsp)
{
	string answer = "";
	for (char RSP : rsp)
	{
		switch (RSP)
		{
		case '2':
			answer += '0';
			break;
		case '0':
			answer += '5';
			break;
		case '5':
			answer += '2';
			break;
		}
	}
	return answer;
}

int main()
{
	string rsp = "255";
	string result = solution(rsp);
	cout << result;
	return 0;
}
