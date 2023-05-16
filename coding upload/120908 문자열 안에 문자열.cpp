#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 변수명.find("찾는 문자");
//string 클래스의 멤버함수로 문자열 안에 자신이 찾는 문자의 유무를 판단합니다.
//찾는 문자가 없을 경우는 string::npos를 리턴합니다.

//string::npos
//string 클래스의 멤버 상수, -1 값을 가지는 상수로 find() 함수 수행 시에 찾는 문자열이 없을 때 반환됩니다. 
//find 함수가 해당 문자열의 시작 위치를 반환해주므로 문자열을 찾았다면 그 위치에서 문자열의 크기만큼 더해준 위치에서부터 다시 해당 문자열을 탐색해나갑니다.

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
