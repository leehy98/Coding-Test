#include <iostream>
#include <string>
#include <vector>
using namespace std;
// for������ ���ڿ��� ���̸�ŭ �ε����� Ž���ϸ鼭  code�� �����° �ε����� answer�� ���� ��ȣ�� �ϼ��մϴ�.
string solution(string cipher, int code) {
	string answer = "";
	for (int i = 0; i < cipher.length(); i++)
	{
		if ((i + 1) % code == 0)
		{
			answer += cipher[i];
		}
	}
	return answer;
}

int main()
{
	string cipher = "dfjardstddetckdaccccdegk";
	int code = 4;
	string result = solution(cipher, code);
	cout << result;
	return 0;
}
