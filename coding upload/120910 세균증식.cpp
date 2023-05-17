#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
//어떤 세균은 1시간에 두배만큼 증식한다고 합니다. 처음 세균의 마리수 n과 경과한 시간 t가 매개변수로 주어질 때 t시간 후 세균의 수를 return하도록 solution 함수를 완성해주세요.
// pow () : base가 되는 숫자의 n 제곱을 구하는 함수
// ex) pow(2,10) 
// n(세균의 수) * pow(2(시간마다 2배씩 증가한다 했으니), t (시간)); 
int solution(int n, int t)
{
	return n * pow(2, t);
}

int main()
{
	int n = 2;
	int t = 10;
	int result = solution(n, t);
	cout << result;
	return 0;
}
