#include <iostream>
#include <string>
#include <vector>
using namespace std;
// ������.find("ã�� ����");
//string Ŭ������ ����Լ��� ���ڿ� �ȿ� �ڽ��� ã�� ������ ������ �Ǵ��մϴ�.
//ã�� ���ڰ� ���� ���� string::npos�� �����մϴ�.

//string::npos
//string Ŭ������ ��� ���, -1 ���� ������ ����� find() �Լ� ���� �ÿ� ã�� ���ڿ��� ���� �� ��ȯ�˴ϴ�. 
//find �Լ��� �ش� ���ڿ��� ���� ��ġ�� ��ȯ���ֹǷ� ���ڿ��� ã�Ҵٸ� �� ��ġ���� ���ڿ��� ũ�⸸ŭ ������ ��ġ�������� �ٽ� �ش� ���ڿ��� Ž���س����ϴ�.

int solution(string str1, string str2)
{
	int answer = 0;
	if (str1.find(str2) != string::npos)
	{
		answer = 1;
	}
	else
	{
		answer = 2;
	}
	return answer;
}

int main()
{
	string str1 = "ab6CDE443fgh22iJKlmn1o";
	string str2 = "6CD";
	int result = solution(str1, str2);
	cout << result;
	return 0;
}
