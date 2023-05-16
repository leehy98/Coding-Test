#include <iostream>
#include <string>
#include <vector>
using namespace std;
// isdigit(int c);
// 매개변수로 들어온 char 타입이 10진수 숫자로 변경이 가능하면 0이 아닌 숫자(true), 아니면 0(false)를 반환하는 함수 입니다.
// 함수 원형을 살펴보면 매개변수 타입이 char 타입이 아닌 int 타입으로 받는걸 볼 수 있는데, 이는 char 타입이 아스키 코드 번호로 들어갈 수 있기 때문입니다.
// 아스키 코드표에서 48~57번에 매칭되는 문자 '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'가 들어오면 True를 반환하는 형태 입니다.

//'0'을 빼는 이유는 0에 해당하는 아스키코드 값을 문자열 속 정수에 대입되는 아스키코드 값을 빼면 해당 정수가 나오기때문에 answer에 더해 
//my_string에 있는 정수 합계를 구하기 위함 입니다.


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
