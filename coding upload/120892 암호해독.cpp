#include <iostream>
#include <string>
#include <vector>
using namespace std;
// for문으로 문자열의 길이만큼 인덱스를 탐색하면서  code의 배수번째 인덱스를 answer에 더해 암호를 완성합니다.
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
