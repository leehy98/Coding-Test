#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(string s) {
	int answer = 0;
	int sign = 1;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '+')
		{
			continue;
		}
		if (s[i] == '-')
		{
			sign = -1;
			continue;
		}
		answer = answer * 10 + (s[i] - '0');
	}
	return answer * sign;
}
int main()
{
	string s = "1234";
	int result = solution(s);
	cout << result;
}