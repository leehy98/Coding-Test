#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
//ASCII �ڵ�� 128���� ���ڸ� ��Ÿ���� ������ 7��Ʈ�� ����Ѵ�.
//�빮�ڿ� �ҹ��ڴ� 6��°���� ��Ʈ�� �ٸ��⶧���� ��Ʈ XOR ������ ����Ͽ� 6��° ���� ��Ʈ���� �������� �빮�ڿ� �ҹ��ڸ� �ٲ۴�.
// ����
// a 1100001
// A 1000001
// ��Ʈ�� �����ʺ��� �д°� �������̴�
string solution(string my_string)
{
	string answer = "";
	for (char str : my_string)
	{
		answer += str ^ 32;
	}
	return answer;
}

int main()
{
	string my_string = "AAAaaa";
	string result = solution(my_string);
	cout << result;
	return 0;
}
