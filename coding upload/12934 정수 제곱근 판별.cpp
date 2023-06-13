#include <string>
#include <cmath>
#include <iostream>

using namespace std;
//sqrt는 Square Root(제곱근)의 약자로 제곱근을 구하는 함수다.C++의 <cmath> 라이브러리에 포함되어 있음
//sqrt 함수는 하나의 매개변수를 받아 그 값의 제곱근을 반환한다.
//sqrt 함수를 사용하기 위해서는 프로그램 상단에 #include <cmath>를 추가해야 함.
long long solution(long long n) {
	int answer = -1;
	long long sqrtN = static_cast<long long>(sqrt(n));
	if (sqrtN * sqrtN == n)
	{
		return (sqrtN + 1) * (sqrtN + 1);
	}
	else
	{
		return answer;
	}

}
int main()
{
	long long n = 3;
	long long result = solution(n);
	cout << result;
}