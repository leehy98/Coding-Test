#include <iostream>
#include <string>
#include <vector>
using namespace std;
// isdigit(int c);
// �Ű������� ���� char Ÿ���� 10���� ���ڷ� ������ �����ϸ� 0�� �ƴ� ����(true), �ƴϸ� 0(false)�� ��ȯ�ϴ� �Լ� �Դϴ�.
// �Լ� ������ ���캸�� �Ű����� Ÿ���� char Ÿ���� �ƴ� int Ÿ������ �޴°� �� �� �ִµ�, �̴� char Ÿ���� �ƽ�Ű �ڵ� ��ȣ�� �� �� �ֱ� �����Դϴ�.
// �ƽ�Ű �ڵ�ǥ���� 48~57���� ��Ī�Ǵ� ���� '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'�� ������ True�� ��ȯ�ϴ� ���� �Դϴ�.

//'0'�� ���� ������ 0�� �ش��ϴ� �ƽ�Ű�ڵ� ���� ���ڿ� �� ������ ���ԵǴ� �ƽ�Ű�ڵ� ���� ���� �ش� ������ �����⶧���� answer�� ���� 
//my_string�� �ִ� ���� �հ踦 ���ϱ� ���� �Դϴ�.


int solution(string my_string)
{
	int answer = 0;
	for (auto str : my_string)
	{
		if (isdigit(str))
		{
			int a = str - '0';
			answer += a;
		}
	}
	return answer;
}

int main()
{
	string my_string = "ab6CDE443fgh22iJKlmn1o";
	int result = solution(my_string);
	cout << result;
	return 0;
}
