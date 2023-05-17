#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
//ASCII 코드는 128개의 문자를 나타내기 때문에 7비트만 사용한다.
//대문자와 소문자는 6번째오는 비트가 다르기때문에 비트 XOR 연산을 사용하여 6번째 오는 비트값을 반전시켜 대문자와 소문자를 바꾼다.
// 예시
// a 1100001
// A 1000001
// 비트는 오른쪽부터 읽는게 보편적이다
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
