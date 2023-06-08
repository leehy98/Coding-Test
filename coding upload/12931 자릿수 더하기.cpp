#include <iostream>
#include <string>
using namespace std;
int solution(int n)
{
	int answer = 0;
	string str = to_string(n);
	for (char s : str)
	{
		answer += s - '0';
	}

	return answer;
}
int main()
{
	int n = 123;
	int result = solution(n);
	cout << result;
}